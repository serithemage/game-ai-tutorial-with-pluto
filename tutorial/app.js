import {decisionSignal,rememberedSignal,quantizedWeight} from './learning.mjs';
const byId=id=>document.getElementById(id);
const number=value=>Number(value).toFixed(1).replace('-', '−');
const signed=value=>(value>0?'+':'')+number(value);
const weightIds=['own','enemy','own-weight','enemy-weight'];
function updateWeights(){
 const [own,enemy,ownWeight,enemyWeight]=weightIds.map(id=>Number(byId(id).value));
 const r=decisionSignal({own,enemy,ownWeight,enemyWeight,bias:-1.5});
 byId('own-value').textContent=own+'명';byId('enemy-value').textContent=enemy+'명';
 byId('own-weight-value').textContent=number(ownWeight);byId('enemy-weight-value').textContent=number(enemyWeight);
 for(const [i,prefix] of [[0,'own'],[1,'enemy']]){
  const contribution=r.contributions[i];byId(prefix+'-contribution').textContent=signed(contribution);
  byId(prefix+'-bar').style.width=Math.min(100,Math.abs(contribution)/18*100)+'%';
  byId(prefix+'-bar').className='bar '+(contribution>=0?'positive':'negative');
 }
 byId('signal-score').textContent=number(r.score);
 byId('signal-description').textContent=r.active>0?`후보 신호 ${number(r.active)}가 생겼습니다. 실제 공격 명령이나 승률은 아닙니다.`:'후보 신호가 없습니다. 음수 또는 0인 값을 0으로 바꿨습니다.';
}
weightIds.forEach(id=>byId(id).addEventListener('input',updateWeights));
byId('reset-weights').addEventListener('click',()=>{[8,4,0.6,-0.9].forEach((v,i)=>byId(weightIds[i]).value=v);updateWeights();});updateWeights();
byId('scout').addEventListener('click',()=>{
 const button=byId('scout');const revealed=button.getAttribute('aria-pressed')!=='true';
 button.setAttribute('aria-pressed',String(revealed));document.querySelector('.battlefield').classList.toggle('scouted',revealed);
 button.textContent=revealed?'정찰 전으로 돌아가기':'가려진 지역 정찰하기';
 byId('scout-note').textContent=revealed?'가려진 곳에 3명이 더 있었습니다. 이 예시에서 알려진 상대는 이제 7명입니다.':'현재 보이는 상대는 4명입니다. 보이지 않는 곳은 아직 모릅니다.';
});
function updateMemory(){const ratio=Number(byId('memory-keep').value),r=rememberedSignal({past:6,current:2,keep:ratio/100});byId('memory-keep-value').textContent=ratio+'%';byId('memory-result').textContent=number(r);byId('memory-bar').style.height=r/8*100+'%';byId('memory-explanation').textContent=`과거 정보를 ${ratio}%, 새 정보를 ${100-ratio}% 반영했습니다. 이것은 기억 갱신의 교육용 비유입니다.`;}
byId('memory-keep').addEventListener('input',updateMemory);updateMemory();
const phases=[['여러 상황에서 선택해 본다','모델로 플레이하며 관측, 선택, 뒤에 일어난 일을 모읍니다. 새로운 선택을 시험하는 탐색도 학습의 재료가 됩니다.'],['선택을 나중의 결과와 연결한다','어떤 선택이 결과에 기여했는지 평가합니다. 한 번 졌다고 모든 행동이 틀린 것은 아닙니다. Pluto의 정확한 보상·평가 방법은 이번 분석에서 확보하지 않았습니다.'],['평가를 이용해 모델 값을 조금 바꾼다','학습 알고리즘이 많은 경험에서 얻은 평가를 이용해 가중치를 조정합니다. 바뀐 모델로 다시 경험을 모읍니다. 이 화면은 실제 훈련 로그나 최적화 실행이 아닙니다.']];
let phase=0;byId('training-next').addEventListener('click',()=>{phase=(phase+1)%phases.length;byId('training-title').textContent=phases[phase][0];byId('training-description').textContent=phases[phase][1];document.querySelectorAll('[data-phase]').forEach(el=>el.classList.toggle('current',Number(el.dataset.phase)===phase));byId('training-next').textContent=phase===2?'처음부터 다시 보기':'다음 단계 보기';});
function updateQuantization(){const scale=Number(byId('quant-step').value),r=quantizedWeight(0.37,scale);byId('quant-step-value').textContent=scale.toFixed(2);byId('quant-result').textContent=r.restored.toFixed(2);byId('quant-explanation').textContent=`눈금 간격 ${scale.toFixed(2)}으로 표현하면 ${r.restored.toFixed(2)}입니다. 차이는 ${Math.abs(r.restored-0.37).toFixed(2)}입니다. 실제 Pluto의 값을 가져온 예시는 아닙니다.`;}
byId('quant-step').addEventListener('input',updateQuantization);updateQuantization();
byId('quiz').addEventListener('submit',event=>{event.preventDefault();const selected=new FormData(event.currentTarget).get('understanding');byId('quiz-feedback').textContent=!selected?'먼저 설명 하나를 선택해 주세요.':selected==='inference'?'맞습니다. 같은 가중치로도 입력과 기억 상태가 달라지면 다른 결과를 계산할 수 있습니다. 이를 추론이라고 합니다.':'다시 생각해 보세요. 다른 행동을 골랐다는 사실만으로 가중치 학습이나 최선 행동을 증명할 수는 없습니다.';});
if('IntersectionObserver' in window){const links=[...document.querySelectorAll('.toc a')];const observer=new IntersectionObserver(entries=>{const current=entries.filter(e=>e.isIntersecting).sort((a,b)=>a.boundingClientRect.top-b.boundingClientRect.top)[0];if(current)links.forEach(link=>{if(link.hash==='#'+current.target.id)link.setAttribute('aria-current','location');else link.removeAttribute('aria-current');});},{rootMargin:'-15% 0px -60% 0px'});document.querySelectorAll('main section[id]').forEach(s=>observer.observe(s));}
