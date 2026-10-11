import test from 'node:test';
import assert from 'node:assert/strict';
import { decisionSignal, rememberedSignal, quantizedWeight } from '../tutorial/learning.mjs';

test('the educational signal falls when observed enemy strength rises',()=>{
 const weak=decisionSignal({own:8,enemy:2,ownWeight:0.6,enemyWeight:-0.9,bias:-1.5});
 const strong=decisionSignal({own:8,enemy:8,ownWeight:0.6,enemyWeight:-0.9,bias:-1.5});
 assert.ok(weak.active>0);assert.equal(strong.active,0);assert.ok(strong.score<weak.score);
});
test('zero input keeps the bias, and zero is not an active candidate',()=>{
 const result=decisionSignal({own:0,enemy:0,ownWeight:2,enemyWeight:-3,bias:0});
 assert.equal(result.score,0);assert.equal(result.active,0);
});
test('negative weights reverse the direction of a contribution',()=>{
 const r=decisionSignal({own:4,enemy:2,ownWeight:2,enemyWeight:-3,bias:-1});
 assert.deepEqual(r.contributions,[8,-6,-1]);assert.equal(r.score,1);
});
test('memory endpoints use entirely new or entirely previous information',()=>{
 assert.equal(rememberedSignal({past:6,current:2,keep:0}),2);
 assert.equal(rememberedSignal({past:6,current:2,keep:1}),6);
 assert.ok(Math.abs(rememberedSignal({past:6,current:2,keep:0.7})-4.8)<1e-10);
});
test('quantization rounds both signs and reports the approximation',()=>{
 assert.equal(quantizedWeight(0.37,0.1).restored,0.4);
 assert.equal(quantizedWeight(-0.37,0.1).restored,-0.4);
 assert.equal(quantizedWeight(100,0.1).integer,127);
});
test('invalid memory ratios and zero quantization scale cannot become misleading output',()=>{
 assert.throws(()=>rememberedSignal({past:6,current:2,keep:2}),RangeError);
 assert.throws(()=>quantizedWeight(0.37,0),RangeError);
});
test('an exactly balanced decimal example does not show a phantom positive signal',()=>{
 const r=decisionSignal({own:3,enemy:2,ownWeight:1.1,enemyWeight:-0.9,bias:-1.5});
 assert.equal(r.score,0);assert.equal(r.active,0);
});
