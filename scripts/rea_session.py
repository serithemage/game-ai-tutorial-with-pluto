#!/usr/bin/env python3
"""Run a local REA stdio session and preserve exact tool responses.

Requests go in tools/requests/NNN-name.json as {"name": ..., "arguments": ...}.
A request can also contain {"stop": true} to close the current target and exit.
Only use REA tool names and argument schemas from analysis/evidence/rea-mcp-tools.json.
"""
import argparse, json, os, pathlib, queue, subprocess, threading, time

parser = argparse.ArgumentParser()
parser.add_argument('--session', default='infer', choices=['infer', 'dll'])
parser.add_argument('--replay', type=pathlib.Path, help='Replay a retained request manifest instead of polling')
args = parser.parse_args()
SESSION = '' if args.session == 'infer' else 'dll-'
ROOT = pathlib.Path(__file__).resolve().parents[1]
EVIDENCE = ROOT / 'analysis/evidence'
REQUESTS = ROOT / ('tools/requests' if args.session == 'infer' else 'tools/requests-dll')
REQUESTS.mkdir(exist_ok=True)
env = os.environ.copy()
env['GHIDRA_INSTALL_DIR'] = str(ROOT / 'tools/ghidra_12.1.4_PUBLIC')
env['JAVA_HOME'] = str(ROOT / 'tools/jdk-21.0.9+10/Contents/Home')
log = (EVIDENCE / ('rea-' + SESSION + 'session.stderr.log')).open('w')
proc = subprocess.Popen([str(ROOT / 'node_modules/.bin/rea'), '--mcp'], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=log, text=True, env=env)
messages = queue.Queue()
def reader():
    for line in proc.stdout:
        try: messages.put(json.loads(line))
        except json.JSONDecodeError: pass
    messages.put({'_eof': True})
threading.Thread(target=reader, daemon=True).start()
seq = 0
def rpc(method, params):
    global seq
    seq += 1
    proc.stdin.write(json.dumps({'jsonrpc': '2.0', 'id': seq, 'method': method, 'params': params}) + '\n')
    proc.stdin.flush()
    while True:
        item = messages.get(timeout=900)
        if item.get('_eof'): raise RuntimeError('REA exited')
        if item.get('id') == seq: return item
try:
    rpc('initialize', {'protocolVersion': '2024-11-05', 'capabilities': {}, 'clientInfo': {'name': 'pluto-research', 'version': '1.0'}})
    proc.stdin.write(json.dumps({'jsonrpc': '2.0', 'method': 'notifications/initialized'}) + '\n'); proc.stdin.flush()
    listing = rpc('tools/list', {})
    (EVIDENCE / ('rea-' + SESSION + 'mcp-tools.json')).write_text(json.dumps(listing, indent=2))
    print('READY: tool schemas saved', flush=True)
    if args.replay:
        for request in json.loads(args.replay.read_text()):
            arguments = request.get('arguments', {}).copy()
            if 'path' in arguments and not pathlib.Path(arguments['path']).is_absolute():
                arguments['path'] = str(ROOT / arguments['path'])
            print('RUNNING ' + request['label'], flush=True)
            response = rpc('tools/call', {'name':request['name'], 'arguments':arguments})
            (EVIDENCE / ('rea-' + SESSION + request['label'] + '.json')).write_text(json.dumps(response, indent=2))
            if response.get('error') or response.get('result', {}).get('isError'):
                raise RuntimeError('REA request failed: ' + request['label'])
        response = rpc('tools/call', {'name':'close_binary','arguments':{}})
        (EVIDENCE / ('rea-' + SESSION + 'session-close.json')).write_text(json.dumps(response, indent=2))
    while not args.replay:
        pending = sorted(p for p in REQUESTS.glob('*.json') if not p.with_suffix('.done').exists())
        if not pending:
            time.sleep(0.5); continue
        path = pending[0]; request = json.loads(path.read_text())
        if request.get('stop'):
            response = rpc('tools/call', {'name': 'close_binary', 'arguments': {}})
            (EVIDENCE / ('rea-' + SESSION + 'session-close.json')).write_text(json.dumps(response, indent=2))
            path.with_suffix('.done').touch(); break
        print('RUNNING ' + path.stem, flush=True)
        response = rpc('tools/call', request)
        (EVIDENCE / ('rea-' + SESSION + path.stem + '.json')).write_text(json.dumps(response, indent=2))
        path.with_suffix('.done').touch()
        print('SAVED ' + path.stem, flush=True)
finally:
    proc.terminate()
    try: proc.wait(timeout=15)
    except subprocess.TimeoutExpired: proc.kill(); proc.wait()
    log.close()
