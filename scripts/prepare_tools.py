#!/usr/bin/env python3
"""Prepare the pinned Pluto release and local Ghidra/JDK without global setup."""
import hashlib, json, os, pathlib, subprocess, tarfile, urllib.request, zipfile
ROOT = pathlib.Path(__file__).resolve().parents[1]

def digest(path):
    h = hashlib.sha256()
    with path.open('rb') as f:
        for chunk in iter(lambda: f.read(1024 * 1024), b''): h.update(chunk)
    return h.hexdigest()

def extract_zip(archive, destination):
    with zipfile.ZipFile(archive) as z:
        for member in z.infolist():
            target = (destination / member.filename).resolve()
            if not target.is_relative_to(destination.resolve()): raise ValueError('Unsafe ZIP path')
        z.extractall(destination)
        for member in z.infolist():
            mode = (member.external_attr >> 16) & 0o777
            if mode: os.chmod(destination / member.filename, mode)

for name in ['pluto', 'ghidra', 'temurin21-binaries']:
    record = json.loads((ROOT/'analysis/evidence'/f'download-{name}.json').read_text())
    archive = ROOT / record['file']; archive.parent.mkdir(parents=True, exist_ok=True)
    if not archive.exists():
        print('Downloading ' + archive.name, flush=True)
        temp = archive.with_suffix(archive.suffix + '.part')
        urllib.request.urlretrieve(record['url'], temp)
        if digest(temp) != record['sha256']: raise ValueError('Download digest mismatch: ' + name)
        temp.replace(archive)
    if digest(archive) != record['sha256']: raise ValueError('Archive digest mismatch: ' + name)
    if name == 'pluto' and not (ROOT/'vendor/pluto/pluto/pluto_weights.bin').exists(): extract_zip(archive, ROOT/'vendor/pluto')
    if name == 'ghidra' and not (ROOT/'tools/ghidra_12.1.4_PUBLIC').exists(): extract_zip(archive, ROOT/'tools')
    if name == 'temurin21-binaries' and not (ROOT/'tools/jdk-21.0.9+10').exists():
        with tarfile.open(archive) as tar: tar.extractall(ROOT/'tools', filter='data')
    print('Verified ' + name, flush=True)

if os.uname().sysname != 'Darwin' or os.uname().machine != 'arm64':
    raise SystemExit('This preparation script targets macOS ARM64. Configure a matching JDK and Ghidra for other hosts.')
ghidra = ROOT/'tools/ghidra_12.1.4_PUBLIC'
native = ghidra/'Ghidra/Features/Decompiler/os/mac_arm_64/decompile'
if not native.exists():
    source = ghidra/'Ghidra/Features/Decompiler/src/decompile/cpp'
    subprocess.run(['make','-j6','ghidra_opt','ARCH_TYPE=-arch arm64','ADDITIONAL_FLAGS=-mmacosx-version-min=12.0','OSDIR=mac_arm_64'],cwd=source,check=True)
    native.parent.mkdir(parents=True,exist_ok=True)
    import shutil
    shutil.copy2(source/'ghidra_opt',native)
    native.chmod(0o755)
print('Prepared local Pluto artifacts, JDK and Ghidra. Target binaries were not executed.')
