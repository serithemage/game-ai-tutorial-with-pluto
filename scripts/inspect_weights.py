#!/usr/bin/env python3
"""Inspect Pluto PLWB metadata and validate its declared tensor ranges.

This parses file bytes; it does not run Pluto or reconstruct its training.
The payload offset follows the 64-byte alignment observed in this artifact.
"""
import argparse, collections, hashlib, json, math, pathlib, struct

parser = argparse.ArgumentParser()
parser.add_argument('path', type=pathlib.Path)
parser.add_argument('--out', type=pathlib.Path, default=pathlib.Path('analysis/evidence'))
args = parser.parse_args()
blob = args.path.read_bytes()
if len(blob) < 16 or blob[:4] != b'PLWB': raise SystemExit('Not a PLWB container')
version, header_len = struct.unpack_from('<IQ', blob, 4)
if version != 1: raise SystemExit(f'Unsupported container version: {version}')
header_end = 16 + header_len
header = json.loads(blob[16:header_end])
payload_start = (header_end + 63) // 64 * 64
errors = []
if header_end > len(blob): errors.append('Truncated header')
if blob[header_end:payload_start] != bytes(payload_start-header_end): errors.append('Nonzero header padding')
if len(blob) != payload_start + header['total_bytes']: errors.append('File size / payload length mismatch')
counts, elements = collections.Counter(), collections.Counter()
ranges = []
for tensor in header['tensors']:
    dtype = tensor.get('dtype', header['dtype'])
    count = math.prod(tensor['shape'])
    counts[dtype] += 1; elements[dtype] += count
    item_size = {'float32': 4, 'int8': 1, 'bfloat16': 2}[dtype]
    if tensor['nbytes'] != count * item_size: errors.append(tensor['name'] + ': shape/size mismatch')
    ranges.append((tensor['offset'], tensor['offset']+tensor['nbytes'], tensor['name']))
    if dtype == 'int8':
        ranges.append((tensor['scale_offset'], tensor['scale_offset']+4*tensor['scale_len'], tensor['name']+':scales'))
for start, end, name in ranges:
    if start < 0 or end > header['total_bytes']: errors.append(name + ': outside payload')
for left, right in zip(sorted(ranges), sorted(ranges)[1:]):
    if left[1] > right[0]: errors.append(left[2] + ' overlaps ' + right[2])
summary = {'magic':'PLWB','container_version':version,'sha256':hashlib.sha256(blob).hexdigest(),'json_bytes':header_len,'header_end':header_end,'padding_bytes':payload_start-header_end,'payload_start':payload_start,'payload_bytes':header['total_bytes'],'file_size':len(blob),'tensor_counts':dict(counts),'tensor_elements_by_dtype':dict(elements),'total_tensor_elements':sum(elements.values()),'validation_errors':errors,'limitations':['Header names and model_config are artifact metadata, not proof of runtime semantics.','Tensor elements include any serialized parameters or buffers; this is not a verified trainable parameter count.','Payload alignment is checked for this version and release only.']}
args.out.mkdir(parents=True, exist_ok=True)
(args.out/'weights-header.json').write_text(json.dumps(header, indent=2))
(args.out/'weights-summary.json').write_text(json.dumps(summary, indent=2))
print(json.dumps(summary, indent=2))
raise SystemExit(bool(errors))
