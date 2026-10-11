
undefined8 * FUN_14008dc00(undefined8 *param_1,undefined8 *param_2,longlong *param_3,float *param_4)

{
  longlong lVar1;
  longlong lVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  undefined1 (*pauVar6) [32];
  ulonglong *_Src;
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  ulonglong uVar52;
  ulonglong *_Dst;
  float *pfVar53;
  ulonglong uVar54;
  undefined1 (*pauVar55) [32];
  undefined1 (*pauVar56) [32];
  undefined1 (*pauVar57) [16];
  longlong lVar58;
  ulonglong uVar59;
  longlong lVar60;
  uint uVar61;
  ulonglong *puVar62;
  ulonglong uVar63;
  float *pfVar64;
  longlong lVar65;
  ulonglong uVar66;
  uint uVar67;
  ulonglong uVar68;
  ulonglong *_Size;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [16];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [16];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [16];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  longlong local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  float *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined1 local_78 [32];
  float **local_58;
  
  pauVar6 = (undefined1 (*) [32])param_2[1];
  pauVar55 = (undefined1 (*) [32])*param_2;
  uVar68 = (longlong)pauVar6 - (longlong)pauVar55;
  if ((int)((longlong)uVar68 >> 3) < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_140006300(0x140159b94,pauVar55,pauVar6,param_4);
  }
  uVar63 = *(ulonglong *)(pauVar6[-1] + 0x18);
  if (pauVar55 == pauVar6) {
    lVar60 = 1;
    pfVar64 = param_4;
  }
  else {
    uVar54 = (longlong)pauVar6 + (-8 - (longlong)pauVar55);
    pfVar64 = (float *)((uVar54 >> 3) + 1);
    if (uVar54 < 0x169) {
      lVar60 = 1;
    }
    else {
      auVar71._8_8_ = 1;
      auVar71._0_8_ = 1;
      auVar71._16_8_ = 1;
      auVar71._24_8_ = 1;
      uVar61 = (int)(((ulonglong)pfVar64 >> 2) * 0x20 - 0x20 >> 5) + 1U & 3;
      pauVar56 = pauVar55;
      if (uVar61 == 0) goto LAB_14008dd2f;
      if (uVar61 != 1) {
        if (uVar61 != 2) {
          auVar73 = *pauVar55;
          auVar75 = vpsrlq_avx2(auVar71,0x20);
          pauVar56 = pauVar55 + 1;
          auVar72 = vpsrlq_avx2(auVar73,0x20);
          auVar76 = vpmuludq_avx2(auVar73,auVar71);
          auVar75 = vpmuludq_avx2(auVar75,auVar73);
          auVar71 = vpmuludq_avx2(auVar72,auVar71);
          auVar73._0_8_ = auVar71._0_8_ + auVar75._0_8_;
          auVar73._8_8_ = auVar71._8_8_ + auVar75._8_8_;
          auVar73._16_8_ = auVar71._16_8_ + auVar75._16_8_;
          auVar73._24_8_ = auVar71._24_8_ + auVar75._24_8_;
          auVar73 = vpsllq_avx2(auVar73,0x20);
          auVar71._0_8_ = auVar76._0_8_ + auVar73._0_8_;
          auVar71._8_8_ = auVar76._8_8_ + auVar73._8_8_;
          auVar71._16_8_ = auVar76._16_8_ + auVar73._16_8_;
          auVar71._24_8_ = auVar76._24_8_ + auVar73._24_8_;
        }
        auVar73 = *pauVar56;
        auVar76 = vpsrlq_avx2(auVar71,0x20);
        pauVar56 = pauVar56 + 1;
        auVar72 = vpsrlq_avx2(auVar73,0x20);
        auVar75 = vpmuludq_avx2(auVar73,auVar71);
        auVar73 = vpmuludq_avx2(auVar76,auVar73);
        auVar71 = vpmuludq_avx2(auVar72,auVar71);
        auVar76._0_8_ = auVar71._0_8_ + auVar73._0_8_;
        auVar76._8_8_ = auVar71._8_8_ + auVar73._8_8_;
        auVar76._16_8_ = auVar71._16_8_ + auVar73._16_8_;
        auVar76._24_8_ = auVar71._24_8_ + auVar73._24_8_;
        auVar73 = vpsllq_avx2(auVar76,0x20);
        auVar71._0_8_ = auVar75._0_8_ + auVar73._0_8_;
        auVar71._8_8_ = auVar75._8_8_ + auVar73._8_8_;
        auVar71._16_8_ = auVar75._16_8_ + auVar73._16_8_;
        auVar71._24_8_ = auVar75._24_8_ + auVar73._24_8_;
      }
      auVar73 = *pauVar56;
      auVar72 = vpsrlq_avx2(auVar71,0x20);
      auVar75 = vpsrlq_avx2(auVar73,0x20);
      auVar76 = vpmuludq_avx2(auVar73,auVar71);
      auVar73 = vpmuludq_avx2(auVar72,auVar73);
      auVar71 = vpmuludq_avx2(auVar75,auVar71);
      auVar75._0_8_ = auVar71._0_8_ + auVar73._0_8_;
      auVar75._8_8_ = auVar71._8_8_ + auVar73._8_8_;
      auVar75._16_8_ = auVar71._16_8_ + auVar73._16_8_;
      auVar75._24_8_ = auVar71._24_8_ + auVar73._24_8_;
      auVar73 = vpsllq_avx2(auVar75,0x20);
      auVar71._0_8_ = auVar76._0_8_ + auVar73._0_8_;
      auVar71._8_8_ = auVar76._8_8_ + auVar73._8_8_;
      auVar71._16_8_ = auVar76._16_8_ + auVar73._16_8_;
      auVar71._24_8_ = auVar76._24_8_ + auVar73._24_8_;
      pauVar56 = pauVar56 + 1;
      while (pauVar55 + ((ulonglong)pfVar64 >> 2) != pauVar56) {
LAB_14008dd2f:
        auVar73 = *pauVar56;
        auVar75 = vpsrlq_avx2(auVar71,0x20);
        auVar72 = vpsrlq_avx2(auVar73,0x20);
        auVar76 = vpmuludq_avx2(auVar73,auVar71);
        auVar73 = vpmuludq_avx2(auVar75,auVar73);
        auVar71 = vpmuludq_avx2(auVar72,auVar71);
        auVar72._0_8_ = auVar71._0_8_ + auVar73._0_8_;
        auVar72._8_8_ = auVar71._8_8_ + auVar73._8_8_;
        auVar72._16_8_ = auVar71._16_8_ + auVar73._16_8_;
        auVar72._24_8_ = auVar71._24_8_ + auVar73._24_8_;
        auVar73 = vpsllq_avx2(auVar72,0x20);
        auVar71 = pauVar56[1];
        auVar7._0_8_ = auVar76._0_8_ + auVar73._0_8_;
        auVar7._8_8_ = auVar76._8_8_ + auVar73._8_8_;
        auVar7._16_8_ = auVar76._16_8_ + auVar73._16_8_;
        auVar7._24_8_ = auVar76._24_8_ + auVar73._24_8_;
        auVar73 = vpsrlq_avx2(auVar71,0x20);
        auVar75 = vpsrlq_avx2(auVar7,0x20);
        auVar73 = vpmuludq_avx2(auVar73,auVar7);
        auVar76 = vpmuludq_avx2(auVar71,auVar7);
        auVar71 = vpmuludq_avx2(auVar75,auVar71);
        auVar8._0_8_ = auVar73._0_8_ + auVar71._0_8_;
        auVar8._8_8_ = auVar73._8_8_ + auVar71._8_8_;
        auVar8._16_8_ = auVar73._16_8_ + auVar71._16_8_;
        auVar8._24_8_ = auVar73._24_8_ + auVar71._24_8_;
        auVar71 = pauVar56[2];
        auVar73 = vpsllq_avx2(auVar8,0x20);
        auVar9._0_8_ = auVar76._0_8_ + auVar73._0_8_;
        auVar9._8_8_ = auVar76._8_8_ + auVar73._8_8_;
        auVar9._16_8_ = auVar76._16_8_ + auVar73._16_8_;
        auVar9._24_8_ = auVar76._24_8_ + auVar73._24_8_;
        auVar73 = vpsrlq_avx2(auVar71,0x20);
        auVar75 = vpsrlq_avx2(auVar9,0x20);
        auVar73 = vpmuludq_avx2(auVar73,auVar9);
        auVar76 = vpmuludq_avx2(auVar71,auVar9);
        auVar71 = vpmuludq_avx2(auVar75,auVar71);
        auVar10._0_8_ = auVar73._0_8_ + auVar71._0_8_;
        auVar10._8_8_ = auVar73._8_8_ + auVar71._8_8_;
        auVar10._16_8_ = auVar73._16_8_ + auVar71._16_8_;
        auVar10._24_8_ = auVar73._24_8_ + auVar71._24_8_;
        auVar73 = vpsllq_avx2(auVar10,0x20);
        auVar71 = pauVar56[3];
        auVar11._0_8_ = auVar76._0_8_ + auVar73._0_8_;
        auVar11._8_8_ = auVar76._8_8_ + auVar73._8_8_;
        auVar11._16_8_ = auVar76._16_8_ + auVar73._16_8_;
        auVar11._24_8_ = auVar76._24_8_ + auVar73._24_8_;
        auVar76 = vpsrlq_avx2(auVar71,0x20);
        auVar75 = vpsrlq_avx2(auVar11,0x20);
        auVar73 = vpmuludq_avx2(auVar71,auVar11);
        auVar76 = vpmuludq_avx2(auVar76,auVar11);
        auVar71 = vpmuludq_avx2(auVar75,auVar71);
        auVar12._0_8_ = auVar76._0_8_ + auVar71._0_8_;
        auVar12._8_8_ = auVar76._8_8_ + auVar71._8_8_;
        auVar12._16_8_ = auVar76._16_8_ + auVar71._16_8_;
        auVar12._24_8_ = auVar76._24_8_ + auVar71._24_8_;
        auVar76 = vpsllq_avx2(auVar12,0x20);
        auVar71._0_8_ = auVar73._0_8_ + auVar76._0_8_;
        auVar71._8_8_ = auVar73._8_8_ + auVar76._8_8_;
        auVar71._16_8_ = auVar73._16_8_ + auVar76._16_8_;
        auVar71._24_8_ = auVar73._24_8_ + auVar76._24_8_;
        pauVar56 = pauVar56 + 4;
      }
      auVar70 = auVar71._0_16_;
      auVar77 = auVar71._16_16_;
      auVar82 = vpmuludq_avx(auVar70,auVar77);
      auVar74 = vpsrlq_avx(auVar77,0x20);
      auVar69 = vpsrlq_avx(auVar70,0x20);
      auVar70 = vpmuludq_avx(auVar74,auVar70);
      auVar69 = vpmuludq_avx(auVar69,auVar77);
      auVar70 = vpaddq_avx(auVar69,auVar70);
      auVar70 = vpsllq_avx(auVar70,0x20);
      auVar70 = vpaddq_avx(auVar82,auVar70);
      auVar69 = vpsrldq_avx(auVar70,8);
      auVar77 = vpsrlq_avx(auVar70,0x20);
      auVar74 = vpsrlq_avx(auVar69,0x20);
      auVar82 = vpmuludq_avx(auVar69,auVar70);
      auVar70 = vpmuludq_avx(auVar74,auVar70);
      auVar69 = vpmuludq_avx(auVar77,auVar69);
      auVar70 = vpaddq_avx(auVar70,auVar69);
      auVar70 = vpsllq_avx(auVar70,0x20);
      auVar70 = vpaddq_avx(auVar82,auVar70);
      lVar60 = auVar70._0_8_;
      if (((ulonglong)pfVar64 & 3) == 0) goto LAB_14008df00;
      pfVar64 = (float *)((ulonglong)pfVar64 & 0xfffffffffffffffc);
      pauVar55 = (undefined1 (*) [32])(*pauVar55 + (longlong)pfVar64 * 8);
    }
    uVar61 = (int)((ulonglong)((longlong)pauVar6 + (-8 - (longlong)pauVar55)) >> 3) + 1U & 7;
    pauVar56 = pauVar55;
    if (uVar61 != 0) {
      if (uVar61 != 1) {
        if (uVar61 != 2) {
          if (uVar61 != 3) {
            if (uVar61 != 4) {
              if (uVar61 != 5) {
                if (uVar61 != 6) {
                  lVar60 = lVar60 * *(longlong *)*pauVar55;
                  pauVar55 = (undefined1 (*) [32])(*pauVar55 + 8);
                }
                lVar60 = lVar60 * *(longlong *)*pauVar55;
                pauVar55 = (undefined1 (*) [32])(*pauVar55 + 8);
              }
              lVar60 = lVar60 * *(longlong *)*pauVar55;
              pauVar55 = (undefined1 (*) [32])(*pauVar55 + 8);
            }
            lVar60 = lVar60 * *(longlong *)*pauVar55;
            pauVar55 = (undefined1 (*) [32])(*pauVar55 + 8);
          }
          lVar60 = lVar60 * *(longlong *)*pauVar55;
          pauVar55 = (undefined1 (*) [32])(*pauVar55 + 8);
        }
        lVar60 = lVar60 * *(longlong *)*pauVar55;
        pauVar55 = (undefined1 (*) [32])(*pauVar55 + 8);
      }
      lVar60 = lVar60 * *(longlong *)*pauVar55;
      pauVar56 = (undefined1 (*) [32])(*pauVar55 + 8);
      if ((undefined1 (*) [32])(*pauVar55 + 8) == pauVar6) goto LAB_14008df00;
    }
    do {
      pauVar55 = pauVar56 + 2;
      lVar60 = lVar60 * *(longlong *)*pauVar56 * *(longlong *)(*pauVar56 + 8) *
               *(longlong *)(*pauVar56 + 0x10) * *(longlong *)(*pauVar56 + 0x18) *
               *(longlong *)pauVar56[1] * *(longlong *)(pauVar56[1] + 8) *
               *(longlong *)(pauVar56[1] + 0x10) * *(longlong *)(pauVar56[1] + 0x18);
      pauVar56 = pauVar55;
    } while (pauVar55 != pauVar6);
  }
LAB_14008df00:
  puVar62 = (ulonglong *)*param_3;
  uVar52 = lVar60 / (longlong)uVar63;
  uVar54 = *puVar62;
  if (puVar62[1] != uVar63) {
                    /* WARNING: Subroutine does not return */
    FUN_140006300(0x140159ba3,lVar60 % (longlong)uVar63,puVar62,pfVar64);
  }
  if (0x7ffffffffffffff8 < uVar68) {
                    /* WARNING: Subroutine does not return */
    FUN_140153210();
  }
  _Dst = FUN_14003bde0(uVar68,lVar60 % (longlong)uVar63);
  _Src = (ulonglong *)*param_2;
  lVar60 = (longlong)_Dst + uVar68;
  _Size = (ulonglong *)(param_2[1] - (longlong)_Src);
  if ((longlong)_Size < 9) {
    if (_Size == (ulonglong *)0x8) {
      *_Dst = *_Src;
    }
  }
  else {
    puVar62 = _Size;
    _Dst = memmove(_Dst,_Src,(size_t)_Size);
  }
  auVar71 = local_78;
  *(ulonglong *)((longlong)_Dst + (longlong)_Size + -8) = uVar54;
  local_78._8_8_ = (longlong)_Dst + (longlong)_Size;
  local_78._0_8_ = _Dst;
  local_78._24_8_ = auVar71._24_8_;
  local_78._16_8_ = lVar60;
  local_88 = 0;
  local_98 = (undefined1  [16])0x0;
  pauVar57 = (undefined1 (*) [16])local_78;
  FUN_14008cb40(param_1,(undefined1 (*) [16])local_78);
  if ((undefined8 *)local_78._0_8_ != (undefined8 *)0x0) {
    pauVar57 = (undefined1 (*) [16])(local_78._16_8_ - local_78._0_8_);
    FUN_14003cb20((undefined8 *)local_78._0_8_);
  }
  if (param_3[0xb] == param_3[10]) {
    if (param_3[0x15] == 0) {
      local_c0 = param_3[6];
      if ((param_3[7] == local_c0) || ((char)param_3[9] == '\x02')) {
        uVar61 = (uint)uVar54;
        FUN_14008ba90((uint)uVar52,uVar61,uVar63 & 0xffffffff,1.0,param_2[3],0,param_3[3],1,0.0,
                      (float *)param_1[3]);
        if ((param_4 != (float *)0x0) &&
           ((0 < (longlong)uVar52 && (pfVar64 = (float *)param_1[3], 0 < (longlong)uVar54)))) {
          uVar68 = uVar54 & 0xfffffffffffffff8;
          lVar65 = (uVar54 >> 3) * 0x20;
          uVar63 = 0;
          lVar60 = 0;
          pfVar53 = pfVar64;
          do {
            if ((uVar54 - 1 < 3) ||
               ((ulonglong)((longlong)pfVar53 - (longlong)(param_4 + 1)) < 0x19)) {
              uVar66 = 0;
              uVar67 = uVar61 & 7;
              if ((uVar54 & 7) != 0) {
                if (uVar67 != 1) {
                  if (uVar67 != 2) {
                    if (uVar67 != 3) {
                      if (uVar67 != 4) {
                        if (uVar67 != 5) {
                          if (uVar67 != 6) {
                            *pfVar53 = *pfVar53 + *param_4;
                          }
                          uVar66 = (ulonglong)(uVar67 != 6);
                          pfVar53[uVar66] = pfVar53[uVar66] + param_4[uVar66];
                          uVar66 = uVar66 + 1;
                        }
                        pfVar53[uVar66] = pfVar53[uVar66] + param_4[uVar66];
                        uVar66 = uVar66 + 1;
                      }
                      pfVar53[uVar66] = pfVar53[uVar66] + param_4[uVar66];
                      uVar66 = uVar66 + 1;
                    }
                    pfVar53[uVar66] = pfVar53[uVar66] + param_4[uVar66];
                    uVar66 = uVar66 + 1;
                  }
                  pfVar53[uVar66] = pfVar53[uVar66] + param_4[uVar66];
                  uVar66 = uVar66 + 1;
                }
                pfVar53[uVar66] = pfVar53[uVar66] + param_4[uVar66];
                uVar66 = uVar66 + 1;
                if (uVar66 == uVar54) goto LAB_14008e398;
              }
              do {
                lVar58 = uVar66 + 1;
                lVar1 = uVar66 + 2;
                lVar2 = uVar66 + 3;
                pfVar53[uVar66] = pfVar53[uVar66] + param_4[uVar66];
                pfVar53[lVar58] = pfVar53[lVar58] + param_4[lVar58];
                lVar58 = uVar66 + 4;
                pfVar53[lVar1] = pfVar53[lVar1] + param_4[lVar1];
                lVar1 = uVar66 + 5;
                pfVar53[lVar2] = pfVar53[lVar2] + param_4[lVar2];
                lVar2 = uVar66 + 6;
                pfVar53[lVar58] = pfVar53[lVar58] + param_4[lVar58];
                lVar58 = uVar66 + 7;
                uVar66 = uVar66 + 8;
                pfVar53[lVar1] = pfVar53[lVar1] + param_4[lVar1];
                pfVar53[lVar2] = pfVar53[lVar2] + param_4[lVar2];
                pfVar53[lVar58] = pfVar53[lVar58] + param_4[lVar58];
              } while (uVar66 != uVar54);
            }
            else if (uVar54 - 1 < 7) {
              uVar66 = uVar54;
              uVar59 = 0;
LAB_14008e56e:
              auVar70 = *(undefined1 (*) [16])(param_4 + uVar59);
              pauVar57 = (undefined1 (*) [16])(pfVar64 + lVar60 + uVar59);
              auVar82._0_4_ = auVar70._0_4_ + *(float *)*pauVar57;
              auVar82._4_4_ = auVar70._4_4_ + *(float *)((longlong)*pauVar57 + 4);
              auVar82._8_4_ = auVar70._8_4_ + *(float *)((longlong)*pauVar57 + 8);
              auVar82._12_4_ = auVar70._12_4_ + *(float *)((longlong)*pauVar57 + 0xc);
              *pauVar57 = auVar82;
              uVar59 = (uVar66 & 0xfffffffffffffffc) + uVar59;
              if ((uVar66 & 3) != 0) {
LAB_14008e598:
                pfVar64[lVar60 + uVar59] = pfVar64[lVar60 + uVar59] + param_4[uVar59];
                if (((longlong)(uVar59 + 1) < (longlong)uVar54) &&
                   (pfVar64[lVar60 + uVar59 + 1] =
                         pfVar64[lVar60 + uVar59 + 1] + param_4[uVar59 + 1],
                   (longlong)(uVar59 + 2) < (longlong)uVar54)) {
                  pfVar64[lVar60 + uVar59 + 2] = pfVar64[lVar60 + uVar59 + 2] + param_4[uVar59 + 2];
                }
              }
            }
            else {
              lVar58 = 0;
              uVar67 = (int)(lVar65 - 0x20U >> 5) + 1U & 7;
              if (uVar67 == 0) goto LAB_14008e489;
              if (uVar67 != 1) {
                if (uVar67 != 2) {
                  if (uVar67 != 3) {
                    if (uVar67 != 4) {
                      if (uVar67 != 5) {
                        if (uVar67 != 6) {
                          fVar13 = param_4[1];
                          fVar14 = param_4[2];
                          fVar15 = param_4[3];
                          fVar16 = param_4[4];
                          fVar17 = param_4[5];
                          fVar18 = param_4[6];
                          fVar19 = param_4[7];
                          lVar58 = 0x20;
                          *pfVar53 = *pfVar53 + *param_4;
                          pfVar53[1] = pfVar53[1] + fVar13;
                          pfVar53[2] = pfVar53[2] + fVar14;
                          pfVar53[3] = pfVar53[3] + fVar15;
                          pfVar53[4] = pfVar53[4] + fVar16;
                          pfVar53[5] = pfVar53[5] + fVar17;
                          pfVar53[6] = pfVar53[6] + fVar18;
                          pfVar53[7] = pfVar53[7] + fVar19;
                        }
                        pfVar3 = (float *)((longlong)pfVar53 + lVar58);
                        fVar13 = pfVar3[1];
                        fVar14 = pfVar3[2];
                        fVar15 = pfVar3[3];
                        fVar16 = pfVar3[4];
                        fVar17 = pfVar3[5];
                        fVar18 = pfVar3[6];
                        fVar19 = pfVar3[7];
                        pfVar4 = (float *)((longlong)param_4 + lVar58);
                        fVar20 = pfVar4[1];
                        fVar21 = pfVar4[2];
                        fVar22 = pfVar4[3];
                        fVar23 = pfVar4[4];
                        fVar24 = pfVar4[5];
                        fVar25 = pfVar4[6];
                        fVar26 = pfVar4[7];
                        pfVar5 = (float *)((longlong)pfVar53 + lVar58);
                        *pfVar5 = *pfVar3 + *pfVar4;
                        pfVar5[1] = fVar13 + fVar20;
                        pfVar5[2] = fVar14 + fVar21;
                        pfVar5[3] = fVar15 + fVar22;
                        pfVar5[4] = fVar16 + fVar23;
                        pfVar5[5] = fVar17 + fVar24;
                        pfVar5[6] = fVar18 + fVar25;
                        pfVar5[7] = fVar19 + fVar26;
                        lVar58 = lVar58 + 0x20;
                      }
                      pfVar3 = (float *)((longlong)pfVar53 + lVar58);
                      fVar13 = pfVar3[1];
                      fVar14 = pfVar3[2];
                      fVar15 = pfVar3[3];
                      fVar16 = pfVar3[4];
                      fVar17 = pfVar3[5];
                      fVar18 = pfVar3[6];
                      fVar19 = pfVar3[7];
                      pfVar4 = (float *)((longlong)param_4 + lVar58);
                      fVar20 = pfVar4[1];
                      fVar21 = pfVar4[2];
                      fVar22 = pfVar4[3];
                      fVar23 = pfVar4[4];
                      fVar24 = pfVar4[5];
                      fVar25 = pfVar4[6];
                      fVar26 = pfVar4[7];
                      pfVar5 = (float *)((longlong)pfVar53 + lVar58);
                      *pfVar5 = *pfVar3 + *pfVar4;
                      pfVar5[1] = fVar13 + fVar20;
                      pfVar5[2] = fVar14 + fVar21;
                      pfVar5[3] = fVar15 + fVar22;
                      pfVar5[4] = fVar16 + fVar23;
                      pfVar5[5] = fVar17 + fVar24;
                      pfVar5[6] = fVar18 + fVar25;
                      pfVar5[7] = fVar19 + fVar26;
                      lVar58 = lVar58 + 0x20;
                    }
                    pfVar3 = (float *)((longlong)pfVar53 + lVar58);
                    fVar13 = pfVar3[1];
                    fVar14 = pfVar3[2];
                    fVar15 = pfVar3[3];
                    fVar16 = pfVar3[4];
                    fVar17 = pfVar3[5];
                    fVar18 = pfVar3[6];
                    fVar19 = pfVar3[7];
                    pfVar4 = (float *)((longlong)param_4 + lVar58);
                    fVar20 = pfVar4[1];
                    fVar21 = pfVar4[2];
                    fVar22 = pfVar4[3];
                    fVar23 = pfVar4[4];
                    fVar24 = pfVar4[5];
                    fVar25 = pfVar4[6];
                    fVar26 = pfVar4[7];
                    pfVar5 = (float *)((longlong)pfVar53 + lVar58);
                    *pfVar5 = *pfVar3 + *pfVar4;
                    pfVar5[1] = fVar13 + fVar20;
                    pfVar5[2] = fVar14 + fVar21;
                    pfVar5[3] = fVar15 + fVar22;
                    pfVar5[4] = fVar16 + fVar23;
                    pfVar5[5] = fVar17 + fVar24;
                    pfVar5[6] = fVar18 + fVar25;
                    pfVar5[7] = fVar19 + fVar26;
                    lVar58 = lVar58 + 0x20;
                  }
                  auVar71 = *(undefined1 (*) [32])((longlong)pfVar53 + lVar58);
                  pfVar3 = (float *)((longlong)param_4 + lVar58);
                  auVar80._0_4_ = auVar71._0_4_ + *pfVar3;
                  auVar80._4_4_ = auVar71._4_4_ + pfVar3[1];
                  auVar80._8_4_ = auVar71._8_4_ + pfVar3[2];
                  auVar80._12_4_ = auVar71._12_4_ + pfVar3[3];
                  auVar80._16_4_ = auVar71._16_4_ + pfVar3[4];
                  auVar80._20_4_ = auVar71._20_4_ + pfVar3[5];
                  auVar80._24_4_ = auVar71._24_4_ + pfVar3[6];
                  auVar80._28_4_ = auVar71._28_4_ + pfVar3[7];
                  *(undefined1 (*) [32])((longlong)pfVar53 + lVar58) = auVar80;
                  lVar58 = lVar58 + 0x20;
                }
                auVar71 = *(undefined1 (*) [32])((longlong)pfVar53 + lVar58);
                pfVar3 = (float *)((longlong)param_4 + lVar58);
                auVar78._0_4_ = auVar71._0_4_ + *pfVar3;
                auVar78._4_4_ = auVar71._4_4_ + pfVar3[1];
                auVar78._8_4_ = auVar71._8_4_ + pfVar3[2];
                auVar78._12_4_ = auVar71._12_4_ + pfVar3[3];
                auVar78._16_4_ = auVar71._16_4_ + pfVar3[4];
                auVar78._20_4_ = auVar71._20_4_ + pfVar3[5];
                auVar78._24_4_ = auVar71._24_4_ + pfVar3[6];
                auVar78._28_4_ = auVar71._28_4_ + pfVar3[7];
                *(undefined1 (*) [32])((longlong)pfVar53 + lVar58) = auVar78;
                lVar58 = lVar58 + 0x20;
              }
              auVar71 = *(undefined1 (*) [32])((longlong)pfVar53 + lVar58);
              pfVar3 = (float *)((longlong)param_4 + lVar58);
              auVar83._0_4_ = auVar71._0_4_ + *pfVar3;
              auVar83._4_4_ = auVar71._4_4_ + pfVar3[1];
              auVar83._8_4_ = auVar71._8_4_ + pfVar3[2];
              auVar83._12_4_ = auVar71._12_4_ + pfVar3[3];
              auVar83._16_4_ = auVar71._16_4_ + pfVar3[4];
              auVar83._20_4_ = auVar71._20_4_ + pfVar3[5];
              auVar83._24_4_ = auVar71._24_4_ + pfVar3[6];
              auVar83._28_4_ = auVar71._28_4_ + pfVar3[7];
              *(undefined1 (*) [32])((longlong)pfVar53 + lVar58) = auVar83;
              for (lVar58 = lVar58 + 0x20; lVar65 != lVar58; lVar58 = lVar58 + 0x100) {
LAB_14008e489:
                pfVar3 = (float *)((longlong)pfVar53 + lVar58);
                fVar13 = pfVar3[1];
                fVar14 = pfVar3[2];
                fVar15 = pfVar3[3];
                fVar16 = pfVar3[4];
                fVar17 = pfVar3[5];
                fVar18 = pfVar3[6];
                fVar19 = pfVar3[7];
                pfVar4 = (float *)((longlong)param_4 + lVar58);
                fVar20 = pfVar4[1];
                fVar21 = pfVar4[2];
                fVar22 = pfVar4[3];
                fVar23 = pfVar4[4];
                fVar24 = pfVar4[5];
                fVar25 = pfVar4[6];
                fVar26 = pfVar4[7];
                pfVar5 = (float *)((longlong)pfVar53 + lVar58 + 0x20);
                fVar27 = *pfVar5;
                fVar28 = pfVar5[1];
                fVar29 = pfVar5[2];
                fVar30 = pfVar5[3];
                fVar31 = pfVar5[4];
                fVar32 = pfVar5[5];
                fVar33 = pfVar5[6];
                fVar34 = pfVar5[7];
                pfVar5 = (float *)((longlong)pfVar53 + lVar58 + 0x40);
                fVar35 = *pfVar5;
                fVar36 = pfVar5[1];
                fVar37 = pfVar5[2];
                fVar38 = pfVar5[3];
                fVar39 = pfVar5[4];
                fVar40 = pfVar5[5];
                fVar41 = pfVar5[6];
                fVar42 = pfVar5[7];
                pfVar5 = (float *)((longlong)pfVar53 + lVar58 + 0x60);
                fVar43 = *pfVar5;
                fVar44 = pfVar5[1];
                fVar45 = pfVar5[2];
                fVar46 = pfVar5[3];
                fVar47 = pfVar5[4];
                fVar48 = pfVar5[5];
                fVar49 = pfVar5[6];
                fVar50 = pfVar5[7];
                pfVar5 = (float *)((longlong)pfVar53 + lVar58);
                *pfVar5 = *pfVar3 + *pfVar4;
                pfVar5[1] = fVar13 + fVar20;
                pfVar5[2] = fVar14 + fVar21;
                pfVar5[3] = fVar15 + fVar22;
                pfVar5[4] = fVar16 + fVar23;
                pfVar5[5] = fVar17 + fVar24;
                pfVar5[6] = fVar18 + fVar25;
                pfVar5[7] = fVar19 + fVar26;
                pfVar3 = (float *)((longlong)param_4 + lVar58 + 0x20);
                fVar13 = pfVar3[1];
                fVar14 = pfVar3[2];
                fVar15 = pfVar3[3];
                fVar16 = pfVar3[4];
                fVar17 = pfVar3[5];
                fVar18 = pfVar3[6];
                fVar19 = pfVar3[7];
                pfVar4 = (float *)((longlong)pfVar53 + lVar58 + 0x80);
                fVar20 = *pfVar4;
                fVar21 = pfVar4[1];
                fVar22 = pfVar4[2];
                fVar23 = pfVar4[3];
                fVar24 = pfVar4[4];
                fVar25 = pfVar4[5];
                fVar26 = pfVar4[6];
                fVar51 = pfVar4[7];
                pfVar4 = (float *)((longlong)pfVar53 + lVar58 + 0x20);
                *pfVar4 = fVar27 + *pfVar3;
                pfVar4[1] = fVar28 + fVar13;
                pfVar4[2] = fVar29 + fVar14;
                pfVar4[3] = fVar30 + fVar15;
                pfVar4[4] = fVar31 + fVar16;
                pfVar4[5] = fVar32 + fVar17;
                pfVar4[6] = fVar33 + fVar18;
                pfVar4[7] = fVar34 + fVar19;
                pfVar3 = (float *)((longlong)param_4 + lVar58 + 0x40);
                fVar13 = pfVar3[1];
                fVar14 = pfVar3[2];
                fVar15 = pfVar3[3];
                fVar16 = pfVar3[4];
                fVar17 = pfVar3[5];
                fVar18 = pfVar3[6];
                fVar19 = pfVar3[7];
                auVar71 = *(undefined1 (*) [32])((longlong)pfVar53 + lVar58 + 0xa0);
                pfVar4 = (float *)((longlong)pfVar53 + lVar58 + 0x40);
                *pfVar4 = fVar35 + *pfVar3;
                pfVar4[1] = fVar36 + fVar13;
                pfVar4[2] = fVar37 + fVar14;
                pfVar4[3] = fVar38 + fVar15;
                pfVar4[4] = fVar39 + fVar16;
                pfVar4[5] = fVar40 + fVar17;
                pfVar4[6] = fVar41 + fVar18;
                pfVar4[7] = fVar42 + fVar19;
                pfVar3 = (float *)((longlong)param_4 + lVar58 + 0x60);
                fVar13 = pfVar3[1];
                fVar14 = pfVar3[2];
                fVar15 = pfVar3[3];
                fVar16 = pfVar3[4];
                fVar17 = pfVar3[5];
                fVar18 = pfVar3[6];
                fVar19 = pfVar3[7];
                auVar73 = *(undefined1 (*) [32])((longlong)pfVar53 + lVar58 + 0xc0);
                pfVar4 = (float *)((longlong)pfVar53 + lVar58 + 0x60);
                *pfVar4 = fVar43 + *pfVar3;
                pfVar4[1] = fVar44 + fVar13;
                pfVar4[2] = fVar45 + fVar14;
                pfVar4[3] = fVar46 + fVar15;
                pfVar4[4] = fVar47 + fVar16;
                pfVar4[5] = fVar48 + fVar17;
                pfVar4[6] = fVar49 + fVar18;
                pfVar4[7] = fVar50 + fVar19;
                pfVar3 = (float *)((longlong)param_4 + lVar58 + 0x80);
                fVar13 = pfVar3[1];
                fVar14 = pfVar3[2];
                fVar15 = pfVar3[3];
                fVar16 = pfVar3[4];
                fVar17 = pfVar3[5];
                fVar18 = pfVar3[6];
                fVar19 = pfVar3[7];
                auVar76 = *(undefined1 (*) [32])((longlong)pfVar53 + lVar58 + 0xe0);
                pfVar4 = (float *)((longlong)pfVar53 + lVar58 + 0x80);
                *pfVar4 = fVar20 + *pfVar3;
                pfVar4[1] = fVar21 + fVar13;
                pfVar4[2] = fVar22 + fVar14;
                pfVar4[3] = fVar23 + fVar15;
                pfVar4[4] = fVar24 + fVar16;
                pfVar4[5] = fVar25 + fVar17;
                pfVar4[6] = fVar26 + fVar18;
                pfVar4[7] = fVar51 + fVar19;
                pfVar3 = (float *)((longlong)param_4 + lVar58 + 0xa0);
                auVar84._0_4_ = auVar71._0_4_ + *pfVar3;
                auVar84._4_4_ = auVar71._4_4_ + pfVar3[1];
                auVar84._8_4_ = auVar71._8_4_ + pfVar3[2];
                auVar84._12_4_ = auVar71._12_4_ + pfVar3[3];
                auVar84._16_4_ = auVar71._16_4_ + pfVar3[4];
                auVar84._20_4_ = auVar71._20_4_ + pfVar3[5];
                auVar84._24_4_ = auVar71._24_4_ + pfVar3[6];
                auVar84._28_4_ = auVar71._28_4_ + pfVar3[7];
                *(undefined1 (*) [32])((longlong)pfVar53 + lVar58 + 0xa0) = auVar84;
                pfVar3 = (float *)((longlong)param_4 + lVar58 + 0xc0);
                auVar81._0_4_ = auVar73._0_4_ + *pfVar3;
                auVar81._4_4_ = auVar73._4_4_ + pfVar3[1];
                auVar81._8_4_ = auVar73._8_4_ + pfVar3[2];
                auVar81._12_4_ = auVar73._12_4_ + pfVar3[3];
                auVar81._16_4_ = auVar73._16_4_ + pfVar3[4];
                auVar81._20_4_ = auVar73._20_4_ + pfVar3[5];
                auVar81._24_4_ = auVar73._24_4_ + pfVar3[6];
                auVar81._28_4_ = auVar73._28_4_ + pfVar3[7];
                *(undefined1 (*) [32])((longlong)pfVar53 + lVar58 + 0xc0) = auVar81;
                pfVar3 = (float *)((longlong)param_4 + lVar58 + 0xe0);
                auVar79._0_4_ = auVar76._0_4_ + *pfVar3;
                auVar79._4_4_ = auVar76._4_4_ + pfVar3[1];
                auVar79._8_4_ = auVar76._8_4_ + pfVar3[2];
                auVar79._12_4_ = auVar76._12_4_ + pfVar3[3];
                auVar79._16_4_ = auVar76._16_4_ + pfVar3[4];
                auVar79._20_4_ = auVar76._20_4_ + pfVar3[5];
                auVar79._24_4_ = auVar76._24_4_ + pfVar3[6];
                auVar79._28_4_ = auVar76._28_4_ + pfVar3[7];
                *(undefined1 (*) [32])((longlong)pfVar53 + lVar58 + 0xe0) = auVar79;
              }
              if (uVar68 != uVar54) {
                uVar59 = uVar68;
                uVar66 = (ulonglong)(uVar61 & 7);
                if (2 < (ulonglong)(uVar61 & 7) - 1) goto LAB_14008e56e;
                goto LAB_14008e598;
              }
            }
LAB_14008e398:
            uVar63 = uVar63 + 1;
            pfVar53 = pfVar53 + uVar54;
            lVar60 = lVar60 + uVar54;
          } while (uVar52 != uVar63);
        }
      }
      else {
        if (uVar52 != 1) {
                    /* WARNING: Subroutine does not return */
          FUN_140006300(0x140159bf0,pauVar57,local_c0,lVar60);
        }
        local_b0 = param_2[3];
        local_a0 = param_1[3];
        local_58 = &local_a8;
        auVar70._8_8_ = &local_a0;
        auVar70._0_8_ = &local_b0;
        auVar69._8_8_ = &local_b8;
        auVar69._0_8_ = &local_c0;
        local_78._16_16_ = ZEXT116(1) * auVar70;
        local_78._0_16_ = ZEXT116(0) * auVar70 | ZEXT116(1) * auVar69;
        local_b8 = uVar63;
        local_a8 = param_4;
        FUN_14008c540(29999 < (longlong)(uVar63 * uVar54),uVar54,(undefined8 *)local_78);
      }
    }
    else {
      if (uVar52 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_140006300(0x140159bc0,pauVar57,puVar62,lVar60);
      }
      FUN_140083d80((longlong)param_3,uVar54,uVar63,(undefined1 (*) [32])param_2[3]);
    }
  }
  else {
    FUN_14007b1e0(uVar52,param_3,(undefined1 (*) [32])param_2[3],uVar63,(longlong)param_4);
  }
  return param_1;
}

