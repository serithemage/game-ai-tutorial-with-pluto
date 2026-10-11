
undefined8 *
FUN_14002be20(undefined8 *param_1,longlong param_2,longlong *param_3,longlong *param_4,int *param_5)

{
  void *_Dst;
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined8 uVar24;
  float *pfVar25;
  longlong lVar26;
  longlong lVar27;
  longlong *plVar28;
  undefined1 (*_Src) [16];
  undefined1 (*pauVar29) [32];
  longlong *plVar30;
  float *pfVar31;
  ulonglong *puVar32;
  undefined8 *puVar33;
  int *piVar34;
  undefined4 *puVar35;
  float *pfVar36;
  void *pvVar37;
  undefined1 (*pauVar38) [16];
  longlong lVar39;
  ulonglong uVar40;
  longlong lVar41;
  longlong lVar42;
  size_t _Size;
  undefined1 (*_Size_00) [32];
  longlong lVar43;
  longlong lVar44;
  undefined1 (*pauVar45) [32];
  ulonglong uVar46;
  uint uVar47;
  longlong lVar48;
  longlong lVar49;
  float fVar50;
  undefined1 auVar51 [32];
  float fVar52;
  float fVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [32];
  float fVar57;
  float fVar58;
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  float fVar61;
  longlong *plVar62;
  undefined1 auVar63 [16];
  longlong *plVar64;
  undefined1 auVar65 [64];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 in_ZMM10 [64];
  undefined1 auVar68 [64];
  float fVar69;
  float fVar70;
  undefined1 auVar71 [32];
  float fVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [32];
  undefined1 in_ZMM13 [64];
  float fVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [32];
  undefined1 auVar78 [64];
  longlong *local_f48;
  longlong *plStack_f40;
  longlong *local_f28;
  longlong *plStack_f20;
  undefined1 (*local_e58) [16];
  undefined8 local_e50;
  int local_e3c;
  longlong local_e38;
  longlong local_e30;
  longlong local_e28;
  undefined8 local_e20;
  longlong local_e18;
  longlong local_e10;
  longlong local_e08;
  longlong local_e00;
  undefined1 (*local_df8) [16];
  longlong local_df0;
  undefined1 local_de8 [16];
  float *local_dd8;
  undefined1 local_dc8 [16];
  void *local_db8;
  undefined8 local_da8 [3];
  undefined4 *local_d90;
  undefined8 local_ce8 [24];
  undefined1 (*local_c28) [32];
  undefined1 (*pauStack_c20) [32];
  undefined8 local_c18;
  longlong local_c10;
  undefined8 local_b68 [24];
  undefined8 local_aa8 [24];
  undefined8 local_9e8 [3];
  longlong local_9d0;
  undefined1 local_928 [24];
  longlong local_910;
  undefined1 local_868 [24];
  longlong local_850;
  longlong local_7a8 [24];
  longlong local_6e8 [24];
  longlong local_628 [24];
  undefined1 local_568 [24];
  undefined1 (*local_550) [32];
  longlong local_4a8 [24];
  longlong local_3e8 [24];
  undefined8 local_328;
  longlong local_320;
  undefined1 local_268 [16];
  undefined8 local_258;
  undefined1 (*local_250) [32];
  undefined1 (*local_1a8) [32];
  undefined1 (*pauStack_1a0) [32];
  undefined1 auStack_198 [16];
  longlong *local_188;
  longlong *plStack_180;
  undefined1 auStack_178 [16];
  longlong *local_168;
  longlong *plStack_160;
  undefined8 *local_158;
  longlong *local_150;
  undefined1 local_a8 [16];
  undefined1 local_78 [16];
  
  local_a8 = in_ZMM10._0_16_;
  local_78 = in_ZMM13._0_16_;
  local_e3c = *(int *)(param_2 + 0x394);
  iVar2 = *(int *)(param_2 + 0x3c0);
  iVar3 = *(int *)(param_2 + 0x3c4);
  iVar4 = *param_5;
  local_e50 = 2;
  local_268._8_8_ = 0x124;
  local_268._0_8_ = 1;
  local_e58 = &local_268;
  FUN_14000ac50((undefined1 (*) [16])&local_1a8,(longlong *)&local_e58);
  FUN_14008cb40(local_da8,(undefined1 (*) [16])&local_1a8);
  FUN_140124190((undefined8 *)&local_1a8);
  puVar35 = *(undefined4 **)(param_5 + 0x26);
  _Size = *(longlong *)(param_5 + 0x28) - (longlong)puVar35;
  if ((longlong)_Size < 5) {
    if (_Size == 4) {
      *local_d90 = *puVar35;
    }
  }
  else {
    memmove(local_d90,puVar35,_Size);
  }
  FUN_1400091e0((longlong *)local_268,"global_proj.1.bias");
  lVar26 = FUN_140095c80(param_2,(undefined8 *)local_268);
  plVar30 = *(longlong **)(lVar26 + 0x18);
  FUN_1400091e0((longlong *)&local_328,"global_proj.1.weight");
  lVar26 = FUN_140095c80(param_2,&local_328);
  lVar26 = *(longlong *)(lVar26 + 0x18);
  FUN_1400091e0(local_3e8,"global_proj.0.bias");
  lVar27 = FUN_140095c80(param_2,local_3e8);
  pfVar31 = *(float **)(lVar27 + 0x18);
  FUN_1400091e0(local_4a8,"global_proj.0.weight");
  plVar28 = (longlong *)FUN_140095c80(param_2,local_4a8);
  FUN_14008dc00((undefined8 *)&local_1a8,local_da8,plVar28,pfVar31);
  FUN_140075630(local_ce8,(undefined8 *)&local_1a8,lVar26,(longlong)plVar30);
  FUN_14008d410((undefined8 *)&local_1a8);
  FUN_1401250d0(local_4a8);
  FUN_1401250d0(local_3e8);
  FUN_1401250d0(&local_328);
  FUN_1401250d0((undefined8 *)local_268);
  FUN_1400091e0((longlong *)&local_1a8,"action_hist_emb.weight");
  plVar28 = (longlong *)FUN_140095c80(param_2,(undefined8 *)&local_1a8);
  _Size_00 = (undefined1 (*) [32])*plVar28;
  lVar26 = *(longlong *)(param_5 + 0x38);
  lVar27 = *(longlong *)(*_Size_00 + 8);
  local_328 = 4;
  local_e50 = 2;
  local_e58 = (undefined1 (*) [16])&local_328;
  local_320 = lVar27;
  FUN_14000ac50(&local_268,(longlong *)&local_e58);
  pauVar38 = &local_268;
  FUN_14008cb40(&local_c28,&local_268);
  lVar48 = 0;
  lVar49 = 0;
  FUN_140124190((undefined8 *)local_268);
  do {
    while( true ) {
      lVar43 = *(longlong *)(lVar26 + lVar49 * 8);
      if ((lVar43 < 0) || (plVar30 = (longlong *)*plVar28, *plVar30 <= lVar43)) {
                    /* WARNING: Subroutine does not return */
        FUN_140006300(0x140159a51,pauVar38,_Size_00,plVar30);
      }
      lVar43 = (lVar43 + 1) * lVar27;
      puVar35 = (undefined4 *)(local_c10 + lVar48);
      lVar44 = lVar43 - lVar27;
      _Size_00 = (undefined1 (*) [32])(lVar43 * 4 + lVar44 * -4);
      _Src = (undefined1 (*) [16])(plVar28[3] + lVar44 * 4);
      if ((longlong)_Size_00 < 5) break;
      memmove(puVar35,_Src,(size_t)_Size_00);
      pauVar38 = _Src;
LAB_14002c140:
      lVar49 = lVar49 + 1;
      lVar48 = lVar48 + lVar27 * 4;
      if (lVar49 == 4) goto LAB_14002c1b8;
    }
    if (_Size_00 != (undefined1 (*) [32])0x4) goto LAB_14002c140;
    lVar49 = lVar49 + 1;
    lVar48 = lVar48 + lVar27 * 4;
    *puVar35 = *(undefined4 *)*_Src;
  } while (lVar49 != 4);
LAB_14002c1b8:
  FUN_1401250d0((undefined8 *)&local_1a8);
  local_328 = 1;
  local_e50 = 2;
  local_320 = (longlong)*(int *)(param_2 + 0x3a0) << 2;
  local_e58 = (undefined1 (*) [16])&local_328;
  FUN_14000ac50(&local_268,(longlong *)&local_e58);
  auStack_198._0_8_ = local_c18;
  pauStack_1a0 = pauStack_c20;
  local_1a8 = local_c28;
  if (local_268._0_8_ == local_268._8_8_) {
    lVar26 = 1;
    if (local_c28 != pauStack_c20) goto LAB_14002c522;
  }
  else {
    uVar40 = local_268._8_8_ + (-8 - local_268._0_8_);
    _Size_00 = (undefined1 (*) [32])((uVar40 >> 3) + 1);
    if (uVar40 < 0x169) {
      lVar26 = 1;
      pauVar29 = (undefined1 (*) [32])local_268._0_8_;
LAB_14002c44a:
      uVar47 = (int)((ulonglong)(local_268._8_8_ + (-8 - (longlong)pauVar29)) >> 3) + 1U & 7;
      plVar30 = (longlong *)(ulonglong)uVar47;
      pauVar45 = pauVar29;
      if (uVar47 != 0) {
        if (plVar30 != (longlong *)0x1) {
          if (plVar30 != (longlong *)0x2) {
            if (plVar30 != (longlong *)0x3) {
              if (plVar30 != (longlong *)0x4) {
                if (plVar30 != (longlong *)0x5) {
                  if (plVar30 != (longlong *)0x6) {
                    lVar26 = lVar26 * *(longlong *)*pauVar29;
                    pauVar29 = (undefined1 (*) [32])(*pauVar29 + 8);
                  }
                  lVar26 = lVar26 * *(longlong *)*pauVar29;
                  pauVar29 = (undefined1 (*) [32])(*pauVar29 + 8);
                }
                lVar26 = lVar26 * *(longlong *)*pauVar29;
                pauVar29 = (undefined1 (*) [32])(*pauVar29 + 8);
              }
              lVar26 = lVar26 * *(longlong *)*pauVar29;
              pauVar29 = (undefined1 (*) [32])(*pauVar29 + 8);
            }
            lVar26 = lVar26 * *(longlong *)*pauVar29;
            pauVar29 = (undefined1 (*) [32])(*pauVar29 + 8);
          }
          lVar26 = lVar26 * *(longlong *)*pauVar29;
          pauVar29 = (undefined1 (*) [32])(*pauVar29 + 8);
        }
        lVar26 = lVar26 * *(longlong *)*pauVar29;
        pauVar45 = (undefined1 (*) [32])(*pauVar29 + 8);
        if ((undefined1 (*) [32])local_268._8_8_ == (undefined1 (*) [32])(*pauVar29 + 8))
        goto LAB_14002c502;
      }
      do {
        pauVar29 = pauVar45 + 2;
        lVar26 = lVar26 * *(longlong *)*pauVar45 * *(longlong *)(*pauVar45 + 8) *
                 *(longlong *)(*pauVar45 + 0x10) * *(longlong *)(*pauVar45 + 0x18) *
                 *(longlong *)pauVar45[1] * *(longlong *)(pauVar45[1] + 8) *
                 *(longlong *)(pauVar45[1] + 0x10) * *(longlong *)(pauVar45[1] + 0x18);
        pauVar45 = pauVar29;
      } while ((undefined1 (*) [32])local_268._8_8_ != pauVar29);
    }
    else {
      auVar67._8_8_ = 1;
      auVar67._0_8_ = 1;
      auVar67._16_8_ = 1;
      auVar67._24_8_ = 1;
      uVar47 = (int)(((ulonglong)_Size_00 >> 2) * 0x20 - 0x20 >> 5) + 1U & 3;
      pauVar29 = (undefined1 (*) [32])local_268._0_8_;
      if (uVar47 == 0) goto LAB_14002c31d;
      if (uVar47 != 1) {
        if (uVar47 != 2) {
          auVar71 = *(undefined1 (*) [32])local_268._0_8_;
          auVar56 = vpsrlq_avx2(auVar67,0x20);
          pauVar29 = (undefined1 (*) [32])(local_268._0_8_ + 0x20);
          auVar59 = vpsrlq_avx2(auVar71,0x20);
          auVar56 = vpmuludq_avx2(auVar56,auVar71);
          auVar59 = vpmuludq_avx2(auVar59,auVar67);
          auVar77 = vpmuludq_avx2(auVar71,auVar67);
          auVar71._0_8_ = auVar59._0_8_ + auVar56._0_8_;
          auVar71._8_8_ = auVar59._8_8_ + auVar56._8_8_;
          auVar71._16_8_ = auVar59._16_8_ + auVar56._16_8_;
          auVar71._24_8_ = auVar59._24_8_ + auVar56._24_8_;
          auVar71 = vpsllq_avx2(auVar71,0x20);
          auVar67._0_8_ = auVar77._0_8_ + auVar71._0_8_;
          auVar67._8_8_ = auVar77._8_8_ + auVar71._8_8_;
          auVar67._16_8_ = auVar77._16_8_ + auVar71._16_8_;
          auVar67._24_8_ = auVar77._24_8_ + auVar71._24_8_;
        }
        auVar71 = *pauVar29;
        auVar56 = vpsrlq_avx2(auVar67,0x20);
        pauVar29 = pauVar29 + 1;
        auVar77 = vpsrlq_avx2(auVar71,0x20);
        auVar59 = vpmuludq_avx2(auVar71,auVar67);
        auVar71 = vpmuludq_avx2(auVar56,auVar71);
        auVar67 = vpmuludq_avx2(auVar77,auVar67);
        auVar56._0_8_ = auVar67._0_8_ + auVar71._0_8_;
        auVar56._8_8_ = auVar67._8_8_ + auVar71._8_8_;
        auVar56._16_8_ = auVar67._16_8_ + auVar71._16_8_;
        auVar56._24_8_ = auVar67._24_8_ + auVar71._24_8_;
        auVar71 = vpsllq_avx2(auVar56,0x20);
        auVar67._0_8_ = auVar59._0_8_ + auVar71._0_8_;
        auVar67._8_8_ = auVar59._8_8_ + auVar71._8_8_;
        auVar67._16_8_ = auVar59._16_8_ + auVar71._16_8_;
        auVar67._24_8_ = auVar59._24_8_ + auVar71._24_8_;
      }
      auVar71 = *pauVar29;
      auVar56 = vpsrlq_avx2(auVar67,0x20);
      auVar59 = vpsrlq_avx2(auVar71,0x20);
      auVar56 = vpmuludq_avx2(auVar56,auVar71);
      auVar77 = vpmuludq_avx2(auVar59,auVar67);
      auVar71 = vpmuludq_avx2(auVar71,auVar67);
      auVar59._0_8_ = auVar77._0_8_ + auVar56._0_8_;
      auVar59._8_8_ = auVar77._8_8_ + auVar56._8_8_;
      auVar59._16_8_ = auVar77._16_8_ + auVar56._16_8_;
      auVar59._24_8_ = auVar77._24_8_ + auVar56._24_8_;
      auVar56 = vpsllq_avx2(auVar59,0x20);
      auVar67._0_8_ = auVar71._0_8_ + auVar56._0_8_;
      auVar67._8_8_ = auVar71._8_8_ + auVar56._8_8_;
      auVar67._16_8_ = auVar71._16_8_ + auVar56._16_8_;
      auVar67._24_8_ = auVar71._24_8_ + auVar56._24_8_;
      pauVar29 = pauVar29 + 1;
      while (pauVar29 != (undefined1 (*) [32])(local_268._0_8_ + ((ulonglong)_Size_00 >> 2) * 0x20))
      {
LAB_14002c31d:
        auVar71 = *pauVar29;
        auVar59 = vpsrlq_avx2(auVar67,0x20);
        auVar56 = pauVar29[1];
        auVar77 = vpsrlq_avx2(auVar71,0x20);
        auVar59 = vpmuludq_avx2(auVar59,auVar71);
        auVar51 = vpmuludq_avx2(auVar77,auVar67);
        auVar71 = vpmuludq_avx2(auVar71,auVar67);
        auVar74 = vpsrlq_avx2(auVar56,0x20);
        auVar77._0_8_ = auVar51._0_8_ + auVar59._0_8_;
        auVar77._8_8_ = auVar51._8_8_ + auVar59._8_8_;
        auVar77._16_8_ = auVar51._16_8_ + auVar59._16_8_;
        auVar77._24_8_ = auVar51._24_8_ + auVar59._24_8_;
        auVar67 = pauVar29[2];
        auVar59 = vpsllq_avx2(auVar77,0x20);
        auVar51._0_8_ = auVar71._0_8_ + auVar59._0_8_;
        auVar51._8_8_ = auVar71._8_8_ + auVar59._8_8_;
        auVar51._16_8_ = auVar71._16_8_ + auVar59._16_8_;
        auVar51._24_8_ = auVar71._24_8_ + auVar59._24_8_;
        auVar66 = vpsrlq_avx2(auVar67,0x20);
        auVar59 = vpsrlq_avx2(auVar51,0x20);
        auVar71 = vpmuludq_avx2(auVar74,auVar51);
        auVar59 = vpmuludq_avx2(auVar59,auVar56);
        auVar56 = vpmuludq_avx2(auVar56,auVar51);
        auVar74._0_8_ = auVar71._0_8_ + auVar59._0_8_;
        auVar74._8_8_ = auVar71._8_8_ + auVar59._8_8_;
        auVar74._16_8_ = auVar71._16_8_ + auVar59._16_8_;
        auVar74._24_8_ = auVar71._24_8_ + auVar59._24_8_;
        auVar71 = pauVar29[3];
        auVar59 = vpsllq_avx2(auVar74,0x20);
        auVar11._0_8_ = auVar56._0_8_ + auVar59._0_8_;
        auVar11._8_8_ = auVar56._8_8_ + auVar59._8_8_;
        auVar11._16_8_ = auVar56._16_8_ + auVar59._16_8_;
        auVar11._24_8_ = auVar56._24_8_ + auVar59._24_8_;
        auVar77 = vpsrlq_avx2(auVar71,0x20);
        auVar59 = vpsrlq_avx2(auVar11,0x20);
        auVar56 = vpmuludq_avx2(auVar66,auVar11);
        auVar59 = vpmuludq_avx2(auVar59,auVar67);
        auVar67 = vpmuludq_avx2(auVar67,auVar11);
        auVar66._0_8_ = auVar56._0_8_ + auVar59._0_8_;
        auVar66._8_8_ = auVar56._8_8_ + auVar59._8_8_;
        auVar66._16_8_ = auVar56._16_8_ + auVar59._16_8_;
        auVar66._24_8_ = auVar56._24_8_ + auVar59._24_8_;
        auVar56 = vpsllq_avx2(auVar66,0x20);
        auVar12._0_8_ = auVar67._0_8_ + auVar56._0_8_;
        auVar12._8_8_ = auVar67._8_8_ + auVar56._8_8_;
        auVar12._16_8_ = auVar67._16_8_ + auVar56._16_8_;
        auVar12._24_8_ = auVar67._24_8_ + auVar56._24_8_;
        auVar56 = vpsrlq_avx2(auVar12,0x20);
        auVar67 = vpmuludq_avx2(auVar77,auVar12);
        auVar56 = vpmuludq_avx2(auVar56,auVar71);
        auVar71 = vpmuludq_avx2(auVar71,auVar12);
        auVar13._0_8_ = auVar67._0_8_ + auVar56._0_8_;
        auVar13._8_8_ = auVar67._8_8_ + auVar56._8_8_;
        auVar13._16_8_ = auVar67._16_8_ + auVar56._16_8_;
        auVar13._24_8_ = auVar67._24_8_ + auVar56._24_8_;
        auVar56 = vpsllq_avx2(auVar13,0x20);
        auVar67._0_8_ = auVar71._0_8_ + auVar56._0_8_;
        auVar67._8_8_ = auVar71._8_8_ + auVar56._8_8_;
        auVar67._16_8_ = auVar71._16_8_ + auVar56._16_8_;
        auVar67._24_8_ = auVar71._24_8_ + auVar56._24_8_;
        pauVar29 = pauVar29 + 4;
      }
      auVar63 = auVar67._0_16_;
      auVar54 = auVar67._16_16_;
      auVar55 = vpsrlq_avx(auVar63,0x20);
      auVar73 = vpsrlq_avx(auVar54,0x20);
      auVar55 = vpmuludq_avx(auVar55,auVar54);
      auVar73 = vpmuludq_avx(auVar73,auVar63);
      auVar63 = vpmuludq_avx(auVar54,auVar63);
      auVar55 = vpaddq_avx(auVar73,auVar55);
      auVar55 = vpsllq_avx(auVar55,0x20);
      auVar55 = vpaddq_avx(auVar63,auVar55);
      auVar54 = vpsrldq_avx(auVar55,8);
      auVar73 = vpsrlq_avx(auVar55,0x20);
      auVar63 = vpsrlq_avx(auVar54,0x20);
      auVar73 = vpmuludq_avx(auVar73,auVar54);
      auVar63 = vpmuludq_avx(auVar63,auVar55);
      auVar54 = vpmuludq_avx(auVar54,auVar55);
      auVar55 = vpaddq_avx(auVar63,auVar73);
      auVar55 = vpsllq_avx(auVar55,0x20);
      auVar55 = vpaddq_avx(auVar54,auVar55);
      lVar26 = auVar55._0_8_;
      if (((ulonglong)_Size_00 & 3) != 0) {
        _Size_00 = (undefined1 (*) [32])((ulonglong)_Size_00 & 0xfffffffffffffffc);
        pauVar29 = (undefined1 (*) [32])((undefined1 *)local_268._0_8_ + (longlong)_Size_00 * 8);
        goto LAB_14002c44a;
      }
    }
LAB_14002c502:
    if (local_c28 == pauStack_c20) {
      lVar27 = 1;
    }
    else {
LAB_14002c522:
      uVar40 = (longlong)pauStack_c20 + (-8 - (longlong)local_c28);
      uVar46 = (uVar40 >> 3) + 1;
      if (uVar40 < 0x169) {
        lVar27 = 1;
      }
      else {
        auVar60._8_8_ = 1;
        auVar60._0_8_ = 1;
        auVar60._16_8_ = 1;
        auVar60._24_8_ = 1;
        _Size_00 = local_c28 + (uVar46 >> 2);
        uVar47 = (int)((uVar46 >> 2) * 0x20 - 0x20 >> 5) + 1U & 3;
        pauVar29 = local_c28;
        if (uVar47 == 0) goto LAB_14002c60e;
        if (uVar47 != 1) {
          if (uVar47 != 2) {
            auVar67 = *local_c28;
            auVar59 = vpsrlq_avx2(auVar60,0x20);
            pauVar29 = local_c28 + 1;
            auVar56 = vpsrlq_avx2(auVar67,0x20);
            auVar71 = vpmuludq_avx2(auVar67,auVar60);
            auVar67 = vpmuludq_avx2(auVar59,auVar67);
            auVar56 = vpmuludq_avx2(auVar56,auVar60);
            auVar14._0_8_ = auVar56._0_8_ + auVar67._0_8_;
            auVar14._8_8_ = auVar56._8_8_ + auVar67._8_8_;
            auVar14._16_8_ = auVar56._16_8_ + auVar67._16_8_;
            auVar14._24_8_ = auVar56._24_8_ + auVar67._24_8_;
            auVar67 = vpsllq_avx2(auVar14,0x20);
            auVar60._0_8_ = auVar71._0_8_ + auVar67._0_8_;
            auVar60._8_8_ = auVar71._8_8_ + auVar67._8_8_;
            auVar60._16_8_ = auVar71._16_8_ + auVar67._16_8_;
            auVar60._24_8_ = auVar71._24_8_ + auVar67._24_8_;
          }
          auVar67 = *pauVar29;
          auVar71 = vpsrlq_avx2(auVar60,0x20);
          pauVar29 = pauVar29 + 1;
          auVar56 = vpsrlq_avx2(auVar67,0x20);
          auVar71 = vpmuludq_avx2(auVar71,auVar67);
          auVar56 = vpmuludq_avx2(auVar56,auVar60);
          auVar67 = vpmuludq_avx2(auVar67,auVar60);
          auVar15._0_8_ = auVar56._0_8_ + auVar71._0_8_;
          auVar15._8_8_ = auVar56._8_8_ + auVar71._8_8_;
          auVar15._16_8_ = auVar56._16_8_ + auVar71._16_8_;
          auVar15._24_8_ = auVar56._24_8_ + auVar71._24_8_;
          auVar71 = vpsllq_avx2(auVar15,0x20);
          auVar60._0_8_ = auVar67._0_8_ + auVar71._0_8_;
          auVar60._8_8_ = auVar67._8_8_ + auVar71._8_8_;
          auVar60._16_8_ = auVar67._16_8_ + auVar71._16_8_;
          auVar60._24_8_ = auVar67._24_8_ + auVar71._24_8_;
        }
        auVar67 = *pauVar29;
        auVar59 = vpsrlq_avx2(auVar60,0x20);
        auVar56 = vpsrlq_avx2(auVar67,0x20);
        auVar71 = vpmuludq_avx2(auVar67,auVar60);
        auVar67 = vpmuludq_avx2(auVar59,auVar67);
        auVar56 = vpmuludq_avx2(auVar56,auVar60);
        auVar16._0_8_ = auVar56._0_8_ + auVar67._0_8_;
        auVar16._8_8_ = auVar56._8_8_ + auVar67._8_8_;
        auVar16._16_8_ = auVar56._16_8_ + auVar67._16_8_;
        auVar16._24_8_ = auVar56._24_8_ + auVar67._24_8_;
        auVar67 = vpsllq_avx2(auVar16,0x20);
        auVar60._0_8_ = auVar71._0_8_ + auVar67._0_8_;
        auVar60._8_8_ = auVar71._8_8_ + auVar67._8_8_;
        auVar60._16_8_ = auVar71._16_8_ + auVar67._16_8_;
        auVar60._24_8_ = auVar71._24_8_ + auVar67._24_8_;
        pauVar29 = pauVar29 + 1;
        while (pauVar29 != _Size_00) {
LAB_14002c60e:
          auVar67 = *pauVar29;
          auVar56 = vpsrlq_avx2(auVar60,0x20);
          auVar71 = pauVar29[1];
          auVar59 = vpsrlq_avx2(auVar67,0x20);
          auVar56 = vpmuludq_avx2(auVar56,auVar67);
          auVar59 = vpmuludq_avx2(auVar59,auVar60);
          auVar67 = vpmuludq_avx2(auVar67,auVar60);
          auVar77 = vpsrlq_avx2(auVar71,0x20);
          auVar17._0_8_ = auVar59._0_8_ + auVar56._0_8_;
          auVar17._8_8_ = auVar59._8_8_ + auVar56._8_8_;
          auVar17._16_8_ = auVar59._16_8_ + auVar56._16_8_;
          auVar17._24_8_ = auVar59._24_8_ + auVar56._24_8_;
          auVar56 = vpsllq_avx2(auVar17,0x20);
          auVar18._0_8_ = auVar67._0_8_ + auVar56._0_8_;
          auVar18._8_8_ = auVar67._8_8_ + auVar56._8_8_;
          auVar18._16_8_ = auVar67._16_8_ + auVar56._16_8_;
          auVar18._24_8_ = auVar67._24_8_ + auVar56._24_8_;
          auVar67 = pauVar29[2];
          auVar59 = vpsrlq_avx2(auVar18,0x20);
          auVar56 = vpmuludq_avx2(auVar77,auVar18);
          auVar59 = vpmuludq_avx2(auVar59,auVar71);
          auVar77 = vpmuludq_avx2(auVar71,auVar18);
          auVar51 = vpsrlq_avx2(auVar67,0x20);
          auVar19._0_8_ = auVar56._0_8_ + auVar59._0_8_;
          auVar19._8_8_ = auVar56._8_8_ + auVar59._8_8_;
          auVar19._16_8_ = auVar56._16_8_ + auVar59._16_8_;
          auVar19._24_8_ = auVar56._24_8_ + auVar59._24_8_;
          auVar71 = pauVar29[3];
          auVar56 = vpsllq_avx2(auVar19,0x20);
          auVar20._0_8_ = auVar77._0_8_ + auVar56._0_8_;
          auVar20._8_8_ = auVar77._8_8_ + auVar56._8_8_;
          auVar20._16_8_ = auVar77._16_8_ + auVar56._16_8_;
          auVar20._24_8_ = auVar77._24_8_ + auVar56._24_8_;
          auVar59 = vpsrlq_avx2(auVar20,0x20);
          auVar56 = vpmuludq_avx2(auVar51,auVar20);
          auVar59 = vpmuludq_avx2(auVar59,auVar67);
          auVar67 = vpmuludq_avx2(auVar67,auVar20);
          auVar77 = vpsrlq_avx2(auVar71,0x20);
          auVar21._0_8_ = auVar56._0_8_ + auVar59._0_8_;
          auVar21._8_8_ = auVar56._8_8_ + auVar59._8_8_;
          auVar21._16_8_ = auVar56._16_8_ + auVar59._16_8_;
          auVar21._24_8_ = auVar56._24_8_ + auVar59._24_8_;
          auVar56 = vpsllq_avx2(auVar21,0x20);
          auVar22._0_8_ = auVar67._0_8_ + auVar56._0_8_;
          auVar22._8_8_ = auVar67._8_8_ + auVar56._8_8_;
          auVar22._16_8_ = auVar67._16_8_ + auVar56._16_8_;
          auVar22._24_8_ = auVar67._24_8_ + auVar56._24_8_;
          auVar56 = vpsrlq_avx2(auVar22,0x20);
          auVar67 = vpmuludq_avx2(auVar77,auVar22);
          auVar56 = vpmuludq_avx2(auVar56,auVar71);
          auVar71 = vpmuludq_avx2(auVar71,auVar22);
          auVar23._0_8_ = auVar67._0_8_ + auVar56._0_8_;
          auVar23._8_8_ = auVar67._8_8_ + auVar56._8_8_;
          auVar23._16_8_ = auVar67._16_8_ + auVar56._16_8_;
          auVar23._24_8_ = auVar67._24_8_ + auVar56._24_8_;
          auVar67 = vpsllq_avx2(auVar23,0x20);
          auVar60._0_8_ = auVar71._0_8_ + auVar67._0_8_;
          auVar60._8_8_ = auVar71._8_8_ + auVar67._8_8_;
          auVar60._16_8_ = auVar71._16_8_ + auVar67._16_8_;
          auVar60._24_8_ = auVar71._24_8_ + auVar67._24_8_;
          pauVar29 = pauVar29 + 4;
        }
        auVar63 = auVar60._0_16_;
        auVar55 = auVar60._16_16_;
        auVar76 = vpsrlq_avx(auVar63,0x20);
        auVar54 = vpsrlq_avx(auVar55,0x20);
        auVar73 = vpmuludq_avx(auVar55,auVar63);
        auVar55 = vpmuludq_avx(auVar76,auVar55);
        auVar63 = vpmuludq_avx(auVar54,auVar63);
        auVar55 = vpaddq_avx(auVar63,auVar55);
        auVar55 = vpsllq_avx(auVar55,0x20);
        auVar55 = vpaddq_avx(auVar73,auVar55);
        auVar54 = vpsrldq_avx(auVar55,8);
        auVar73 = vpsrlq_avx(auVar55,0x20);
        auVar63 = vpsrlq_avx(auVar54,0x20);
        auVar73 = vpmuludq_avx(auVar73,auVar54);
        auVar63 = vpmuludq_avx(auVar63,auVar55);
        auVar54 = vpmuludq_avx(auVar54,auVar55);
        auVar55 = vpaddq_avx(auVar63,auVar73);
        auVar55 = vpsllq_avx(auVar55,0x20);
        auVar55 = vpaddq_avx(auVar54,auVar55);
        lVar27 = auVar55._0_8_;
        if ((uVar46 & 3) == 0) goto LAB_14002c7f0;
        local_c28 = (undefined1 (*) [32])(*local_c28 + (uVar46 & 0xfffffffffffffffc) * 8);
      }
      uVar47 = (int)((ulonglong)((longlong)pauStack_c20 + (-8 - (longlong)local_c28)) >> 3) + 1U & 7
      ;
      pauVar29 = local_c28;
      if (uVar47 != 0) {
        if (uVar47 != 1) {
          if (uVar47 != 2) {
            if (uVar47 != 3) {
              if (uVar47 != 4) {
                if (uVar47 != 5) {
                  if (uVar47 != 6) {
                    lVar27 = lVar27 * *(longlong *)*local_c28;
                    local_c28 = (undefined1 (*) [32])(*local_c28 + 8);
                  }
                  lVar27 = lVar27 * *(longlong *)*local_c28;
                  local_c28 = (undefined1 (*) [32])(*local_c28 + 8);
                }
                lVar27 = lVar27 * *(longlong *)*local_c28;
                local_c28 = (undefined1 (*) [32])(*local_c28 + 8);
              }
              lVar27 = lVar27 * *(longlong *)*local_c28;
              local_c28 = (undefined1 (*) [32])(*local_c28 + 8);
            }
            lVar27 = lVar27 * *(longlong *)*local_c28;
            local_c28 = (undefined1 (*) [32])(*local_c28 + 8);
          }
          lVar27 = lVar27 * *(longlong *)*local_c28;
          local_c28 = (undefined1 (*) [32])(*local_c28 + 8);
        }
        lVar27 = lVar27 * *(longlong *)*local_c28;
        pauVar29 = (undefined1 (*) [32])(*local_c28 + 8);
        if ((undefined1 (*) [32])(*local_c28 + 8) == pauStack_c20) goto LAB_14002c7f0;
      }
      do {
        pauVar45 = pauVar29 + 2;
        lVar27 = lVar27 * *(longlong *)*pauVar29 * *(longlong *)(*pauVar29 + 8) *
                 *(longlong *)(*pauVar29 + 0x10) * *(longlong *)(*pauVar29 + 0x18) *
                 *(longlong *)pauVar29[1] * *(longlong *)(pauVar29[1] + 8) *
                 *(longlong *)(pauVar29[1] + 0x10) * *(longlong *)(pauVar29[1] + 0x18);
        pauVar29 = pauVar45;
      } while (pauVar45 != pauStack_c20);
    }
LAB_14002c7f0:
    if (lVar27 != lVar26) {
                    /* WARNING: Subroutine does not return */
      FUN_140006300(0x140159438,pauStack_c20,_Size_00,plVar30);
    }
  }
  local_c28 = (undefined1 (*) [32])local_268._0_8_;
  pauStack_c20 = (undefined1 (*) [32])local_268._8_8_;
  local_268 = (undefined1  [16])0x0;
  local_c18 = local_258;
  local_258 = 0;
  FUN_140124190((undefined8 *)&local_1a8);
  FUN_140124190((undefined8 *)local_268);
  FUN_1400091e0((longlong *)local_268,"action_hist_proj.1.bias");
  lVar26 = FUN_140095c80(param_2,(undefined8 *)local_268);
  lVar26 = *(longlong *)(lVar26 + 0x18);
  FUN_1400091e0((longlong *)&local_328,"action_hist_proj.1.weight");
  lVar27 = FUN_140095c80(param_2,&local_328);
  lVar27 = *(longlong *)(lVar27 + 0x18);
  FUN_1400091e0(local_3e8,"action_hist_proj.0.bias");
  lVar48 = FUN_140095c80(param_2,local_3e8);
  pfVar31 = *(float **)(lVar48 + 0x18);
  FUN_1400091e0(local_4a8,"action_hist_proj.0.weight");
  plVar30 = (longlong *)FUN_140095c80(param_2,local_4a8);
  FUN_14008dc00((undefined8 *)&local_1a8,&local_c28,plVar30,pfVar31);
  FUN_140075630(local_b68,(undefined8 *)&local_1a8,lVar27,lVar26);
  FUN_14008d410((undefined8 *)&local_1a8);
  FUN_1401250d0(local_4a8);
  FUN_1401250d0(local_3e8);
  FUN_1401250d0(&local_328);
  FUN_1401250d0((undefined8 *)local_268);
  FUN_14007fb00(local_aa8,local_ce8,local_b68);
  FUN_1400091e0((longlong *)&local_1a8,"gru.W_i.bias");
  lVar26 = FUN_140095c80(param_2,(undefined8 *)&local_1a8);
  pfVar31 = *(float **)(lVar26 + 0x18);
  FUN_1400091e0((longlong *)local_268,"gru.W_i.weight");
  plVar30 = (longlong *)FUN_140095c80(param_2,(undefined8 *)local_268);
  FUN_14008dc00(local_9e8,local_aa8,plVar30,pfVar31);
  FUN_1401250d0((undefined8 *)local_268);
  FUN_1401250d0((undefined8 *)&local_1a8);
  FUN_1400091e0((longlong *)&local_1a8,"gru.spatial_kv_proj.weight");
  plVar30 = (longlong *)FUN_140095c80(param_2,(undefined8 *)&local_1a8);
  FUN_14008d670((undefined1 (*) [32])local_928,param_3,(ulonglong *)(param_2 + 0x13c0),plVar30,
                (float *)0x0);
  FUN_1401250d0((undefined8 *)&local_1a8);
  FUN_1400091e0((longlong *)&local_1a8,"gru.unit_kv_proj.weight");
  plVar30 = (longlong *)FUN_140095c80(param_2,(undefined8 *)&local_1a8);
  FUN_14008d670((undefined1 (*) [32])local_868,param_4,(ulonglong *)(param_2 + 0x1360),plVar30,
                (float *)0x0);
  FUN_1401250d0((undefined8 *)&local_1a8);
  if (*(char *)(param_2 + 0x11d0) == '\0') {
    FUN_1400284f0(param_2);
  }
  local_e38 = *(longlong *)(param_2 + 0x11f0);
  uVar46 = (ulonglong)(iVar3 / iVar2);
  lVar27 = (longlong)iVar3;
  lVar26 = (longlong)local_e3c * 4;
  local_e20 = *(undefined8 *)(param_2 + 0x12a8);
  local_e30 = local_e38 + lVar26;
  uVar40 = (ulonglong)iVar2;
  local_e28 = local_e30 + lVar26;
  local_e18 = local_9d0;
  local_e10 = local_9d0 + lVar26;
  puVar35 = (undefined4 *)(local_e38 + (local_e3c * 3 + lVar27) * 4);
  local_e08 = local_e10 + lVar26;
  FUN_1400130a0(local_7a8,(undefined4 *)(local_e28 + lVar26),lVar27,uVar40,uVar46);
  lVar26 = (longlong)(iVar3 * 2);
  FUN_1400133b0(local_6e8,local_910,0,lVar26,uVar40,uVar46);
  FUN_1400133b0(local_628,local_910,lVar27,lVar26,uVar40,uVar46);
  FUN_140026bb0((undefined8 *)&local_1a8,local_7a8,local_6e8,local_628);
  FUN_140010e50((undefined1 (*) [16])local_568,(longlong *)&local_1a8);
  FUN_14008d410((undefined8 *)&local_1a8);
  FUN_1400130a0(local_4a8,puVar35,lVar27,uVar40,uVar46);
  FUN_140010a70(local_3e8,local_850,(longlong)iVar4,0,lVar26,uVar40,uVar46);
  FUN_140010a70(&local_328,local_850,(longlong)iVar4,lVar27,lVar26,uVar40,uVar46);
  FUN_140026bb0((undefined8 *)&local_1a8,local_4a8,local_3e8,(longlong *)&local_328);
  pauVar38 = (undefined1 (*) [16])&local_1a8;
  FUN_140010e50(&local_268,(longlong *)&local_1a8);
  FUN_14008d410((undefined8 *)&local_1a8);
  uVar40 = (ulonglong)(local_e3c * 3);
  if (uVar40 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1401533c0("cannot create std::vector larger than max_size()");
  }
  local_dd8 = (float *)0x0;
  local_de8 = (undefined1  [16])0x0;
  if (uVar40 == 0) {
    uVar47 = 0;
    pfVar31 = (float *)0x0;
    local_dd8 = (float *)0x0;
    local_de8 = ZEXT816(0);
LAB_14002d509:
    local_dc8._0_8_ = (ulonglong *)0x0;
    local_db8 = (void *)0x0;
    pvVar37 = (void *)0x0;
    puVar32 = (ulonglong *)local_dc8._0_8_;
  }
  else {
    pfVar31 = (float *)FUN_14003bde0(uVar40 * 4,pauVar38);
    local_dd8 = pfVar31 + uVar40;
    pfVar1 = pfVar31 + 1;
    local_de8._0_8_ = pfVar31;
    uVar47 = local_e3c * 3;
    *pfVar31 = 0.0;
    uVar46 = (ulonglong)(int)uVar47;
    pfVar36 = pfVar1;
    pfVar25 = pfVar31;
    if ((uVar40 != 1) && (pfVar36 = local_dd8, pfVar1 != local_dd8)) {
      memset(pfVar1,0,uVar40 * 4 - 4);
      pfVar25 = (float *)local_de8._0_8_;
    }
    local_de8._0_8_ = pfVar25;
    local_de8._8_8_ = pfVar36;
    if (uVar46 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1401533c0("cannot create std::vector larger than max_size()");
    }
    local_db8 = (void *)0x0;
    local_dc8 = (undefined1  [16])0x0;
    if (uVar46 == 0) goto LAB_14002d509;
    uVar40 = uVar46 * 4;
    puVar32 = FUN_14003bde0(uVar40,0);
    local_db8 = (void *)((longlong)puVar32 + uVar40);
    local_dc8._0_8_ = puVar32;
    _Dst = (void *)((longlong)puVar32 + 4);
    pfVar31 = (float *)local_de8._0_8_;
    *(undefined4 *)puVar32 = 0;
    uVar47 = local_e3c * 3;
    pvVar37 = _Dst;
    if ((uVar46 != 1) && (pvVar37 = local_db8, local_db8 != _Dst)) {
      memset(_Dst,0,uVar40 - 4);
      puVar32 = (ulonglong *)local_dc8._0_8_;
    }
  }
  local_dc8._0_8_ = puVar32;
  local_dc8._8_8_ = pvVar37;
  FUN_1400091e0((longlong *)&local_1a8,"gru.w_out_s");
  lVar26 = FUN_140095c80(param_2,(undefined8 *)&local_1a8);
  FUN_14000dab0(lVar26,local_550,pfVar31,iVar3,uVar47);
  FUN_1401250d0((undefined8 *)&local_1a8);
  uVar24 = local_dc8._0_8_;
  uVar47 = local_e3c * 3;
  FUN_1400091e0((longlong *)&local_1a8,"gru.w_out_u");
  lVar26 = FUN_140095c80(param_2,(undefined8 *)&local_1a8);
  FUN_14000dab0(lVar26,local_250,(float *)uVar24,iVar3,uVar47);
  FUN_1401250d0((undefined8 *)&local_1a8);
  local_df0 = (longlong)local_e3c;
  local_df8 = (undefined1 (*) [16])0x1;
  local_e50 = 2;
  local_e58 = (undefined1 (*) [16])&local_df8;
  FUN_14000ac50((undefined1 (*) [16])&local_1a8,(longlong *)&local_e58);
  FUN_14008cb40(param_1,(undefined1 (*) [16])&local_1a8);
  plVar30 = &local_e18;
  plVar28 = &local_e38;
  auVar55._8_8_ = plVar28;
  auVar55._0_8_ = plVar30;
  auVar73._8_8_ = &local_e10;
  auVar73._0_8_ = &local_e20;
  auVar63._8_8_ = local_dc8;
  auVar63._0_8_ = local_de8;
  auVar54._8_8_ = &local_e3c;
  auVar54._0_8_ = &local_e30;
  auVar55 = ZEXT116(0) * auVar63 | ZEXT116(1) * auVar55;
  auVar73 = ZEXT116(0) * auVar54 | ZEXT116(1) * auVar73;
  plVar62 = &local_e08;
  plVar64 = &local_e28;
  FUN_140124190((undefined8 *)&local_1a8);
  iVar2 = local_e3c;
  lVar26 = (longlong)local_e3c;
  local_e00 = *(longlong *)(param_2 + 0x478);
  local_150 = &local_e00;
  local_f28 = auVar55._0_8_;
  plStack_f20 = auVar55._8_8_;
  local_f48 = auVar73._0_8_;
  plStack_f40 = auVar73._8_8_;
  local_1a8 = (undefined1 (*) [32])local_f28;
  pauStack_1a0 = (undefined1 (*) [32])plStack_f20;
  local_188 = local_f48;
  plStack_180 = plStack_f40;
  local_168 = plVar62;
  plStack_160 = plVar64;
  local_158 = param_1;
  auStack_198 = ZEXT116(1) * auVar63;
  auStack_178 = ZEXT116(1) * auVar54;
  puVar33 = (undefined8 *)FUN_14008b9d0(local_150,plVar28,(longlong)plVar30);
  if (iVar2 < 30000) {
    if (lVar26 < 1) goto LAB_14002d358;
  }
  else if (1 < *(int *)(puVar33 + 0x19)) {
    piVar34 = FUN_14005bf50((size_t *)&DAT_1401575e0);
    if (*piVar34 < 1) {
      local_df8 = (undefined1 (*) [16])&local_1a8;
      local_df0 = lVar26;
      FUN_14008b8e0(puVar33,FUN_14000c7a0,(undefined1 (*) [16])&local_df8);
      goto LAB_14002d358;
    }
  }
  lVar27 = *(longlong *)pauStack_1a0;
  lVar48 = *(longlong *)local_1a8;
  lVar49 = *(longlong *)auStack_178._0_8_;
  lVar43 = *(longlong *)auStack_198._8_8_;
  lVar44 = *local_188;
  lVar41 = (longlong)*(int *)auStack_178._8_8_ << 2;
  lVar5 = *(longlong *)auStack_198._0_8_;
  lVar6 = *local_168;
  lVar7 = *plStack_160;
  lVar8 = local_158[3];
  lVar9 = *plStack_180;
  lVar10 = *local_150;
  lVar42 = (longlong)(*(int *)auStack_178._8_8_ * 2) << 2;
  lVar39 = 0;
  auVar65 = ZEXT464(0x3f800000);
  fVar61 = -87.0;
  fVar58 = 1.442695;
  fVar57 = 0.5;
  fVar75 = 0.6931472;
  fVar72 = 0.0001984127;
  fVar70 = 0.0013888889;
  fVar69 = 0.008333334;
  do {
    fVar50 = *(float *)(lVar48 + lVar39 * 4) + *(float *)(lVar27 + lVar39 * 4) +
             *(float *)(lVar5 + lVar39 * 4) + *(float *)(lVar43 + lVar39 * 4) +
             *(float *)(lVar44 + lVar39 * 4);
    fVar52 = auVar65._0_4_;
    fVar53 = fVar52;
    if ((fVar50 <= 87.0) && (fVar53 = 1.6458151e-38, fVar61 <= fVar50)) {
      auVar55 = ZEXT416((uint)(-(fVar50 * fVar58) + fVar57));
      auVar55 = vroundss_avx(auVar55,auVar55,9);
      fVar50 = (-(fVar50 * fVar58) - auVar55._0_4_) * fVar75;
      fVar53 = fVar52 / ((fVar50 * (((fVar50 * (fVar50 * ((fVar50 * fVar72 + fVar70) * fVar50 +
                                                         fVar69) + 0.041666668) + 0.16666667) *
                                     fVar50 + fVar57) * fVar50 + fVar52) + fVar52) *
                         (float)(((int)auVar55._0_4_ + 0x7f) * 0x800000) + fVar52);
    }
    fVar50 = *(float *)(lVar9 + lVar39 * 4) + *(float *)(lVar49 + lVar39 * 4) +
             *(float *)(lVar5 + lVar41) + *(float *)(lVar43 + lVar41) + *(float *)(lVar44 + lVar41);
    if (fVar50 <= 87.0) {
      if (fVar50 < -87.0) {
        auVar68 = ZEXT464(0xb336a1);
        auVar78 = ZEXT1664(auVar65._0_16_);
      }
      else {
        auVar55 = ZEXT416((uint)(-(fVar50 * 1.442695) + 0.5));
        auVar55 = vroundss_avx(auVar55,auVar55,9);
        fVar50 = (-(fVar50 * 1.442695) - auVar55._0_4_) * 0.6931472;
        fVar50 = fVar52 / (((((fVar50 * (fVar50 * (fVar50 * (fVar50 * 0.0001984127 + 0.0013888889) +
                                                  0.008333334) + 0.041666668) + 0.16666667) * fVar50
                             + 0.5) * fVar50 + fVar52) * fVar50 + fVar52) *
                           (float)(((int)auVar55._0_4_ + 0x7f) * 0x800000) + fVar52);
        auVar68 = ZEXT1664(CONCAT124(auVar65._4_12_,fVar50));
        auVar78 = ZEXT464((uint)(fVar52 - fVar50));
      }
    }
    else {
      auVar78 = ZEXT1264(ZEXT812(0));
      auVar68 = ZEXT1664(auVar65._0_16_);
    }
    lVar41 = lVar41 + 4;
    pfVar31 = (float *)(lVar5 + lVar42);
    pfVar36 = (float *)(lVar43 + lVar42);
    pfVar1 = (float *)(lVar44 + lVar42);
    lVar42 = lVar42 + 4;
    fVar50 = FUN_140066d80(fVar53 * *(float *)(lVar7 + lVar39 * 4) +
                           *(float *)(lVar6 + lVar39 * 4) + *pfVar31 + *pfVar36 + *pfVar1);
    *(float *)(lVar8 + lVar39 * 4) =
         fVar50 * auVar78._0_4_ + auVar68._0_4_ * *(float *)(lVar10 + lVar39 * 4);
    lVar39 = lVar39 + 1;
  } while (lVar39 < lVar26);
LAB_14002d358:
  if ((undefined8 *)local_dc8._0_8_ != (undefined8 *)0x0) {
    FUN_14003cb20((undefined8 *)local_dc8._0_8_);
  }
  if ((undefined8 *)local_de8._0_8_ != (undefined8 *)0x0) {
    FUN_14003cb20((undefined8 *)local_de8._0_8_);
  }
  FUN_14008d410((undefined8 *)local_268);
  FUN_14008d410(&local_328);
  FUN_14008d410(local_3e8);
  FUN_14008d410(local_4a8);
  FUN_14008d410((undefined8 *)local_568);
  FUN_14008d410(local_628);
  FUN_14008d410(local_6e8);
  FUN_14008d410(local_7a8);
  FUN_14008d410((undefined8 *)local_868);
  FUN_14008d410((undefined8 *)local_928);
  FUN_14008d410(local_9e8);
  FUN_14008d410(local_aa8);
  FUN_14008d410(local_b68);
  FUN_14008d410(&local_c28);
  FUN_14008d410(local_ce8);
  FUN_14008d410(local_da8);
  return param_1;
}

