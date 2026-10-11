import {chromium} from 'playwright';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import path from 'node:path';
const base=process.env.BASE_URL||'http://127.0.0.1:8000/';
const chrome=process.env.CHROME_PATH||(process.platform==='darwin'?'/Applications/Google Chrome.app/Contents/MacOS/Google Chrome':undefined);
const browser=await chromium.launch({executablePath:chrome,headless:true});
const messages=[];const screenshots=path.resolve('tools/site-review');fs.mkdirSync(screenshots,{recursive:true});
try{
 const page=await browser.newPage({viewport:{width:1440,height:1100},reducedMotion:'reduce'});
 page.on('pageerror',e=>messages.push(e.message));page.on('requestfailed',r=>messages.push(r.url()+': '+r.failure()?.errorText));
 await page.goto(base,{waitUntil:'networkidle'});
 assert.match(await page.title(),/Pluto/);
 await page.locator('#scout').click();assert.equal(await page.locator('#scout').getAttribute('aria-pressed'),'true');assert.match(await page.locator('#scout-note').innerText(),/7명/);
 await page.locator('#scout').click();assert.equal(await page.locator('#scout').getAttribute('aria-pressed'),'false');
 await page.locator('#own').focus();await page.keyboard.press('End');assert.match(await page.locator('#own-value').innerText(),/12명/);assert.match(await page.locator('#signal-description').innerText(),/생겼습니다/);
 await page.locator('#reset-weights').click();assert.deepEqual(await Promise.all(['own','enemy','own-weight','enemy-weight'].map(id=>page.locator('#'+id).inputValue())),['8','4','0.6','-0.9']);assert.equal(await page.locator('#own-contribution').innerText(),'+4.8');assert.equal(await page.locator('#enemy-contribution').innerText(),'−3.6');assert.equal(await page.locator('#signal-score').innerText(),'−0.3');
 await page.locator('#memory-keep').focus();await page.keyboard.press('Home');assert.equal(await page.locator('#memory-result').innerText(),'2.0');
 await page.keyboard.press('End');assert.equal(await page.locator('#memory-result').innerText(),'6.0');
 await page.locator('#quant-step').focus();await page.keyboard.press('Home');assert.equal(await page.locator('#quant-result').innerText(),'0.37');
 await page.locator('#training-next').click();assert.match(await page.locator('#training-title').innerText(),/結果|결과/);
 await page.locator('#training-next').click();assert.match(await page.locator('#training-title').innerText(),/값/);
 await page.locator('#training-next').click();assert.match(await page.locator('#training-title').innerText(),/선택/);
 await page.locator('#quiz button').click();assert.match(await page.locator('#quiz-feedback').innerText(),/선택/);
 await page.locator('input[value="learning"]').check();await page.locator('#quiz button').click();assert.match(await page.locator('#quiz-feedback').innerText(),/다시/);
 await page.locator('input[value="inference"]').check();await page.locator('#quiz button').click();assert.match(await page.locator('#quiz-feedback').innerText(),/맞습니다/);
 await page.locator('#whole details summary').click();assert.equal(await page.locator('#whole details').getAttribute('open'),'');
 await page.goto(base,{waitUntil:'networkidle'});await page.screenshot({path:path.join(screenshots,'desktop.png'),fullPage:true});
 for(const width of [390,320]){
  await page.setViewportSize({width,height:900});await page.goto(base,{waitUntil:'networkidle'});
  assert.ok(await page.evaluate(()=>document.documentElement.scrollWidth<=window.innerWidth),`Horizontal overflow at ${width}px`);
  await page.locator('#scout').click();assert.match(await page.locator('#scout-note').innerText(),/7명/);
  await page.screenshot({path:path.join(screenshots,`mobile-${width}.png`),fullPage:true});
 }
 await page.goto(new URL('analysis/REPORT.html',base).href,{waitUntil:'networkidle'});assert.match(await page.locator('h1').innerText(),/REA/);
 const noJS=await browser.newContext({javaScriptEnabled:false,viewport:{width:390,height:900}});const plain=await noJS.newPage();await plain.goto(base);assert.match(await plain.locator('#training').innerText(),/자기 대전/);assert.ok(await plain.locator('noscript').count()>0);await noJS.close();
 assert.deepEqual(messages,[]);
 const result={passed:true,checks:['scouting toggle','keyboard sliders','weight reset','memory endpoints','quantization','learning stages','quiz feedback','evidence disclosure','desktop and mobile overflow','report route','no-JavaScript reading','no browser failures'],viewports:[1440,390,320],base};
 fs.writeFileSync('analysis/evidence/browser-verification.json',JSON.stringify(result,null,2)+'\n');console.log(JSON.stringify(result,null,2));
}finally{await browser.close();}
