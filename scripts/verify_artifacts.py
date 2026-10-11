#!/usr/bin/env python3
"""Check the actual Pages artifact, anchors, selected evidence and license scope."""
import html.parser,json,pathlib,re,urllib.parse
ROOT=pathlib.Path(__file__).resolve().parents[1]
SITE=ROOT/'_site'
errors=[];checks=0

def check(condition,message):
 global checks
 checks+=1
 if not condition:errors.append(message)

class Document(html.parser.HTMLParser):
 def __init__(self,path):
  super().__init__();self.path=path;self.ids=set();self.links=[];self.scripts=[];self.has_lang=False
 def handle_starttag(self,tag,attrs):
  attrs=dict(attrs)
  if tag=='html':self.has_lang=attrs.get('lang')=='ko'
  if 'id' in attrs:
   check(attrs['id'] not in self.ids,f'{self.path.name}: duplicate id {attrs["id"]}')
   self.ids.add(attrs['id'])
  for attr in ['href','src']:
   if attrs.get(attr):self.links.append(attrs[attr])
  if tag=='script':self.scripts.append(attrs.get('src'))

documents={}
for path in SITE.rglob('*.html'):
 d=Document(path);d.feed(path.read_text());documents[path.resolve()]=d
 check(d.has_lang,f'{path.name}: Korean document language missing')
for path,d in documents.items():
 for link in d.links:
  parts=urllib.parse.urlsplit(link)
  if parts.scheme or parts.netloc:continue
  destination=(path.parent/urllib.parse.unquote(parts.path)).resolve() if parts.path else path
  if destination.is_dir():destination=destination/'index.html'
  check(destination.is_relative_to(SITE.resolve()),f'{path.name}: link outside deployed site: {link}')
  check(destination.exists(),f'{path.name}: missing deployed file {link}')
  if parts.fragment and destination.suffix=='.html' and destination.exists():
   target=documents.get(destination);check(target is not None and urllib.parse.unquote(parts.fragment) in target.ids,f'{path.name}: missing anchor {link}')
for path in SITE.rglob('*.json'):
 try:json.loads(path.read_text());checks+=1
 except json.JSONDecodeError as exc:errors.append(f'{path.name}: {exc}')
index=SITE/'index.html';check(index.exists(),'Site index missing')
if index.exists():
 source=index.read_text();check('game-ai-tutorial-with-pluto' in source,'Renamed repository missing')
 for section in ['whole','inputs','network','memory','actions','training','deployment','recap']:
  check(section in documents[index.resolve()].ids,f'Tutorial section missing: {section}')
 check('CC BY 4.0' in source and '원저작자' in source,'License and third-party scope missing')
 check('https://creativecommons.org/licenses/by/4.0/deed.ko' in source,'CC license link missing')
 check('269' in source and '109' in source and '256' in source,'Analysis-grounded dimensions missing')
 check('교육용' in source and '훈련 알고리즘' in source,'Evidence boundaries missing')
 check('01-neural' not in source and '02-instructor' not in source,'Split guides still linked')
check((SITE/'LICENSE.txt').exists(),'License text missing')
check((SITE/'THIRD_PARTY_NOTICES.html').exists(),'Third-party notices missing')
for path in SITE.rglob('*'):
 if path.is_file():
  check(path.suffix not in ['.exe','.dll','.bin'],'Target binary accidentally deployed')
  check(not any(x in path.name for x in ['doctor','snapshot','mcp-tools']),f'Local diagnostics accidentally deployed: {path.name}')
result={'checks':checks,'failures':len(errors),'errors':errors,'scope':['deployed relative links and anchors','Korean HTML and unique IDs','selected JSON','license and third-party notices','tutorial chapters','excluded binaries and local diagnostics'],'not_checked':['StarCraft runtime','training reconstruction','play strength','all input or action semantics']}
encoded=json.dumps(result,ensure_ascii=False,indent=2)
(ROOT/'analysis/evidence/artifact-verification.json').write_text(encoded)
(SITE/'analysis/evidence/artifact-verification.json').write_text(encoded)
print(json.dumps(result,ensure_ascii=False,indent=2))
raise SystemExit(bool(errors))
