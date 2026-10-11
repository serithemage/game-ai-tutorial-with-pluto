// Original educational illustrations; these functions do not run Pluto.
export function decisionSignal({own,enemy,ownWeight,enemyWeight,bias}) {
 const contributions=[own*ownWeight,enemy*enemyWeight,bias];
 const score=Number(contributions.reduce((a,b)=>a+b,0).toFixed(10));
 return {contributions,score,active:Math.max(0,score)};
}
export function rememberedSignal({past,current,keep}) {
 if(!Number.isFinite(keep)||keep<0||keep>1)throw new RangeError('Memory ratio must be between zero and one.');
 return past*keep+current*(1-keep);
}
export function quantizedWeight(value,scale) {
 if(!Number.isFinite(scale)||scale<=0)throw new RangeError('Quantization scale must be positive.');
 const integer=Math.max(-128,Math.min(127,Math.round(value/scale)));
 return {integer,restored:Number((integer*scale).toFixed(8))};
}
