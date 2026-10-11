
undefined8 *
FUN_140018000(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined1 (*param_4) [32])

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  longlong lVar19;
  undefined1 (*pauVar20) [32];
  undefined1 (*pauVar21) [32];
  undefined8 *_Src;
  longlong *plVar22;
  undefined1 (*pauVar23) [32];
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  size_t _Size;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [16];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  longlong local_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined1 local_78 [32];
  undefined8 *local_58;
  
  pauVar23 = (undefined1 (*) [32])param_2[1];
  pauVar20 = (undefined1 (*) [32])*param_2;
  uVar27 = (longlong)pauVar23 - (longlong)pauVar20;
  if ((int)((longlong)uVar27 >> 3) < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_140006300(0x140159b94,pauVar20,param_3,param_4);
  }
  uVar1 = *(ulonglong *)(pauVar23[-1] + 0x18);
  if (pauVar23 == pauVar20) {
    lVar19 = 1;
    plVar22 = param_3;
  }
  else {
    uVar24 = (longlong)pauVar23 + (-8 - (longlong)pauVar20);
    plVar22 = (longlong *)((uVar24 >> 3) + 1);
    param_4 = pauVar20;
    if (uVar24 < 0x169) {
      lVar19 = 1;
    }
    else {
      auVar33._8_8_ = 1;
      auVar33._0_8_ = 1;
      auVar33._16_8_ = 1;
      auVar33._24_8_ = 1;
      uVar25 = (int)(((ulonglong)plVar22 >> 2) * 0x20 - 0x20 >> 5) + 1U & 3;
      if (uVar25 == 0) goto LAB_14001812d;
      pauVar21 = pauVar20;
      if (uVar25 != 1) {
        if (uVar25 != 2) {
          auVar32 = *pauVar20;
          auVar35 = vpsrlq_avx2(auVar33,0x20);
          pauVar21 = pauVar20 + 1;
          auVar31 = vpsrlq_avx2(auVar32,0x20);
          auVar36 = vpmuludq_avx2(auVar32,auVar33);
          auVar35 = vpmuludq_avx2(auVar35,auVar32);
          auVar33 = vpmuludq_avx2(auVar31,auVar33);
          auVar32._0_8_ = auVar33._0_8_ + auVar35._0_8_;
          auVar32._8_8_ = auVar33._8_8_ + auVar35._8_8_;
          auVar32._16_8_ = auVar33._16_8_ + auVar35._16_8_;
          auVar32._24_8_ = auVar33._24_8_ + auVar35._24_8_;
          auVar32 = vpsllq_avx2(auVar32,0x20);
          auVar33._0_8_ = auVar36._0_8_ + auVar32._0_8_;
          auVar33._8_8_ = auVar36._8_8_ + auVar32._8_8_;
          auVar33._16_8_ = auVar36._16_8_ + auVar32._16_8_;
          auVar33._24_8_ = auVar36._24_8_ + auVar32._24_8_;
        }
        auVar32 = *pauVar21;
        auVar36 = vpsrlq_avx2(auVar33,0x20);
        pauVar21 = pauVar21 + 1;
        auVar31 = vpsrlq_avx2(auVar32,0x20);
        auVar35 = vpmuludq_avx2(auVar32,auVar33);
        auVar32 = vpmuludq_avx2(auVar36,auVar32);
        auVar33 = vpmuludq_avx2(auVar31,auVar33);
        auVar36._0_8_ = auVar33._0_8_ + auVar32._0_8_;
        auVar36._8_8_ = auVar33._8_8_ + auVar32._8_8_;
        auVar36._16_8_ = auVar33._16_8_ + auVar32._16_8_;
        auVar36._24_8_ = auVar33._24_8_ + auVar32._24_8_;
        auVar32 = vpsllq_avx2(auVar36,0x20);
        auVar33._0_8_ = auVar35._0_8_ + auVar32._0_8_;
        auVar33._8_8_ = auVar35._8_8_ + auVar32._8_8_;
        auVar33._16_8_ = auVar35._16_8_ + auVar32._16_8_;
        auVar33._24_8_ = auVar35._24_8_ + auVar32._24_8_;
      }
      auVar32 = *pauVar21;
      auVar31 = vpsrlq_avx2(auVar33,0x20);
      auVar35 = vpsrlq_avx2(auVar32,0x20);
      auVar36 = vpmuludq_avx2(auVar32,auVar33);
      auVar32 = vpmuludq_avx2(auVar31,auVar32);
      auVar33 = vpmuludq_avx2(auVar35,auVar33);
      auVar35._0_8_ = auVar33._0_8_ + auVar32._0_8_;
      auVar35._8_8_ = auVar33._8_8_ + auVar32._8_8_;
      auVar35._16_8_ = auVar33._16_8_ + auVar32._16_8_;
      auVar35._24_8_ = auVar33._24_8_ + auVar32._24_8_;
      auVar32 = vpsllq_avx2(auVar35,0x20);
      auVar33._0_8_ = auVar36._0_8_ + auVar32._0_8_;
      auVar33._8_8_ = auVar36._8_8_ + auVar32._8_8_;
      auVar33._16_8_ = auVar36._16_8_ + auVar32._16_8_;
      auVar33._24_8_ = auVar36._24_8_ + auVar32._24_8_;
      param_4 = pauVar21 + 1;
      while (pauVar20 + ((ulonglong)plVar22 >> 2) != param_4) {
LAB_14001812d:
        auVar32 = *param_4;
        auVar35 = vpsrlq_avx2(auVar33,0x20);
        auVar31 = vpsrlq_avx2(auVar32,0x20);
        auVar36 = vpmuludq_avx2(auVar32,auVar33);
        auVar32 = vpmuludq_avx2(auVar35,auVar32);
        auVar33 = vpmuludq_avx2(auVar31,auVar33);
        auVar31._0_8_ = auVar33._0_8_ + auVar32._0_8_;
        auVar31._8_8_ = auVar33._8_8_ + auVar32._8_8_;
        auVar31._16_8_ = auVar33._16_8_ + auVar32._16_8_;
        auVar31._24_8_ = auVar33._24_8_ + auVar32._24_8_;
        auVar32 = vpsllq_avx2(auVar31,0x20);
        auVar33 = param_4[1];
        auVar3._0_8_ = auVar36._0_8_ + auVar32._0_8_;
        auVar3._8_8_ = auVar36._8_8_ + auVar32._8_8_;
        auVar3._16_8_ = auVar36._16_8_ + auVar32._16_8_;
        auVar3._24_8_ = auVar36._24_8_ + auVar32._24_8_;
        auVar32 = vpsrlq_avx2(auVar33,0x20);
        auVar35 = vpsrlq_avx2(auVar3,0x20);
        auVar32 = vpmuludq_avx2(auVar32,auVar3);
        auVar36 = vpmuludq_avx2(auVar33,auVar3);
        auVar33 = vpmuludq_avx2(auVar35,auVar33);
        auVar4._0_8_ = auVar32._0_8_ + auVar33._0_8_;
        auVar4._8_8_ = auVar32._8_8_ + auVar33._8_8_;
        auVar4._16_8_ = auVar32._16_8_ + auVar33._16_8_;
        auVar4._24_8_ = auVar32._24_8_ + auVar33._24_8_;
        auVar33 = param_4[2];
        auVar32 = vpsllq_avx2(auVar4,0x20);
        auVar5._0_8_ = auVar36._0_8_ + auVar32._0_8_;
        auVar5._8_8_ = auVar36._8_8_ + auVar32._8_8_;
        auVar5._16_8_ = auVar36._16_8_ + auVar32._16_8_;
        auVar5._24_8_ = auVar36._24_8_ + auVar32._24_8_;
        auVar32 = vpsrlq_avx2(auVar33,0x20);
        auVar35 = vpsrlq_avx2(auVar5,0x20);
        auVar32 = vpmuludq_avx2(auVar32,auVar5);
        auVar36 = vpmuludq_avx2(auVar33,auVar5);
        auVar33 = vpmuludq_avx2(auVar35,auVar33);
        auVar6._0_8_ = auVar32._0_8_ + auVar33._0_8_;
        auVar6._8_8_ = auVar32._8_8_ + auVar33._8_8_;
        auVar6._16_8_ = auVar32._16_8_ + auVar33._16_8_;
        auVar6._24_8_ = auVar32._24_8_ + auVar33._24_8_;
        auVar32 = vpsllq_avx2(auVar6,0x20);
        auVar33 = param_4[3];
        auVar7._0_8_ = auVar36._0_8_ + auVar32._0_8_;
        auVar7._8_8_ = auVar36._8_8_ + auVar32._8_8_;
        auVar7._16_8_ = auVar36._16_8_ + auVar32._16_8_;
        auVar7._24_8_ = auVar36._24_8_ + auVar32._24_8_;
        auVar36 = vpsrlq_avx2(auVar33,0x20);
        auVar35 = vpsrlq_avx2(auVar7,0x20);
        auVar32 = vpmuludq_avx2(auVar33,auVar7);
        auVar36 = vpmuludq_avx2(auVar36,auVar7);
        auVar33 = vpmuludq_avx2(auVar35,auVar33);
        auVar8._0_8_ = auVar36._0_8_ + auVar33._0_8_;
        auVar8._8_8_ = auVar36._8_8_ + auVar33._8_8_;
        auVar8._16_8_ = auVar36._16_8_ + auVar33._16_8_;
        auVar8._24_8_ = auVar36._24_8_ + auVar33._24_8_;
        auVar36 = vpsllq_avx2(auVar8,0x20);
        auVar33._0_8_ = auVar32._0_8_ + auVar36._0_8_;
        auVar33._8_8_ = auVar32._8_8_ + auVar36._8_8_;
        auVar33._16_8_ = auVar32._16_8_ + auVar36._16_8_;
        auVar33._24_8_ = auVar32._24_8_ + auVar36._24_8_;
        param_4 = param_4 + 4;
      }
      auVar29 = auVar33._0_16_;
      auVar37 = auVar33._16_16_;
      auVar38 = vpmuludq_avx(auVar29,auVar37);
      auVar34 = vpsrlq_avx(auVar37,0x20);
      auVar28 = vpsrlq_avx(auVar29,0x20);
      auVar29 = vpmuludq_avx(auVar34,auVar29);
      auVar28 = vpmuludq_avx(auVar28,auVar37);
      auVar29 = vpaddq_avx(auVar28,auVar29);
      auVar29 = vpsllq_avx(auVar29,0x20);
      auVar29 = vpaddq_avx(auVar38,auVar29);
      auVar28 = vpsrldq_avx(auVar29,8);
      auVar37 = vpsrlq_avx(auVar29,0x20);
      auVar34 = vpsrlq_avx(auVar28,0x20);
      auVar38 = vpmuludq_avx(auVar28,auVar29);
      auVar29 = vpmuludq_avx(auVar34,auVar29);
      auVar28 = vpmuludq_avx(auVar37,auVar28);
      auVar29 = vpaddq_avx(auVar29,auVar28);
      auVar29 = vpsllq_avx(auVar29,0x20);
      auVar29 = vpaddq_avx(auVar38,auVar29);
      lVar19 = auVar29._0_8_;
      if (((ulonglong)plVar22 & 3) == 0) goto LAB_1400182f8;
      plVar22 = (longlong *)((ulonglong)plVar22 & 0xfffffffffffffffc);
      pauVar20 = (undefined1 (*) [32])(*pauVar20 + (longlong)plVar22 * 8);
    }
    uVar25 = (int)((ulonglong)((longlong)pauVar23 + (-8 - (longlong)pauVar20)) >> 3) + 1U & 7;
    pauVar21 = pauVar20;
    if (uVar25 != 0) {
      if (uVar25 != 1) {
        if (uVar25 != 2) {
          if (uVar25 != 3) {
            if (uVar25 != 4) {
              if (uVar25 != 5) {
                if (uVar25 != 6) {
                  lVar19 = lVar19 * *(longlong *)*pauVar20;
                  pauVar20 = (undefined1 (*) [32])(*pauVar20 + 8);
                }
                lVar19 = lVar19 * *(longlong *)*pauVar20;
                pauVar20 = (undefined1 (*) [32])(*pauVar20 + 8);
              }
              lVar19 = lVar19 * *(longlong *)*pauVar20;
              pauVar20 = (undefined1 (*) [32])(*pauVar20 + 8);
            }
            lVar19 = lVar19 * *(longlong *)*pauVar20;
            pauVar20 = (undefined1 (*) [32])(*pauVar20 + 8);
          }
          lVar19 = lVar19 * *(longlong *)*pauVar20;
          pauVar20 = (undefined1 (*) [32])(*pauVar20 + 8);
        }
        lVar19 = lVar19 * *(longlong *)*pauVar20;
        pauVar20 = (undefined1 (*) [32])(*pauVar20 + 8);
      }
      lVar19 = lVar19 * *(longlong *)*pauVar20;
      pauVar21 = (undefined1 (*) [32])(*pauVar20 + 8);
      if (pauVar23 == (undefined1 (*) [32])(*pauVar20 + 8)) goto LAB_1400182f8;
    }
    do {
      pauVar20 = pauVar21 + 2;
      lVar19 = lVar19 * *(longlong *)*pauVar21 * *(longlong *)(*pauVar21 + 8) *
               *(longlong *)(*pauVar21 + 0x10) * *(longlong *)(*pauVar21 + 0x18) *
               *(longlong *)pauVar21[1] * *(longlong *)(pauVar21[1] + 8) *
               *(longlong *)(pauVar21[1] + 0x10) * *(longlong *)(pauVar21[1] + 0x18);
      pauVar21 = pauVar20;
    } while (pauVar23 != pauVar20);
  }
LAB_1400182f8:
  uVar24 = lVar19 / (longlong)uVar1;
  lVar2 = *(longlong *)*param_3;
  if (uVar1 != ((longlong *)*param_3)[1]) {
                    /* WARNING: Subroutine does not return */
    FUN_140006300(0x140159ba3,lVar19 % (longlong)uVar1,plVar22,param_4);
  }
  if (0x7ffffffffffffff8 < uVar27) {
                    /* WARNING: Subroutine does not return */
    FUN_140153210();
  }
  pauVar20 = (undefined1 (*) [32])FUN_14003bde0(uVar27,lVar19 % (longlong)uVar1);
  _Src = (undefined8 *)*param_2;
  lVar19 = uVar27 + (longlong)pauVar20;
  _Size = param_2[1] - (longlong)_Src;
  if ((longlong)_Size < 9) {
    if (_Size == 8) {
      *(undefined8 *)*pauVar20 = *_Src;
    }
  }
  else {
    pauVar20 = memmove(pauVar20,_Src,_Size);
  }
  pauVar23 = (undefined1 (*) [32])((longlong)pauVar20 + _Size);
  *(undefined1 *)(param_1 + 9) = 0;
  *(longlong *)(pauVar23[-1] + 0x18) = lVar2;
  local_88 = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0x14] = 0;
  *param_1 = pauVar20;
  param_1[1] = pauVar23;
  param_1[2] = lVar19;
  local_78._16_8_ = 0;
  local_98 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 10) = (undefined1  [16])0x0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 (*) [16])(param_1 + 0x12) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x15) = (undefined1  [16])0x0;
  local_78 = ZEXT1632(local_78._16_16_) << 0x80;
  if (pauVar23 == pauVar20) {
    uVar27 = 4;
    pauVar20 = (undefined1 (*) [32])0x1;
  }
  else {
    uVar27 = (longlong)pauVar23 + (-8 - (longlong)pauVar20);
    uVar26 = (uVar27 >> 3) + 1;
    if (uVar27 < 0x169) {
      param_4 = (undefined1 (*) [32])0x1;
LAB_1400185f0:
      uVar25 = (int)((ulonglong)((longlong)pauVar23 + (-8 - (longlong)pauVar20)) >> 3) + 1U & 7;
      pauVar21 = pauVar20;
      if (uVar25 != 0) {
        if (uVar25 != 1) {
          if (uVar25 != 2) {
            if (uVar25 != 3) {
              if (uVar25 != 4) {
                if (uVar25 != 5) {
                  if (uVar25 != 6) {
                    param_4 = (undefined1 (*) [32])((longlong)param_4 * *(longlong *)*pauVar20);
                    pauVar20 = (undefined1 (*) [32])(*pauVar20 + 8);
                  }
                  param_4 = (undefined1 (*) [32])((longlong)param_4 * *(longlong *)*pauVar20);
                  pauVar20 = (undefined1 (*) [32])(*pauVar20 + 8);
                }
                param_4 = (undefined1 (*) [32])((longlong)param_4 * *(longlong *)*pauVar20);
                pauVar20 = (undefined1 (*) [32])(*pauVar20 + 8);
              }
              param_4 = (undefined1 (*) [32])((longlong)param_4 * *(longlong *)*pauVar20);
              pauVar20 = (undefined1 (*) [32])(*pauVar20 + 8);
            }
            param_4 = (undefined1 (*) [32])((longlong)param_4 * *(longlong *)*pauVar20);
            pauVar20 = (undefined1 (*) [32])(*pauVar20 + 8);
          }
          param_4 = (undefined1 (*) [32])((longlong)param_4 * *(longlong *)*pauVar20);
          pauVar20 = (undefined1 (*) [32])(*pauVar20 + 8);
        }
        param_4 = (undefined1 (*) [32])((longlong)param_4 * *(longlong *)*pauVar20);
        pauVar21 = (undefined1 (*) [32])(*pauVar20 + 8);
        if ((undefined1 (*) [32])(*pauVar20 + 8) == pauVar23) goto LAB_140018699;
      }
      do {
        pauVar20 = pauVar21 + 2;
        param_4 = (undefined1 (*) [32])
                  ((longlong)param_4 * *(longlong *)*pauVar21 * *(longlong *)(*pauVar21 + 8) *
                   *(longlong *)(*pauVar21 + 0x10) * *(longlong *)(*pauVar21 + 0x18) *
                   *(longlong *)pauVar21[1] * *(longlong *)(pauVar21[1] + 8) *
                   *(longlong *)(pauVar21[1] + 0x10) * *(longlong *)(pauVar21[1] + 0x18));
        pauVar21 = pauVar20;
      } while (pauVar20 != pauVar23);
    }
    else {
      auVar30._8_8_ = 1;
      auVar30._0_8_ = 1;
      auVar30._16_8_ = 1;
      auVar30._24_8_ = 1;
      uVar25 = (int)((uVar26 >> 2) * 0x20 - 0x20 >> 5) + 1U & 3;
      _Src = (undefined8 *)(ulonglong)uVar25;
      pauVar21 = pauVar20;
      if (uVar25 == 0) goto LAB_1400184d5;
      if (_Src != (undefined8 *)0x1) {
        if (_Src != (undefined8 *)0x2) {
          auVar33 = *pauVar20;
          auVar35 = vpsrlq_avx2(auVar30,0x20);
          pauVar21 = pauVar20 + 1;
          auVar36 = vpsrlq_avx2(auVar33,0x20);
          auVar32 = vpmuludq_avx2(auVar33,auVar30);
          auVar36 = vpmuludq_avx2(auVar36,auVar30);
          auVar33 = vpmuludq_avx2(auVar35,auVar33);
          auVar9._0_8_ = auVar36._0_8_ + auVar33._0_8_;
          auVar9._8_8_ = auVar36._8_8_ + auVar33._8_8_;
          auVar9._16_8_ = auVar36._16_8_ + auVar33._16_8_;
          auVar9._24_8_ = auVar36._24_8_ + auVar33._24_8_;
          auVar33 = vpsllq_avx2(auVar9,0x20);
          auVar30._0_8_ = auVar32._0_8_ + auVar33._0_8_;
          auVar30._8_8_ = auVar32._8_8_ + auVar33._8_8_;
          auVar30._16_8_ = auVar32._16_8_ + auVar33._16_8_;
          auVar30._24_8_ = auVar32._24_8_ + auVar33._24_8_;
        }
        auVar33 = *pauVar21;
        auVar36 = vpsrlq_avx2(auVar30,0x20);
        pauVar21 = pauVar21 + 1;
        auVar35 = vpsrlq_avx2(auVar33,0x20);
        auVar32 = vpmuludq_avx2(auVar33,auVar30);
        auVar33 = vpmuludq_avx2(auVar36,auVar33);
        auVar36 = vpmuludq_avx2(auVar35,auVar30);
        auVar10._0_8_ = auVar36._0_8_ + auVar33._0_8_;
        auVar10._8_8_ = auVar36._8_8_ + auVar33._8_8_;
        auVar10._16_8_ = auVar36._16_8_ + auVar33._16_8_;
        auVar10._24_8_ = auVar36._24_8_ + auVar33._24_8_;
        auVar33 = vpsllq_avx2(auVar10,0x20);
        auVar30._0_8_ = auVar32._0_8_ + auVar33._0_8_;
        auVar30._8_8_ = auVar32._8_8_ + auVar33._8_8_;
        auVar30._16_8_ = auVar32._16_8_ + auVar33._16_8_;
        auVar30._24_8_ = auVar32._24_8_ + auVar33._24_8_;
      }
      auVar33 = *pauVar21;
      auVar35 = vpsrlq_avx2(auVar30,0x20);
      auVar36 = vpsrlq_avx2(auVar33,0x20);
      auVar32 = vpmuludq_avx2(auVar33,auVar30);
      auVar33 = vpmuludq_avx2(auVar35,auVar33);
      auVar36 = vpmuludq_avx2(auVar36,auVar30);
      auVar11._0_8_ = auVar36._0_8_ + auVar33._0_8_;
      auVar11._8_8_ = auVar36._8_8_ + auVar33._8_8_;
      auVar11._16_8_ = auVar36._16_8_ + auVar33._16_8_;
      auVar11._24_8_ = auVar36._24_8_ + auVar33._24_8_;
      auVar33 = vpsllq_avx2(auVar11,0x20);
      auVar30._0_8_ = auVar32._0_8_ + auVar33._0_8_;
      auVar30._8_8_ = auVar32._8_8_ + auVar33._8_8_;
      auVar30._16_8_ = auVar32._16_8_ + auVar33._16_8_;
      auVar30._24_8_ = auVar32._24_8_ + auVar33._24_8_;
      pauVar21 = pauVar21 + 1;
      while (pauVar20 + (uVar26 >> 2) != pauVar21) {
LAB_1400184d5:
        auVar33 = *pauVar21;
        auVar36 = vpsrlq_avx2(auVar30,0x20);
        auVar35 = vpsrlq_avx2(auVar33,0x20);
        auVar32 = vpmuludq_avx2(auVar33,auVar30);
        auVar33 = vpmuludq_avx2(auVar36,auVar33);
        auVar36 = vpmuludq_avx2(auVar35,auVar30);
        auVar12._0_8_ = auVar36._0_8_ + auVar33._0_8_;
        auVar12._8_8_ = auVar36._8_8_ + auVar33._8_8_;
        auVar12._16_8_ = auVar36._16_8_ + auVar33._16_8_;
        auVar12._24_8_ = auVar36._24_8_ + auVar33._24_8_;
        auVar36 = vpsllq_avx2(auVar12,0x20);
        auVar33 = pauVar21[1];
        auVar13._0_8_ = auVar32._0_8_ + auVar36._0_8_;
        auVar13._8_8_ = auVar32._8_8_ + auVar36._8_8_;
        auVar13._16_8_ = auVar32._16_8_ + auVar36._16_8_;
        auVar13._24_8_ = auVar32._24_8_ + auVar36._24_8_;
        auVar32 = vpsrlq_avx2(auVar33,0x20);
        auVar35 = vpsrlq_avx2(auVar13,0x20);
        auVar32 = vpmuludq_avx2(auVar32,auVar13);
        auVar36 = vpmuludq_avx2(auVar33,auVar13);
        auVar33 = vpmuludq_avx2(auVar35,auVar33);
        auVar14._0_8_ = auVar32._0_8_ + auVar33._0_8_;
        auVar14._8_8_ = auVar32._8_8_ + auVar33._8_8_;
        auVar14._16_8_ = auVar32._16_8_ + auVar33._16_8_;
        auVar14._24_8_ = auVar32._24_8_ + auVar33._24_8_;
        auVar33 = pauVar21[2];
        auVar32 = vpsllq_avx2(auVar14,0x20);
        auVar15._0_8_ = auVar36._0_8_ + auVar32._0_8_;
        auVar15._8_8_ = auVar36._8_8_ + auVar32._8_8_;
        auVar15._16_8_ = auVar36._16_8_ + auVar32._16_8_;
        auVar15._24_8_ = auVar36._24_8_ + auVar32._24_8_;
        auVar32 = vpsrlq_avx2(auVar33,0x20);
        auVar35 = vpsrlq_avx2(auVar15,0x20);
        auVar32 = vpmuludq_avx2(auVar32,auVar15);
        auVar36 = vpmuludq_avx2(auVar33,auVar15);
        auVar33 = vpmuludq_avx2(auVar35,auVar33);
        auVar16._0_8_ = auVar32._0_8_ + auVar33._0_8_;
        auVar16._8_8_ = auVar32._8_8_ + auVar33._8_8_;
        auVar16._16_8_ = auVar32._16_8_ + auVar33._16_8_;
        auVar16._24_8_ = auVar32._24_8_ + auVar33._24_8_;
        auVar32 = vpsllq_avx2(auVar16,0x20);
        auVar33 = pauVar21[3];
        auVar17._0_8_ = auVar36._0_8_ + auVar32._0_8_;
        auVar17._8_8_ = auVar36._8_8_ + auVar32._8_8_;
        auVar17._16_8_ = auVar36._16_8_ + auVar32._16_8_;
        auVar17._24_8_ = auVar36._24_8_ + auVar32._24_8_;
        auVar36 = vpsrlq_avx2(auVar33,0x20);
        auVar35 = vpsrlq_avx2(auVar17,0x20);
        auVar32 = vpmuludq_avx2(auVar33,auVar17);
        auVar36 = vpmuludq_avx2(auVar36,auVar17);
        auVar33 = vpmuludq_avx2(auVar35,auVar33);
        auVar18._0_8_ = auVar36._0_8_ + auVar33._0_8_;
        auVar18._8_8_ = auVar36._8_8_ + auVar33._8_8_;
        auVar18._16_8_ = auVar36._16_8_ + auVar33._16_8_;
        auVar18._24_8_ = auVar36._24_8_ + auVar33._24_8_;
        auVar33 = vpsllq_avx2(auVar18,0x20);
        auVar30._0_8_ = auVar32._0_8_ + auVar33._0_8_;
        auVar30._8_8_ = auVar32._8_8_ + auVar33._8_8_;
        auVar30._16_8_ = auVar32._16_8_ + auVar33._16_8_;
        auVar30._24_8_ = auVar32._24_8_ + auVar33._24_8_;
        pauVar21 = pauVar21 + 4;
      }
      auVar28 = auVar30._0_16_;
      auVar29 = auVar30._16_16_;
      auVar38 = vpmuludq_avx(auVar29,auVar28);
      auVar34 = vpsrlq_avx(auVar28,0x20);
      auVar37 = vpsrlq_avx(auVar29,0x20);
      auVar29 = vpmuludq_avx(auVar34,auVar29);
      pauVar20 = (undefined1 (*) [32])(*pauVar20 + (uVar26 & 0xfffffffffffffffc) * 8);
      auVar28 = vpmuludq_avx(auVar37,auVar28);
      auVar29 = vpaddq_avx(auVar28,auVar29);
      auVar29 = vpsllq_avx(auVar29,0x20);
      auVar29 = vpaddq_avx(auVar38,auVar29);
      auVar28 = vpsrldq_avx(auVar29,8);
      auVar37 = vpsrlq_avx(auVar29,0x20);
      auVar34 = vpsrlq_avx(auVar28,0x20);
      auVar38 = vpmuludq_avx(auVar28,auVar29);
      auVar29 = vpmuludq_avx(auVar34,auVar29);
      auVar28 = vpmuludq_avx(auVar37,auVar28);
      auVar29 = vpaddq_avx(auVar29,auVar28);
      auVar29 = vpsllq_avx(auVar29,0x20);
      auVar29 = vpaddq_avx(auVar38,auVar29);
      param_4 = auVar29._0_8_;
      if ((uVar26 & 3) != 0) goto LAB_1400185f0;
    }
LAB_140018699:
    local_c0 = (float *)0x0;
    pauVar20 = param_4;
    if (param_4 == (undefined1 (*) [32])0x0) goto LAB_1400186a7;
    uVar27 = (longlong)param_4 * 4;
  }
  FUN_14003cb00((undefined8 *)0x0);
  local_c0 = (float *)FUN_14003bde0(uVar27,_Src);
  param_1[3] = local_c0;
  param_1[5] = pauVar20;
LAB_1400186a7:
  param_1[4] = pauVar20;
  if (param_3[0xb] == param_3[10]) {
    if (param_3[0x15] == 0) {
      local_a0 = param_3[6];
      if ((param_3[7] == local_a0) || ((char)param_3[9] == '\x02')) {
        FUN_14008ba90((uint)uVar24,(uint)lVar2,uVar1 & 0xffffffff,1.0,param_2[3],0,param_3[3],1,0.0,
                      local_c0);
      }
      else {
        if (uVar24 != 1) {
                    /* WARNING: Subroutine does not return */
          FUN_140006300(0x140159bf0,_Src,local_a0,param_4);
        }
        local_b0 = param_2[3];
        local_58 = &local_b8;
        auVar38._8_8_ = &local_c0;
        auVar38._0_8_ = &local_b0;
        auVar29._8_8_ = &local_a8;
        auVar29._0_8_ = &local_a0;
        local_b8 = 0;
        local_78._16_16_ = ZEXT116(1) * auVar38;
        local_78._0_16_ = ZEXT116(0) * auVar38 | ZEXT116(1) * auVar29;
        local_a8 = uVar1;
        FUN_14008c540(29999 < (longlong)(uVar1 * lVar2),lVar2,(undefined8 *)local_78);
      }
    }
    else {
      if (uVar24 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_140006300(0x140159bc0,_Src,pauVar23,param_4);
      }
      FUN_140083d80((longlong)param_3,lVar2,uVar1,(undefined1 (*) [32])param_2[3]);
    }
  }
  else {
    FUN_14007b1e0(uVar24,param_3,(undefined1 (*) [32])param_2[3],uVar1,0);
  }
  return param_1;
}

