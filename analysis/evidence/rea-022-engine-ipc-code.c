
ulonglong FUN_1401501f0(int param_1,longlong param_2)

{
  undefined **ppuVar1;
  undefined1 (*pauVar2) [32];
  longlong *plVar3;
  longlong *plVar4;
  undefined1 (*pauVar5) [32];
  undefined1 (*pauVar6) [32];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong *puVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  longlong lVar17;
  char cVar18;
  bool bVar19;
  int iVar20;
  DWORD DVar21;
  uint uVar22;
  ulonglong uVar23;
  FILE *pFVar24;
  longlong *plVar25;
  size_t sVar26;
  undefined1 *puVar27;
  undefined8 uVar28;
  longlong lVar29;
  HANDLE hFileMappingObject;
  ulonglong uVar30;
  uint *lpBaseAddress;
  FILE *pFVar31;
  char *pcVar32;
  char *pcVar33;
  int *piVar34;
  undefined8 *puVar35;
  char *pcVar36;
  longlong lVar37;
  undefined1 (*pauVar38) [32];
  int iVar39;
  char *pcVar40;
  longlong lVar41;
  uint uVar42;
  uint *puVar43;
  ulonglong uVar44;
  undefined4 *puVar45;
  uint *puVar46;
  undefined1 (*pauVar47) [32];
  undefined *puVar48;
  undefined **ppuVar49;
  undefined1 (*pauVar50) [32];
  double dVar51;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined8 unaff_XMM7_Qa;
  double dVar52;
  undefined8 unaff_XMM7_Qb;
  undefined8 unaff_XMM8_Qa;
  double dVar53;
  undefined8 unaff_XMM8_Qb;
  undefined1 auVar54 [64];
  undefined8 unaff_XMM9_Qa;
  double dVar55;
  undefined8 unaff_XMM9_Qb;
  undefined8 unaff_XMM10_Qa;
  double dVar56;
  undefined8 unaff_XMM10_Qb;
  undefined8 unaff_XMM11_Qa;
  double dVar57;
  undefined8 unaff_XMM11_Qb;
  undefined8 unaff_XMM12_Qa;
  double dVar58;
  undefined8 unaff_XMM12_Qb;
  undefined8 auStackX_8 [4];
  undefined8 uStack_48;
  
  uStack_48 = 0x140150206;
  uVar23 = FUN_14005b830();
  lVar17 = -uVar23;
  *(undefined8 *)(&stack0x000021d0 + lVar17) = unaff_XMM6_Qa;
  *(undefined8 *)(&stack0x000021d8 + lVar17) = unaff_XMM6_Qb;
  *(undefined8 *)(&stack0x000021e0 + lVar17) = unaff_XMM7_Qa;
  *(undefined8 *)(&stack0x000021e8 + lVar17) = unaff_XMM7_Qb;
  *(undefined8 *)(&stack0x000021f0 + lVar17) = unaff_XMM8_Qa;
  *(undefined8 *)(&stack0x000021f8 + lVar17) = unaff_XMM8_Qb;
  *(undefined8 *)(&stack0x00002200 + lVar17) = unaff_XMM9_Qa;
  *(undefined8 *)(&stack0x00002208 + lVar17) = unaff_XMM9_Qb;
  *(undefined8 *)(&stack0x00002210 + lVar17) = unaff_XMM10_Qa;
  *(undefined8 *)(&stack0x00002218 + lVar17) = unaff_XMM10_Qb;
  *(undefined8 *)(&stack0x00002220 + lVar17) = unaff_XMM11_Qa;
  *(undefined8 *)(&stack0x00002228 + lVar17) = unaff_XMM11_Qb;
  *(undefined8 *)(&stack0x00002230 + lVar17) = unaff_XMM12_Qa;
  *(undefined8 *)(&stack0x00002238 + lVar17) = unaff_XMM12_Qb;
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150253;
  FUN_14005a800();
  puVar48 = PTR_FUN_140155420;
  *(undefined **)(&stack0x00000040 + lVar17) = PTR_FUN_140155420;
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150269;
  pFVar24 = (FILE *)(*(code *)PTR_FUN_140155420)(2);
  uVar28 = 0;
  uVar23 = 4;
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015027c;
  setvbuf(pFVar24,(char *)0x0,4,0);
  if ((~DAT_14019336c & 0x4400) != 0) {
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015029a;
    pFVar24 = (FILE *)(*(code *)puVar48)(2);
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401502a9;
    FUN_14005c3e0(pFVar24,(byte *)
                          "[pluto_infer] this CPU lacks AVX2/FMA (needs Intel Haswell 2013+ / AMD Zen); cannot run\n"
                  ,uVar23,uVar28);
    return 1;
  }
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150305;
  FUN_140083c10();
  *(undefined1 **)(&stack0x00000070 + lVar17) = &stack0x000000b0 + lVar17;
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015031a;
  FUN_14008fc50((longlong *)(&stack0x000000b0 + lVar17));
  uVar23 = *(ulonglong *)(&stack0x000000b8 + lVar17);
  *(undefined1 **)((longlong)auStackX_8 + lVar17 + 0x18) = &stack0x000000d0 + lVar17;
  puVar27 = *(undefined1 **)(&stack0x000000b0 + lVar17);
  *(undefined1 **)(&stack0x000000d0 + lVar17) = &stack0x000000e0 + lVar17;
  *(undefined8 *)(&stack0x000000d8 + lVar17) = 0;
  (&stack0x000000e0)[lVar17] = 0;
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150363;
  FUN_140127960((undefined8 *)(&stack0x000000d0 + lVar17),uVar23 + 0x11);
  if (0x3fffffffffffffffU - *(longlong *)(&stack0x000000d8 + lVar17) < uVar23) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152a1c;
    FUN_1401533c0("basic_string::append");
  }
  plVar25 = *(longlong **)((longlong)auStackX_8 + lVar17 + 0x18);
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150391;
  FUN_140127aa0(plVar25,puVar27,uVar23);
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401503a6;
  FUN_140126660(plVar25,"pluto_weights.bin",0x11);
  *(undefined1 **)(&stack0x000000f0 + lVar17) = &stack0x00000100 + lVar17;
  *(undefined8 *)(&stack0x000000f8 + lVar17) = 0;
  (&stack0x00000100)[lVar17] = 0;
  *(undefined1 **)(&stack0x00000110 + lVar17) = &stack0x00000120 + lVar17;
  *(undefined8 *)(&stack0x00000118 + lVar17) = 0;
  (&stack0x00000120)[lVar17] = 0;
  *(undefined1 **)(&stack0x00000130 + lVar17) = &stack0x00000140 + lVar17;
  *(undefined8 *)(&stack0x00000138 + lVar17) = 0;
  (&stack0x00000140)[lVar17] = 0;
  if (1 < param_1) {
    uVar23 = 0;
    pcVar40 = (char *)0x0;
    (&stack0x0000008c)[lVar17] = 0;
    iVar39 = 1;
    *(undefined4 *)(&stack0x00000080 + lVar17) = 0;
    *(undefined8 *)(&stack0x00000090 + lVar17) = 0;
    (&stack0x00000038)[lVar17] = 0;
    (&stack0x0000008b)[lVar17] = 0;
    (&stack0x00000050)[lVar17] = 0;
    (&stack0x00000058)[lVar17] = 0;
    *(undefined4 *)(&stack0x00000030 + lVar17) = 0xffffffff;
    *(undefined8 *)(&stack0x00000048 + lVar17) = 0;
    *(undefined1 **)(&stack0x00000028 + lVar17) = &stack0x00000110 + lVar17;
    *(undefined1 **)(&stack0x00000060 + lVar17) = &stack0x000000f0 + lVar17;
    *(undefined1 **)(&stack0x00000068 + lVar17) = &stack0x00000130 + lVar17;
    *(undefined8 *)(&stack0x00000098 + lVar17) = 0x4066800000000000;
    do {
      pcVar36 = *(char **)(param_2 + (longlong)iVar39 * 8);
      lVar41 = (longlong)iVar39 * 8;
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401504da;
      iVar20 = strcmp(pcVar36,"--blob");
      if (iVar20 == 0) {
        pcVar40 = *(char **)(param_2 + 8 + lVar41);
        iVar39 = iVar39 + 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150670;
        sVar26 = strlen(pcVar40);
        puVar13 = *(ulonglong **)((longlong)auStackX_8 + lVar17 + 0x18);
        *(size_t *)(&stack0xffffffffffffffe0 + lVar17) = sVar26;
        uVar23 = *(ulonglong *)(&stack0x000000d8 + lVar17);
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015068c;
        FUN_1401250f0(puVar13,0,uVar23,pcVar40,*(ulonglong *)(&stack0xffffffffffffffe0 + lVar17));
      }
      else {
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401504ed;
        iVar20 = strcmp(pcVar36,"--backend");
        if (iVar20 == 0) {
          pcVar40 = *(char **)(param_2 + 8 + lVar41);
          iVar39 = iVar39 + 1;
          *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150720;
          sVar26 = strlen(pcVar40);
          *(size_t *)(&stack0xffffffffffffffe0 + lVar17) = sVar26;
          uVar23 = *(ulonglong *)(&stack0x00000118 + lVar17);
          *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015073c;
          FUN_1401250f0(*(ulonglong **)(&stack0x00000028 + lVar17),0,uVar23,pcVar40,
                        *(ulonglong *)(&stack0xffffffffffffffe0 + lVar17));
        }
        else {
          *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150500;
          iVar20 = strcmp(pcVar36,"--threads");
          if (iVar20 == 0) {
            pcVar36 = *(char **)(param_2 + 8 + lVar41);
            iVar39 = iVar39 + 1;
            *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150765;
            iVar20 = atoi(pcVar36);
            *(int *)(&stack0x00000030 + lVar17) = iVar20;
          }
          else {
            *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150517;
            iVar20 = strcmp(pcVar36,"--bench");
            if (iVar20 == 0) {
              (&stack0x00000038)[lVar17] = 1;
            }
            else {
              *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015052e;
              iVar20 = strcmp(pcVar36,"--seed");
              if (iVar20 == 0) {
                pcVar36 = *(char **)(param_2 + 8 + lVar41);
                uVar23 = 0;
                iVar39 = iVar39 + 1;
                *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015078d;
                uVar44 = _strtoui64(pcVar36,(char **)0x0,0);
                (&stack0x00000058)[lVar17] = 1;
                *(ulonglong *)(&stack0x00000048 + lVar17) = uVar44;
              }
              else {
                *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150545;
                iVar20 = strcmp(pcVar36,"--argmax");
                if (iVar20 == 0) {
                  (&stack0x00000050)[lVar17] = 1;
                }
                else {
                  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015055c;
                  iVar20 = strcmp(pcVar36,"--log");
                  if (iVar20 == 0) {
                    pcVar36 = *(char **)(param_2 + 8 + lVar41);
                    iVar39 = iVar39 + 1;
                    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151b12;
                    FUN_140001bb0(*(ulonglong **)(&stack0x00000060 + lVar17),pcVar36);
                  }
                  else {
                    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150573;
                    iVar20 = strcmp(pcVar36,"--verbose");
                    if (iVar20 == 0) {
                      (&stack0x0000008b)[lVar17] = 1;
                    }
                    else {
                      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015058a;
                      iVar20 = strcmp(pcVar36,"--ptx");
                      if (iVar20 == 0) {
                        iVar39 = iVar39 + 1;
                      }
                      else {
                        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401505a1;
                        iVar20 = strcmp(pcVar36,"--prof");
                        if (iVar20 == 0) {
                          pcVar36 = *(char **)(param_2 + 8 + lVar41);
                          iVar39 = iVar39 + 1;
                          *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152802;
                          iVar20 = atoi(pcVar36);
                          *(int *)(&stack0x00000080 + lVar17) = iVar20;
                        }
                        else {
                          *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401505b8;
                          iVar20 = strcmp(pcVar36,"--prof-secs");
                          if (iVar20 == 0) {
                            pcVar36 = *(char **)(param_2 + 8 + lVar41);
                            iVar39 = iVar39 + 1;
                            *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401521b3;
                            dVar57 = atof(pcVar36);
                            *(double *)(&stack0x00000098 + lVar17) = dVar57;
                          }
                          else {
                            *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401505cf;
                            iVar20 = strcmp(pcVar36,"--prof-gap");
                            if (iVar20 == 0) {
                              pcVar36 = *(char **)(param_2 + 8 + lVar41);
                              iVar39 = iVar39 + 1;
                              *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015285a;
                              dVar57 = atof(pcVar36);
                              *(double *)(&stack0x00000090 + lVar17) = dVar57;
                            }
                            else {
                              *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401505e6;
                              iVar20 = strcmp(pcVar36,"--prof-ready");
                              if (iVar20 == 0) {
                                pcVar36 = *(char **)(param_2 + 8 + lVar41);
                                iVar39 = iVar39 + 1;
                                *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015288a;
                                FUN_140001bb0(*(ulonglong **)(&stack0x00000068 + lVar17),pcVar36);
                              }
                              else {
                                *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401505fd;
                                iVar20 = strcmp(pcVar36,"--prof-action");
                                if (iVar20 != 0) {
                                  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401528f1;
                                  pFVar24 = (FILE *)(**(code **)(&stack0x00000040 + lVar17))(2);
                                  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152903;
                                  FUN_14005c3e0(pFVar24,(byte *)"[pluto_infer] unknown arg %s\n",
                                                (ulonglong)pcVar36,pcVar40);
                                  goto LAB_140150655;
                                }
                                pcVar36 = *(char **)(param_2 + 8 + lVar41);
                                iVar39 = iVar39 + 1;
                                *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015061c;
                                iVar20 = strcmp(pcVar36,"rclick");
                                if (iVar20 == 0) {
                                  (&stack0x0000008c)[lVar17] = 1;
                                }
                                else {
                                  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150633;
                                  iVar20 = strcmp(pcVar36,"move");
                                  if (iVar20 != 0) {
                                    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150646;
                                    pFVar24 = (FILE *)(**(code **)(&stack0x00000040 + lVar17))(2);
                                    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150655;
                                    FUN_14005c3e0(pFVar24,(byte *)
                                                  "[pluto_infer] --prof-action move|rclick\n",uVar23
                                                  ,pcVar40);
                                    goto LAB_140150655;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      iVar39 = iVar39 + 1;
    } while (iVar39 < param_1);
    if (*(longlong *)(&stack0x000000f8 + lVar17) == 0) {
LAB_1401506a7:
      if ((&stack0x00000038)[lVar17] != '\0') {
        uVar28 = *(undefined8 *)((longlong)auStackX_8 + lVar17 + 0x18);
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401506c6;
        uVar23 = FUN_1400032e0(uVar28,*(ulonglong **)(&stack0x00000028 + lVar17),
                               *(int *)(&stack0x00000030 + lVar17),pcVar40);
        uVar23 = uVar23 & 0xffffffff;
        goto LAB_1401506c9;
      }
      goto LAB_140150828;
    }
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151b2e;
    pFVar24 = (FILE *)(**(code **)(&stack0x00000040 + lVar17))(2);
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151b45;
    pFVar24 = freopen(*(char **)(&stack0x000000f0 + lVar17),"w",pFVar24);
    if (pFVar24 != (FILE *)0x0) goto LAB_1401506a7;
LAB_140150655:
    uVar23 = 2;
    goto LAB_1401506c9;
  }
  *(undefined4 *)(&stack0x00000030 + lVar17) = 0xffffffff;
  *(undefined8 *)(&stack0x00000090 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000048 + lVar17) = 0;
  (&stack0x0000008c)[lVar17] = 0;
  (&stack0x00000050)[lVar17] = 0;
  (&stack0x00000058)[lVar17] = 0;
  (&stack0x0000008b)[lVar17] = 0;
  *(undefined4 *)(&stack0x00000080 + lVar17) = 0;
  *(undefined1 **)(&stack0x00000028 + lVar17) = &stack0x00000110 + lVar17;
  *(undefined1 **)(&stack0x00000060 + lVar17) = &stack0x000000f0 + lVar17;
  *(undefined1 **)(&stack0x00000068 + lVar17) = &stack0x00000130 + lVar17;
  *(undefined8 *)(&stack0x00000098 + lVar17) = 0x4066800000000000;
LAB_140150828:
  pcVar14 = *(code **)(&stack0x00000040 + lVar17);
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150835;
  pFVar24 = (FILE *)(*pcVar14)(0);
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150842;
  iVar39 = _fileno(pFVar24);
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150853;
  _setmode(iVar39,0x8000);
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015085b;
  pFVar24 = (FILE *)(*pcVar14)(1);
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150861;
  iVar39 = _fileno(pFVar24);
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015086b;
  _setmode(iVar39,0x8000);
  ppuVar1 = (undefined **)(&stack0x00000190 + lVar17);
  (&stack0x00000180)[lVar17] = 0;
  *(undefined1 **)(&stack0x00000170 + lVar17) = &stack0x00000180 + lVar17;
  plVar25 = *(longlong **)((longlong)auStackX_8 + lVar17 + 0x18);
  pcVar40 = &stack0x00000170 + lVar17;
  *(undefined8 *)(&stack0x00000178 + lVar17) = 0;
  *(undefined ***)(&stack0x00000078 + lVar17) = ppuVar1;
  *(char **)(&stack0x00000038 + lVar17) = pcVar40;
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401508ba;
  ppuVar49 = ppuVar1;
  FUN_14008d4b0((longlong *)ppuVar1,plVar25);
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401508c9;
  plVar25 = FUN_1401265a0((longlong *)ppuVar1,"pluto_config.json");
  pauVar2 = (undefined1 (*) [32])(&stack0x000001c0 + lVar17);
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401508dc;
  FUN_140127e50((longlong *)pauVar2,plVar25);
  pcVar36 = "rb";
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401508eb;
  pFVar24 = FUN_14008f770((undefined8 *)pauVar2,"rb");
  if (pFVar24 == (FILE *)0x0) {
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152178;
    FUN_1401250d0((undefined8 *)pauVar2);
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152185;
    FUN_1401250d0(*(undefined8 **)(&stack0x00000078 + lVar17));
    if (*(longlong *)(&stack0x00000118 + lVar17) == 0) {
      uVar22 = 0xffffffff;
      *(undefined1 **)(&stack0x00000038 + lVar17) = &stack0x00000170 + lVar17;
      goto LAB_1401520ae;
    }
    *(undefined1 **)(&stack0x00000038 + lVar17) = &stack0x00000170 + lVar17;
LAB_140150ac8:
    uVar22 = *(uint *)(&stack0x00000030 + lVar17);
  }
  else {
    (&stack0x00000260)[lVar17] = 0;
    *(undefined1 **)(&stack0x00000250 + lVar17) = &stack0x00000260 + lVar17;
    plVar25 = (longlong *)(&stack0x00000250 + lVar17);
    *(undefined8 *)(&stack0x00000258 + lVar17) = 0;
    while( true ) {
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150975;
      pFVar31 = pFVar24;
      sVar26 = fread(&stack0x00000db0 + lVar17,1,0x1000,pFVar24);
      if (sVar26 == 0) break;
      if (0x3fffffffffffffffU - *(longlong *)(&stack0x00000258 + lVar17) < sVar26) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)((longlong)&uStack_48 + lVar17) = &UNK_140152a28;
        FUN_1401533c0("basic_string::append");
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015095f;
      FUN_140127aa0(plVar25,&stack0x00000db0 + lVar17,sVar26);
    }
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150985;
    fclose(pFVar24);
    plVar3 = (longlong *)(&stack0x000003e0 + lVar17);
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150998;
    FUN_140070c30(plVar3,plVar25,sVar26,(ulonglong)pFVar31);
    plVar4 = (longlong *)(&stack0x000002e0 + lVar17);
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401509b2;
    FUN_140002030(plVar4,"backend");
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401509da;
    puVar27 = (undefined1 *)
              FUN_140002620((longlong)(&stack0x00000428 + lVar17),
                            *(void **)(&stack0x000002e0 + lVar17),
                            *(ulonglong *)(&stack0x000002e8 + lVar17));
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401509e5;
    FUN_1401250d0(plVar4);
    if (puVar27 == &stack0x00000430 + lVar17) {
      *(undefined1 **)(&stack0x00000038 + lVar17) = &stack0x00000170 + lVar17;
    }
    else {
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151ba6;
      FUN_140002030(plVar4,"backend");
      *(undefined1 **)(&stack0x00000038 + lVar17) = &stack0x00000170 + lVar17;
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151bbe;
      piVar34 = (int *)FUN_140097690((longlong)plVar3,plVar4);
      *(undefined1 **)(&stack0x00000038 + lVar17) = &stack0x00000170 + lVar17;
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151bd3;
      piVar34 = FUN_140097630(piVar34);
      *(undefined1 **)(&stack0x00000038 + lVar17) = &stack0x00000170 + lVar17;
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151be8;
      FUN_140127b30((undefined8 *)(&stack0x00000170 + lVar17),(undefined8 *)piVar34);
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151bf0;
      FUN_1401250d0(plVar4);
    }
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150a0d;
    FUN_140002030(plVar4,"threads");
    uVar22 = 0xffffffff;
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150a29;
    puVar27 = (undefined1 *)
              FUN_140002620((longlong)(&stack0x00000428 + lVar17),
                            *(void **)(&stack0x000002e0 + lVar17),
                            *(ulonglong *)(&stack0x000002e8 + lVar17));
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150a34;
    FUN_1401250d0(plVar4);
    if (puVar27 != &stack0x00000430 + lVar17) {
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152143;
      FUN_140002030(plVar4,"threads");
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015214e;
      piVar34 = (int *)FUN_140097690((longlong)plVar3,plVar4);
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152156;
      uVar22 = FUN_1400975b0(piVar34);
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152161;
      FUN_1401250d0(plVar4);
    }
    pcVar40 = "(unset)";
    if (*(longlong *)(&stack0x00000178 + lVar17) != 0) {
      pcVar40 = *(char **)(&stack0x00000170 + lVar17);
    }
    ppuVar49 = *(undefined ***)(&stack0x000001c0 + lVar17);
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150a6e;
    pFVar24 = (FILE *)(**(code **)(&stack0x00000040 + lVar17))(2);
    *(uint *)(&stack0xffffffffffffffe0 + lVar17) = uVar22;
    pcVar36 = "[pluto_infer] config %s: backend=%s threads=%d\n";
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150a88;
    FUN_14005c3e0(pFVar24,(byte *)"[pluto_infer] config %s: backend=%s threads=%d\n",
                  (ulonglong)ppuVar49,pcVar40);
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150a90;
    FUN_140092aa0((longlong)plVar3);
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150a98;
    FUN_1401250d0(plVar25);
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150aa0;
    FUN_1401250d0((undefined8 *)pauVar2);
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150aad;
    FUN_1401250d0(*(undefined8 **)(&stack0x00000078 + lVar17));
    if (*(longlong *)(&stack0x00000118 + lVar17) == 0) {
LAB_1401520ae:
      pcVar36 = *(char **)(&stack0x00000038 + lVar17);
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401520bd;
      FUN_140127b30(*(undefined8 **)(&stack0x00000028 + lVar17),(undefined8 *)pcVar36);
    }
    if ((0 < *(int *)(&stack0x00000030 + lVar17)) || ((int)uVar22 < 1)) goto LAB_140150ac8;
  }
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150ad7;
  FUN_1401250d0(*(undefined8 **)(&stack0x00000038 + lVar17));
  if (*(longlong *)(&stack0x00000118 + lVar17) == 0) {
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152054;
    pcVar32 = getenv("BWRL_INT8");
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152063;
    pcVar33 = getenv("BWRL_INT8_MATVEC");
    if ((((pcVar32 == (char *)0x0) || (pcVar36 = "pk", *pcVar32 != '0')) &&
        (pcVar36 = "int8mv", pcVar33 != (char *)0x0)) &&
       (ppuVar49 = (undefined **)&DAT_14015873d, *pcVar33 == '0')) {
      pcVar36 = "int8";
    }
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152098;
    FUN_140001bb0(*(ulonglong **)(&stack0x00000028 + lVar17),pcVar36);
  }
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150af0;
  uVar28 = FUN_140001580(*(undefined8 **)(&stack0x00000028 + lVar17));
  if ((*(longlong *)(&stack0x00000118 + lVar17) == 2) &&
     (**(short **)(&stack0x00000110 + lVar17) == 0x6b70)) {
    uVar42 = 1;
    if ((char)uVar28 == '\0') {
LAB_140150b19:
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150b23;
      uVar28 = FUN_140001550(*(undefined8 **)(&stack0x00000028 + lVar17));
      uVar42 = (uint)uVar28 & 0xff;
    }
  }
  else {
    if ((char)uVar28 == '\0') {
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150b11;
      uVar28 = FUN_140001550(*(undefined8 **)(&stack0x00000028 + lVar17));
      if ((char)uVar28 == '\0') {
        uVar23 = *(ulonglong *)(&stack0x00000110 + lVar17);
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401521d8;
        pFVar24 = (FILE *)(**(code **)(&stack0x00000040 + lVar17))(2);
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401521ea;
        FUN_14005c3e0(pFVar24,(byte *)"[pluto_infer] unknown backend \'%s\' (pk|int8|int8mv)\n",
                      uVar23,pcVar40);
        goto LAB_140150655;
      }
      goto LAB_140150b19;
    }
    uVar42 = 1;
  }
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150b2b;
  FUN_140092d10(uVar42);
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150b35;
  uVar28 = FUN_140001550(*(undefined8 **)(&stack0x00000028 + lVar17));
  DAT_140157410 = (uint)uVar28 & 0xff;
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150b48;
  uVar23 = FUN_140080770(uVar22,pcVar36,ppuVar49);
  *(undefined8 *)(&stack0x00000e78 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000ea0 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000ec0 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000f00 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000f58 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000f78 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000fb8 + lVar17) = 0;
  (&stack0x00000db0)[lVar17] = 0;
  (&stack0x00000ea8)[lVar17] = 0;
  (&stack0x00000ec8)[lVar17] = 0;
  (&stack0x00000f60)[lVar17] = 0;
  (&stack0x00000f80)[lVar17] = 0;
  *(undefined8 *)(&stack0x00000db8 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000dc0 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000dc8 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000dd0 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000dd8 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000de0 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000de8 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000df0 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000df8 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000e00 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000e08 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000e10 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000e18 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000e20 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000e28 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000e30 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000e38 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000e40 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000e48 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000e50 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000e58 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000e60 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000e68 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000e70 + lVar17) = 0;
  *(undefined1 (*) [16])(&stack0x00000e80 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x00000e90 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x00000eb0 + lVar17) = (undefined1  [16])0x0;
  *(undefined8 *)(&stack0x00000ed0 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000ed8 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000ee0 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000ee8 + lVar17) = 0;
  *(undefined1 (*) [16])(&stack0x00000ef0 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x00000f08 + lVar17) = (undefined1  [16])0x0;
  *(undefined8 *)(&stack0x00000f18 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000f20 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000f28 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000f30 + lVar17) = 0;
  *(undefined1 (*) [16])(&stack0x00000f38 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x00000f48 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x00000f68 + lVar17) = (undefined1  [16])0x0;
  *(undefined8 *)(&stack0x00000f88 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000f90 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000f98 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000fa0 + lVar17) = 0;
  *(undefined1 (*) [16])(&stack0x00000fa8 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x00000fc0 + lVar17) = (undefined1  [16])0x0;
  *(undefined8 *)(&stack0x00000fd0 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000fd8 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000fe0 + lVar17) = 0;
  *(undefined8 *)(&stack0x00000fe8 + lVar17) = 0;
  *(undefined1 (*) [16])(&stack0x00000ff0 + lVar17) = (undefined1  [16])0x0;
  *(undefined8 *)(&stack0x000010e8 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001180 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001188 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001010 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001030 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001070 + lVar17) = 0;
  *(undefined8 *)(&stack0x000010c8 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001128 + lVar17) = 0;
  *(undefined1 **)(&stack0x000011b8 + lVar17) = &stack0x000011c8 + lVar17;
  (&stack0x00001018)[lVar17] = 0;
  (&stack0x00001038)[lVar17] = 0;
  (&stack0x000010d0)[lVar17] = 0;
  (&stack0x000010f0)[lVar17] = 0;
  *(undefined4 *)(&stack0x00001190 + lVar17) = 0x1010100;
  *(undefined2 *)(&stack0x00001194 + lVar17) = 0;
  (&stack0x00001196)[lVar17] = 0;
  *(undefined1 (*) [16])(&stack0x00001000 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x00001020 + lVar17) = (undefined1  [16])0x0;
  *(undefined8 *)(&stack0x00001040 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001048 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001050 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001058 + lVar17) = 0;
  *(undefined1 (*) [16])(&stack0x00001060 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x00001078 + lVar17) = (undefined1  [16])0x0;
  *(undefined8 *)(&stack0x00001088 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001090 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001098 + lVar17) = 0;
  *(undefined8 *)(&stack0x000010a0 + lVar17) = 0;
  *(undefined1 (*) [16])(&stack0x000010a8 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x000010b8 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x000010d8 + lVar17) = (undefined1  [16])0x0;
  *(undefined8 *)(&stack0x000010f8 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001100 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001108 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001110 + lVar17) = 0;
  *(undefined1 (*) [16])(&stack0x00001118 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x00001130 + lVar17) = (undefined1  [16])0x0;
  *(undefined8 *)(&stack0x00001140 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001148 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001150 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001158 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001160 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001168 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001170 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001178 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001198 + lVar17) = 6;
  *(undefined8 *)(&stack0x000011a0 + lVar17) = 0;
  *(undefined8 *)(&stack0x000011a8 + lVar17) = 0;
  *(undefined8 *)(&stack0x000011b0 + lVar17) = 0xffffffffffffffff;
  *(undefined8 *)(&stack0x000011c0 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001328 + lVar17) = 0;
  pauVar5 = (undefined1 (*) [32])(&stack0x00000db0 + lVar17);
  *(undefined4 *)(&stack0x00001380 + lVar17) = 0;
  uVar44 = 0x99e7c49045ce02e4;
  *(undefined4 *)(&stack0x000011e0 + lVar17) = 0;
  lVar41 = 2;
  (&stack0x000011c8)[lVar17] = 0;
  *(undefined8 *)(&stack0x000011e8 + lVar17) = 0;
  *(undefined1 **)(&stack0x000011f0 + lVar17) = &stack0x000011e0 + lVar17;
  *(undefined1 **)(&stack0x000011f8 + lVar17) = &stack0x000011e0 + lVar17;
  *(undefined8 *)(&stack0x00001200 + lVar17) = 0;
  *(undefined2 *)(&stack0x00001208 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001250 + lVar17) = 0;
  (&stack0x00001258)[lVar17] = 0;
  *(undefined8 *)(&stack0x00001270 + lVar17) = 0;
  (&stack0x00001278)[lVar17] = 0;
  *(undefined8 *)(&stack0x000012b0 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001308 + lVar17) = 0;
  (&stack0x00001310)[lVar17] = 0;
  (&stack0x00001330)[lVar17] = 0;
  *(undefined8 *)(&stack0x00001368 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001210 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001218 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001220 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001228 + lVar17) = 0;
  *(undefined1 (*) [16])(&stack0x00001230 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x00001240 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x00001260 + lVar17) = (undefined1  [16])0x0;
  *(undefined8 *)(&stack0x00001280 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001288 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001290 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001298 + lVar17) = 0;
  *(undefined1 (*) [16])(&stack0x000012a0 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x000012b8 + lVar17) = (undefined1  [16])0x0;
  *(undefined8 *)(&stack0x000012c8 + lVar17) = 0;
  *(undefined8 *)(&stack0x000012d0 + lVar17) = 0;
  *(undefined8 *)(&stack0x000012d8 + lVar17) = 0;
  *(undefined8 *)(&stack0x000012e0 + lVar17) = 0;
  *(undefined1 (*) [16])(&stack0x000012e8 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x000012f8 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x00001318 + lVar17) = (undefined1  [16])0x0;
  *(undefined8 *)(&stack0x00001338 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001340 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001348 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001350 + lVar17) = 0;
  *(undefined1 (*) [16])(&stack0x00001358 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x00001370 + lVar17) = (undefined1  [16])0x0;
  *(undefined8 *)(&stack0x00001388 + lVar17) = 0x504c55544f;
  *(undefined8 *)(&stack0x00001390 + lVar17) = 0x99e7c49045ce02e4;
  do {
    uVar44 = (uVar44 >> 0x3e ^ uVar44) * 0x5851f42d4c957f2d + lVar41;
    *(ulonglong *)(&stack0x00001388 + lVar41 * 8 + lVar17) = uVar44;
    uVar44 = (uVar44 >> 0x3e ^ uVar44) * 0x5851f42d4c957f2d + lVar41 + 1;
    *(ulonglong *)(&stack0x00001388 + (lVar41 + 1) * 8 + lVar17) = uVar44;
    uVar44 = (uVar44 >> 0x3e ^ uVar44) * 0x5851f42d4c957f2d + lVar41 + 2;
    *(ulonglong *)(&stack0x00001388 + (lVar41 + 2) * 8 + lVar17) = uVar44;
    uVar44 = (uVar44 >> 0x3e ^ uVar44) * 0x5851f42d4c957f2d + lVar41 + 3;
    *(ulonglong *)(&stack0x00001388 + (lVar41 + 3) * 8 + lVar17) = uVar44;
    lVar37 = lVar41 + 8;
    uVar44 = (uVar44 >> 0x3e ^ uVar44) * 0x5851f42d4c957f2d + lVar41 + 4;
    *(ulonglong *)(&stack0x00001388 + (lVar41 + 4) * 8 + lVar17) = uVar44;
    lVar29 = lVar41 + 9;
    uVar44 = (uVar44 >> 0x3e ^ uVar44) * 0x5851f42d4c957f2d + lVar41 + 5;
    *(ulonglong *)(&stack0x00001388 + (lVar41 + 5) * 8 + lVar17) = uVar44;
    uVar44 = (uVar44 >> 0x3e ^ uVar44) * 0x5851f42d4c957f2d + lVar41 + 6;
    *(ulonglong *)(&stack0x00001388 + (lVar41 + 6) * 8 + lVar17) = uVar44;
    uVar44 = (uVar44 >> 0x3e ^ uVar44) * 0x5851f42d4c957f2d + lVar41 + 7;
    *(ulonglong *)(&stack0x00001388 + (lVar41 + 7) * 8 + lVar17) = uVar44;
    lVar41 = lVar41 + 10;
    uVar44 = (uVar44 >> 0x3e ^ uVar44) * 0x5851f42d4c957f2d + lVar37;
    *(ulonglong *)(&stack0x00001388 + lVar37 * 8 + lVar17) = uVar44;
    uVar44 = (uVar44 >> 0x3e ^ uVar44) * 0x5851f42d4c957f2d + lVar29;
    *(ulonglong *)(&stack0x00001388 + lVar29 * 8 + lVar17) = uVar44;
  } while (lVar41 != 0x138);
  *(undefined8 *)(&stack0x00001d98 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001db8 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001df8 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001e50 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001e70 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001eb0 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001f08 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001d48 + lVar17) = 0x138;
  (&stack0x00001d50)[lVar17] = 0;
  (&stack0x00001da0)[lVar17] = 0;
  (&stack0x00001dc0)[lVar17] = 0;
  (&stack0x00001e58)[lVar17] = 0;
  (&stack0x00001e78)[lVar17] = 0;
  (&stack0x00001f10)[lVar17] = 0;
  *(undefined8 *)(&stack0x00001d58 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001d60 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001d68 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001d70 + lVar17) = 0;
  *(undefined1 (*) [16])(&stack0x00001d78 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x00001d88 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x00001da8 + lVar17) = (undefined1  [16])0x0;
  *(undefined8 *)(&stack0x00001dc8 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001dd0 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001dd8 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001de0 + lVar17) = 0;
  *(undefined1 (*) [16])(&stack0x00001de8 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x00001e00 + lVar17) = (undefined1  [16])0x0;
  *(undefined8 *)(&stack0x00001e10 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001e18 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001e20 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001e28 + lVar17) = 0;
  *(undefined1 (*) [16])(&stack0x00001e30 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x00001e40 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x00001e60 + lVar17) = (undefined1  [16])0x0;
  *(undefined8 *)(&stack0x00001e80 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001e88 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001e90 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001e98 + lVar17) = 0;
  *(undefined1 (*) [16])(&stack0x00001ea0 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x00001eb8 + lVar17) = (undefined1  [16])0x0;
  *(undefined8 *)(&stack0x00001ec8 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001ed0 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001ed8 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001ee0 + lVar17) = 0;
  *(undefined1 (*) [16])(&stack0x00001ee8 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x00001ef8 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x00001f18 + lVar17) = (undefined1  [16])0x0;
  *(undefined8 *)(&stack0x00001f28 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001f68 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001fc8 + lVar17) = 0;
  (&stack0x00001f30)[lVar17] = 0;
  *(undefined2 *)(&stack0x00001f80 + lVar17) = 0;
  (&stack0x00001fd0)[lVar17] = 0;
  *(undefined8 *)(&stack0x00001fe8 + lVar17) = 0;
  (&stack0x00001ff0)[lVar17] = 0;
  *(undefined8 *)(&stack0x00002028 + lVar17) = 0;
  *(undefined8 *)(&stack0x00002080 + lVar17) = 0;
  (&stack0x00002088)[lVar17] = 0;
  *(undefined8 *)(&stack0x000020a0 + lVar17) = 0;
  (&stack0x000020a8)[lVar17] = 0;
  *(undefined8 *)(&stack0x000020e0 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001f38 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001f40 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001f48 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001f50 + lVar17) = 0;
  *(undefined1 (*) [16])(&stack0x00001f58 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x00001f70 + lVar17) = (undefined1  [16])0x0;
  *(undefined8 *)(&stack0x00001f88 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001f90 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001f98 + lVar17) = 0;
  *(undefined8 *)(&stack0x00001fa0 + lVar17) = 0;
  *(undefined1 (*) [16])(&stack0x00001fa8 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x00001fb8 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x00001fd8 + lVar17) = (undefined1  [16])0x0;
  *(undefined8 *)(&stack0x00001ff8 + lVar17) = 0;
  *(undefined8 *)(&stack0x00002000 + lVar17) = 0;
  *(undefined8 *)(&stack0x00002008 + lVar17) = 0;
  *(undefined8 *)(&stack0x00002010 + lVar17) = 0;
  *(undefined1 (*) [16])(&stack0x00002018 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x00002030 + lVar17) = (undefined1  [16])0x0;
  *(undefined8 *)(&stack0x00002040 + lVar17) = 0;
  *(undefined8 *)(&stack0x00002048 + lVar17) = 0;
  *(undefined8 *)(&stack0x00002050 + lVar17) = 0;
  *(undefined8 *)(&stack0x00002058 + lVar17) = 0;
  *(undefined1 (*) [16])(&stack0x00002060 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x00002070 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x00002090 + lVar17) = (undefined1  [16])0x0;
  *(undefined8 *)(&stack0x000020b0 + lVar17) = 0;
  *(undefined8 *)(&stack0x000020b8 + lVar17) = 0;
  *(undefined8 *)(&stack0x000020c0 + lVar17) = 0;
  *(undefined8 *)(&stack0x000020c8 + lVar17) = 0;
  *(undefined1 (*) [16])(&stack0x000020d0 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x000020e8 + lVar17) = (undefined1  [16])0x0;
  *(undefined8 *)(&stack0x000020f8 + lVar17) = 0;
  *(undefined8 *)(&stack0x00002100 + lVar17) = 0;
  *(undefined8 *)(&stack0x00002108 + lVar17) = 0;
  *(undefined8 *)(&stack0x00002110 + lVar17) = 0;
  *(undefined1 (*) [16])(&stack0x00002118 + lVar17) = (undefined1  [16])0x0;
  *(undefined8 *)(&stack0x00002128 + lVar17) = 0;
  *(undefined8 *)(&stack0x00002170 + lVar17) = 0;
  puVar35 = *(undefined8 **)((longlong)auStackX_8 + lVar17 + 0x18);
  *(undefined8 *)(&stack0x000021a0 + lVar17) = 0;
  *(undefined8 *)(&stack0x00002140 + lVar17) = 0;
  *(undefined8 *)(&stack0x00002158 + lVar17) = 0;
  *(undefined8 *)(&stack0x00002188 + lVar17) = 0;
  *(undefined8 *)(&stack0x000021b8 + lVar17) = 0;
  *(undefined1 (*) [16])(&stack0x00002130 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x00002148 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x00002160 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x00002178 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x00002190 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x000021a8 + lVar17) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(&stack0x000021c0 + lVar17) = (undefined1  [16])0x0;
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151350;
  FUN_1400347f0(pauVar5,puVar35);
  if ((&stack0x00000058)[lVar17] == '\0') {
    plVar25 = (longlong *)(&stack0x000002e0 + lVar17);
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401520fd;
    FUN_140002030(plVar25,"default");
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152110;
    FUN_14010f870((undefined8 *)(&stack0x000003e0 + lVar17),plVar25);
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152118;
    FUN_1401250d0(plVar25);
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152120;
    uVar44 = FUN_14010fa70((undefined8 *)(&stack0x000003e0 + lVar17));
    *(ulonglong *)(&stack0x00000048 + lVar17) = uVar44 & 0xffffffff;
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152133;
    FUN_14010f7e0();
  }
  uVar44 = *(ulonglong *)(&stack0x00000048 + lVar17);
  lVar41 = 2;
  *(ulonglong *)(&stack0x00001388 + lVar17) = uVar44;
  uVar44 = (uVar44 >> 0x3e ^ uVar44) * 0x5851f42d4c957f2d + 1;
  *(ulonglong *)(&stack0x00001390 + lVar17) = uVar44;
  do {
    uVar44 = (uVar44 >> 0x3e ^ uVar44) * 0x5851f42d4c957f2d + lVar41;
    *(ulonglong *)(&stack0x00001388 + lVar41 * 8 + lVar17) = uVar44;
    uVar44 = (uVar44 >> 0x3e ^ uVar44) * 0x5851f42d4c957f2d + lVar41 + 1;
    *(ulonglong *)(&stack0x00001388 + (lVar41 + 1) * 8 + lVar17) = uVar44;
    uVar44 = (uVar44 >> 0x3e ^ uVar44) * 0x5851f42d4c957f2d + lVar41 + 2;
    *(ulonglong *)(&stack0x00001388 + (lVar41 + 2) * 8 + lVar17) = uVar44;
    uVar44 = (uVar44 >> 0x3e ^ uVar44) * 0x5851f42d4c957f2d + lVar41 + 3;
    *(ulonglong *)(&stack0x00001388 + (lVar41 + 3) * 8 + lVar17) = uVar44;
    lVar37 = lVar41 + 8;
    uVar44 = (uVar44 >> 0x3e ^ uVar44) * 0x5851f42d4c957f2d + lVar41 + 4;
    *(ulonglong *)(&stack0x00001388 + (lVar41 + 4) * 8 + lVar17) = uVar44;
    lVar29 = lVar41 + 9;
    uVar44 = (uVar44 >> 0x3e ^ uVar44) * 0x5851f42d4c957f2d + lVar41 + 5;
    *(ulonglong *)(&stack0x00001388 + (lVar41 + 5) * 8 + lVar17) = uVar44;
    uVar44 = (uVar44 >> 0x3e ^ uVar44) * 0x5851f42d4c957f2d + lVar41 + 6;
    *(ulonglong *)(&stack0x00001388 + (lVar41 + 6) * 8 + lVar17) = uVar44;
    uVar44 = (uVar44 >> 0x3e ^ uVar44) * 0x5851f42d4c957f2d + lVar41 + 7;
    *(ulonglong *)(&stack0x00001388 + (lVar41 + 7) * 8 + lVar17) = uVar44;
    lVar41 = lVar41 + 10;
    uVar44 = (uVar44 >> 0x3e ^ uVar44) * 0x5851f42d4c957f2d + lVar37;
    *(ulonglong *)(&stack0x00001388 + lVar37 * 8 + lVar17) = uVar44;
    uVar44 = (uVar44 >> 0x3e ^ uVar44) * 0x5851f42d4c957f2d + lVar29;
    *(ulonglong *)(&stack0x00001388 + lVar29 * 8 + lVar17) = uVar44;
  } while (lVar41 != 0x138);
  *(undefined8 *)(&stack0x00001d48 + lVar17) = 0x138;
  (&stack0x00000db0)[lVar17] = (&stack0x00000050)[lVar17];
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401514f4;
  FUN_140010400((longlong)pauVar5);
  uVar22 = *(uint *)(&stack0x000011b4 + lVar17);
  if ((int)uVar22 < 0) {
    uVar22 = *(uint *)(&stack0x000011b0 + lVar17);
  }
  if (*(longlong *)(&stack0x000011c0 + lVar17) == 0) {
    puVar13 = (ulonglong *)(&stack0x000003e0 + lVar17);
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151b65;
    FUN_140131280((longlong *)puVar13,uVar22);
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151b76;
    plVar25 = (longlong *)FUN_140126d10(puVar13,0,"v");
    *(undefined1 **)(&stack0x000000a8 + lVar17) = &stack0x00000150 + lVar17;
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151b8e;
    FUN_140127e50((longlong *)(&stack0x00000150 + lVar17),plVar25);
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151b96;
    FUN_1401250d0(puVar13);
  }
  else {
    *(undefined1 **)(&stack0x000000a8 + lVar17) = &stack0x00000150 + lVar17;
    *(undefined1 **)(&stack0x00000150 + lVar17) = &stack0x00000160 + lVar17;
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151547;
    FUN_140001d20((longlong *)(&stack0x00000150 + lVar17),
                  *(undefined1 **)(&stack0x000011b8 + lVar17),
                  (longlong)
                  (*(undefined1 **)(&stack0x000011b8 + lVar17) +
                  *(longlong *)(&stack0x000011c0 + lVar17)));
  }
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151561;
  uVar44 = FUN_1400a65e0(*(longlong **)(&stack0x00000028 + lVar17),&DAT_14015873d,0,4);
  if (uVar44 == 0) {
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401520ca;
    bVar19 = FUN_140092d10(-1);
    if (bVar19) goto LAB_14015156a;
    *(char **)(&stack0x00000058 + lVar17) = " (no packed-GEMM path on this build; native GEMMs)";
  }
  else {
LAB_14015156a:
    *(undefined1 **)(&stack0x00000058 + lVar17) = &DAT_1401582a8;
  }
  pcVar40 = ", argmax";
  if ((&stack0x00000050)[lVar17] == '\0') {
    pcVar40 = "";
  }
  iVar39 = (int)uVar23;
  puVar27 = &DAT_14015872e;
  *(undefined4 *)(&stack0x00000030 + lVar17) = *(undefined4 *)(&stack0x00001160 + lVar17);
  uVar7 = *(undefined4 *)(&stack0x00001198 + lVar17);
  *(undefined4 *)(&stack0x00000050 + lVar17) = *(undefined4 *)(&stack0x000011b0 + lVar17);
  uVar28 = *(undefined8 *)(&stack0x00000150 + lVar17);
  if (iVar39 == 1) {
    puVar27 = &DAT_1401582a8;
  }
  *(undefined8 *)(&stack0x000000a0 + lVar17) = *(undefined8 *)(&stack0x00000110 + lVar17);
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401515eb;
  pFVar24 = (FILE *)(**(code **)(&stack0x00000040 + lVar17))(2);
  *(char **)((longlong)auStackX_8 + lVar17 + 0x10) = pcVar40;
  uVar15 = *(undefined8 *)(&stack0x00000048 + lVar17);
  pcVar40 = 
  "[pluto_infer] ready: cpu backend %s%s, %d thread%s, model %s (step %ld), frames_per_step %d, max_units %d, seed 0x%llx%s\n"
  ;
  uVar8 = *(undefined4 *)(&stack0x00000030 + lVar17);
  uVar9 = *(undefined4 *)(&stack0x00000050 + lVar17);
  *(undefined4 *)((longlong)auStackX_8 + lVar17 + -8) = uVar7;
  *(undefined8 *)((longlong)auStackX_8 + lVar17 + 8) = uVar15;
  *(undefined4 *)((longlong)auStackX_8 + lVar17) = uVar8;
  uVar23 = *(ulonglong *)(&stack0x000000a0 + lVar17);
  *(undefined4 *)(&stack0xfffffffffffffff8 + lVar17) = uVar9;
  *(undefined8 *)(&stack0xfffffffffffffff0 + lVar17) = uVar28;
  *(undefined1 **)(&stack0xffffffffffffffe8 + lVar17) = puVar27;
  *(int *)(&stack0xffffffffffffffe0 + lVar17) = iVar39;
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151645;
  FUN_14005c3e0(pFVar24,(byte *)
                        "[pluto_infer] ready: cpu backend %s%s, %d thread%s, model %s (step %ld), frames_per_step %d, max_units %d, seed 0x%llx%s\n"
                ,uVar23,*(undefined8 *)(&stack0x00000058 + lVar17));
  uVar42 = *(uint *)(&stack0x00000080 + lVar17);
  if (0 < (int)uVar42) {
    pauVar38 = (undefined1 (*) [32])(&stack0x000003e0 + lVar17);
    *(undefined8 *)(&stack0x000003e0 + lVar17) = 0x3039;
    if ((int)*(uint *)(&stack0x00001160 + lVar17) < (int)uVar42) {
      uVar42 = *(uint *)(&stack0x00001160 + lVar17);
    }
    pauVar50 = (undefined1 (*) [32])(ulonglong)uVar42;
    uVar23 = 0x807dc721521c106;
    *(undefined8 *)(&stack0x000003e8 + lVar17) = 0x807dc721521c106;
    lVar41 = 2;
    do {
      uVar23 = (uVar23 >> 0x3e ^ uVar23) * 0x5851f42d4c957f2d + lVar41;
      *(ulonglong *)(*pauVar38 + lVar41 * 8) = uVar23;
      uVar23 = (uVar23 >> 0x3e ^ uVar23) * 0x5851f42d4c957f2d + lVar41 + 1;
      *(ulonglong *)(*pauVar38 + lVar41 * 8 + 8) = uVar23;
      uVar23 = (uVar23 >> 0x3e ^ uVar23) * 0x5851f42d4c957f2d + lVar41 + 2;
      *(ulonglong *)(*pauVar38 + lVar41 * 8 + 0x10) = uVar23;
      uVar23 = (uVar23 >> 0x3e ^ uVar23) * 0x5851f42d4c957f2d + lVar41 + 3;
      *(ulonglong *)(*pauVar38 + lVar41 * 8 + 0x18) = uVar23;
      uVar23 = (uVar23 >> 0x3e ^ uVar23) * 0x5851f42d4c957f2d + lVar41 + 4;
      *(ulonglong *)(pauVar38[1] + lVar41 * 8) = uVar23;
      uVar23 = (uVar23 >> 0x3e ^ uVar23) * 0x5851f42d4c957f2d + lVar41 + 5;
      *(ulonglong *)(pauVar38[1] + lVar41 * 8 + 8) = uVar23;
      uVar23 = (uVar23 >> 0x3e ^ uVar23) * 0x5851f42d4c957f2d + lVar41 + 6;
      *(ulonglong *)(pauVar38[1] + lVar41 * 8 + 0x10) = uVar23;
      uVar23 = (uVar23 >> 0x3e ^ uVar23) * 0x5851f42d4c957f2d + lVar41 + 7;
      *(ulonglong *)(pauVar38[1] + lVar41 * 8 + 0x18) = uVar23;
      lVar37 = lVar41 + 10;
      uVar23 = (uVar23 >> 0x3e ^ uVar23) * 0x5851f42d4c957f2d + lVar41 + 8;
      *(ulonglong *)(pauVar38[2] + lVar41 * 8) = uVar23;
      uVar23 = (uVar23 >> 0x3e ^ uVar23) * 0x5851f42d4c957f2d + lVar41 + 9;
      *(ulonglong *)(pauVar38[2] + lVar41 * 8 + 8) = uVar23;
      lVar41 = lVar37;
    } while (lVar37 != 0x138);
    pauVar6 = (undefined1 (*) [32])(&stack0x000002e0 + lVar17);
    *(undefined8 *)(&stack0x00000da0 + lVar17) = 0x138;
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401517ce;
    FUN_1400775c0((int *)pauVar6,(longlong)(&stack0x00001140 + lVar17),pauVar38,uVar42);
    uVar23 = -(ulonglong)((&stack0x0000008c)[lVar17] == '\0');
    pauVar47 = (undefined1 (*) [32])(uVar23 | 1);
    *(undefined8 *)(&stack0x000001c8 + lVar17) = 0;
    *(undefined1 (**) [32])(&stack0x000001d8 + lVar17) = pauVar47;
    *(ulonglong *)(&stack0x000001d0 + lVar17) = (ulonglong)((uint)uVar23 & 5000);
    pauVar38 = (undefined1 (*) [32])((uVar23 & 0xfffffffffffffffe) + 7);
    *(undefined1 (**) [32])(&stack0x000001c0 + lVar17) = pauVar38;
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015181b;
    FUN_140010400((longlong)pauVar5);
    iVar39 = 0;
    plVar25 = (longlong *)(&stack0x00000250 + lVar17);
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015182e;
    lVar41 = FUN_14011cce0();
    do {
      do {
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151840;
        FUN_14002b8d0((longlong)pauVar5,pauVar38,pauVar47,pauVar50);
        *(undefined8 *)(&stack0xffffffffffffffe0 + lVar17) = 0;
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015185a;
        pauVar38 = pauVar5;
        pauVar47 = pauVar6;
        pauVar50 = pauVar2;
        FUN_140034f10(plVar25,pauVar5,(longlong)pauVar6,pauVar2);
        puVar35 = *(undefined8 **)(&stack0x000002c0 + lVar17);
        if (puVar35 != (undefined8 *)0x0) {
          pauVar38 = (undefined1 (*) [32])
                     (*(longlong *)(&stack0x000002d0 + lVar17) - (longlong)puVar35);
          *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151877;
          FUN_14003cb20(puVar35);
        }
        puVar35 = *(undefined8 **)(&stack0x000002a8 + lVar17);
        if (puVar35 != (undefined8 *)0x0) {
          pauVar38 = (undefined1 (*) [32])
                     (*(longlong *)(&stack0x000002b8 + lVar17) - (longlong)puVar35);
          *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151894;
          FUN_14003cb20(puVar35);
        }
        iVar39 = iVar39 + 1;
      } while (iVar39 < 10);
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401518a1;
      lVar37 = FUN_14011cce0();
      dVar57 = 1000000000.0;
    } while ((double)(lVar37 - lVar41) / 1000000000.0 < 2.0);
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401518ce;
    FUN_1400773a0(puVar35,pauVar38,(longlong)pauVar47);
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401518d4;
    DVar21 = GetCurrentProcessId();
    uVar23 = (ulonglong)DVar21;
    if (*(longlong *)(&stack0x00000138 + lVar17) != 0) {
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401529bb;
      pFVar24 = fopen(*(char **)(&stack0x00000130 + lVar17),"wb");
      if (pFVar24 == (FILE *)0x0) {
        uVar44 = *(ulonglong *)(&stack0x00000130 + lVar17);
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401529f9;
        pFVar24 = (FILE *)(**(code **)(&stack0x00000040 + lVar17))(2);
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152a0b;
        FUN_14005c3e0(pFVar24,(byte *)"[prof] cannot write ready file %s\n",uVar44,pauVar50);
      }
      else {
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401529d5;
        FUN_14005c3e0(pFVar24,&DAT_140158da2,uVar23,pauVar50);
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401529dd;
        fclose(pFVar24);
      }
    }
    *(int *)(&stack0xffffffffffffffe8 + lVar17) = iVar39;
    pauVar38 = (undefined1 (*) [32])(ulonglong)uVar42;
    pcVar40 = &DAT_140158afb;
    if ((&stack0x0000008c)[lVar17] != '\0') {
      pcVar40 = "rclick";
    }
    *(undefined8 *)(&stack0xffffffffffffffe0 + lVar17) = *(undefined8 *)(&stack0x00000090 + lVar17);
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151925;
    FUN_14005ee80((byte *)"[prof] READY pid=%ld n=%d action=%s gap=%.0fms warm_iters=%d\n",uVar23,
                  pauVar38,pcVar40);
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151934;
    pFVar24 = (FILE *)(**(code **)(&stack0x00000040 + lVar17))(1);
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015193c;
    fflush(pFVar24);
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151941;
    lVar41 = FUN_14011cce0();
    dVar55 = 0.0;
    uVar42 = 0;
    dVar56 = 0.0;
    dVar58 = 1000.0;
    uVar22 = 0;
    dVar53 = 0.0;
    dVar52 = 0.0;
    while( true ) {
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151969;
      lVar37 = FUN_14011cce0();
      if (*(double *)(&stack0x00000098 + lVar17) <= (double)(lVar37 - lVar41) / dVar57) break;
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015198e;
      lVar37 = FUN_14011cce0();
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151999;
      FUN_14002b8d0((longlong)pauVar5,uVar23,pauVar38,(undefined1 (*) [32])pcVar40);
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015199e;
      lVar29 = FUN_14011cce0();
      dVar51 = *(double *)(&stack0x00000090 + lVar17);
      *(longlong *)(&stack0x00000030 + lVar17) = lVar29;
      if (0.0 < dVar51) {
        *(longlong *)(&stack0x00000250 + lVar17) = (longlong)(dVar51 / dVar58);
        *(int *)(&stack0x00000258 + lVar17) =
             (int)(longlong)((-((double)(longlong)(dVar51 / dVar58) * dVar58) + dVar51) * 1000000.0)
        ;
        do {
          *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401519f2;
          uVar28 = thunk_FUN_140069530(plVar25,(ulonglong *)plVar25);
          if ((int)uVar28 != -1) break;
          *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152999;
          piVar34 = _errno();
        } while (*piVar34 == 4);
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151a00;
      lVar29 = FUN_14011cce0();
      *(undefined8 *)(&stack0xffffffffffffffe0 + lVar17) = 0;
      *(longlong *)(&stack0x00000038 + lVar17) = lVar29;
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151a1d;
      pauVar38 = pauVar6;
      FUN_140034f10(plVar25,pauVar5,(longlong)pauVar6,pauVar2);
      uVar42 = uVar42 + 1;
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151a2d;
      FUN_140122990((undefined8 *)(&stack0x000002c0 + lVar17));
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151a3a;
      FUN_140122990((undefined8 *)(&stack0x000002a8 + lVar17));
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151a3f;
      lVar29 = FUN_14011cce0();
      pcVar40 = (char *)0x32;
      uVar23 = (longlong)(int)uVar42 % 0x32 & 0xffffffff;
      dVar53 = ((double)(*(longlong *)(&stack0x00000030 + lVar17) - lVar37) / dVar57) * 1000.0 +
               dVar53;
      dVar52 = ((double)(lVar29 - *(longlong *)(&stack0x00000038 + lVar17)) / dVar57) * 1000.0 +
               dVar52;
      if ((int)((longlong)(int)uVar42 % 0x32) == 0) {
        uVar23 = (ulonglong)uVar42;
        dVar51 = (double)(int)(uVar42 - uVar22);
        *(uint *)(&stack0xffffffffffffffe0 + lVar17) = uVar42 - uVar22;
        pcVar40 = (char *)((dVar53 - dVar55) / dVar51);
        pauVar38 = (undefined1 (*) [32])((dVar52 - dVar56) / dVar51);
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151ac7;
        FUN_14005ee80((byte *)"[prof] iters %ld  crit %.2f ms  pre %.2f ms  (last %ld)\n",uVar23,
                      pauVar38,pcVar40);
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151ad7;
        dVar55 = dVar53;
        dVar56 = dVar52;
        pFVar24 = (FILE *)(**(code **)(&stack0x00000040 + lVar17))(1);
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151adf;
        fflush(pFVar24);
        uVar22 = uVar42;
        dVar53 = dVar55;
        dVar52 = dVar56;
      }
    }
    uVar22 = 1;
    if (0 < (int)uVar42) {
      uVar22 = uVar42;
    }
    dVar53 = dVar53 / (double)(int)uVar22;
    *(double *)(&stack0x00000030 + lVar17) = dVar52 / (double)(int)uVar22;
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015292c;
    lVar37 = FUN_14011cce0();
    uVar28 = *(undefined8 *)(&stack0x00000030 + lVar17);
    uVar23 = (ulonglong)uVar42;
    dVar57 = (double)(lVar37 - lVar41) / dVar57;
    *(double *)(&stack0xffffffffffffffe0 + lVar17) = dVar53;
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152960;
    FUN_14005ee80((byte *)"[prof] done: %ld iters over %.1f s  avg crit %.2f ms  avg pre %.2f ms\n",
                  uVar23,dVar57,uVar28);
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015296c;
    FUN_140092d90(0x140158e97,uVar23,(ulonglong)dVar57,uVar28);
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015297b;
    pFVar24 = (FILE *)(**(code **)(&stack0x00000040 + lVar17))(1);
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152983;
    fflush(pFVar24);
    uVar23 = 0;
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015298e;
    FUN_14008ca20((longlong)pauVar6);
    goto LAB_140152009;
  }
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151bfa;
  FUN_140082c00((ulonglong)uVar42,pcVar40,uVar23);
  uVar42 = *(uint *)(&stack0x00001160 + lVar17);
  if ((int)uVar42 < 0x401) {
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151c1b;
    hFileMappingObject = (HANDLE)FUN_140001480("PLUTO_SHM_SEC");
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151c2a;
    uVar23 = FUN_140001480("PLUTO_SHM_REQ_EV");
    *(ulonglong *)(&stack0x00000050 + lVar17) = uVar23;
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151c41;
    uVar44 = FUN_140001480("PLUTO_SHM_RESP_EV");
    *(ulonglong *)(&stack0x00000090 + lVar17) = uVar44;
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151c58;
    uVar30 = FUN_140001480("PLUTO_SHM_PARENT");
    *(ulonglong *)(&stack0x00000080 + lVar17) = uVar30;
    if (((uVar23 == 0 || hFileMappingObject == (HANDLE)0x0) || uVar44 == 0) || (uVar30 == 0)) {
LAB_140151d2f:
      (&stack0x00000030)[lVar17] = 0;
      lpBaseAddress = (uint *)0x0;
    }
    else {
      uVar28 = 0;
      *(undefined8 *)(&stack0xffffffffffffffe0 + lVar17) = 0;
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151ca6;
      lpBaseAddress =
           MapViewOfFile(hFileMappingObject,0xf001f,0,0,
                         *(SIZE_T *)(&stack0xffffffffffffffe0 + lVar17));
      if (lpBaseAddress == (uint *)0x0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401528b8;
        DVar21 = GetLastError();
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401528ca;
        pFVar24 = (FILE *)(**(code **)(&stack0x00000040 + lVar17))(2);
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401528dc;
        FUN_14005c3e0(pFVar24,(byte *)"[pluto_infer] shm map failed (error %lu); using pipes\n",
                      (ulonglong)DVar21,uVar28);
        goto LAB_140151d2f;
      }
      uVar42 = lpBaseAddress[1];
      uVar10 = *lpBaseAddress;
      uVar11 = lpBaseAddress[2];
      uVar12 = lpBaseAddress[3];
      *(uint *)(&stack0x00000030 + lVar17) = uVar42;
      if ((((uVar10 != 0x4d534c50) || (uVar42 != 3)) || (uVar11 != 0x85f80)) || (uVar12 != 0x400)) {
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151cf6;
        pFVar24 = (FILE *)(**(code **)(&stack0x00000040 + lVar17))(2);
        *(uint *)(&stack0xffffffffffffffe8 + lVar17) = uVar12;
        *(undefined4 *)(&stack0xfffffffffffffff8 + lVar17) = 0x400;
        *(undefined4 *)(&stack0xfffffffffffffff0 + lVar17) = 0x85f80;
        *(uint *)(&stack0xffffffffffffffe0 + lVar17) = uVar11;
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151d26;
        FUN_14005c3e0(pFVar24,(byte *)
                              "[pluto_infer] shm header mismatch (magic 0x%08lx version %lu size %lu mu %lu; built for %lu/%lu); using pipes\n"
                      ,(ulonglong)uVar10,(ulonglong)*(uint *)(&stack0x00000030 + lVar17));
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151d2f;
        UnmapViewOfFile(lpBaseAddress);
        goto LAB_140151d2f;
      }
      lpBaseAddress[4] = 0x4d534c50;
      (&stack0x00000030)[lVar17] = 1;
    }
    pFVar24 = (FILE *)(&stack0x000001d8 + lVar17);
    uVar42 = *(uint *)(&stack0x00001198 + lVar17);
    uVar23 = *(ulonglong *)(&stack0x000011b8 + lVar17);
    uVar28 = 0x30;
    *(undefined8 *)(&stack0x000001c0 + lVar17) = 0x3314f4c50;
    puVar48 = &DAT_140158fef;
    pFVar31 = pFVar24;
    for (lVar41 = 0x1c; lVar41 != 0; lVar41 = lVar41 + -1) {
      *(undefined4 *)&pFVar31->_ptr = 0;
      pFVar31 = (FILE *)((longlong)&pFVar31->_ptr + 4);
    }
    *(longlong *)(&stack0x000001d0 + lVar17) = (longlong)(int)uVar22;
    *(ulonglong *)(&stack0x000001c8 + lVar17) = (ulonglong)uVar42;
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151d9e;
    FUN_14005ef00(pFVar24,0x30,&DAT_140158fef,uVar23);
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151da3;
    cVar18 = FUN_140083cf0(pFVar24,uVar28,(longlong)puVar48);
    pcVar36 = "";
    pcVar40 = " vnni";
    if (cVar18 == '\0') {
      pcVar40 = "";
    }
    cVar18 = **(char **)(&stack0x00000058 + lVar17);
    *(char **)(&stack0xfffffffffffffff8 + lVar17) = "Aug 17 2026";
    if (cVar18 != '\0') {
      pcVar36 = "(fp32)";
    }
    *(int *)(&stack0xffffffffffffffe8 + lVar17) = iVar39;
    *(char **)(&stack0xfffffffffffffff0 + lVar17) = pcVar40;
    pcVar40 = "%s%s %dt%s %s";
    *(char **)(&stack0xffffffffffffffe0 + lVar17) = pcVar36;
    pFVar24 = *(FILE **)(&stack0x00000110 + lVar17);
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151e0a;
    FUN_14005ef00((FILE *)(&stack0x00000208 + lVar17),0x40,(byte *)"%s%s %dt%s %s",
                  (ulonglong)pFVar24);
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151e17;
    uVar28 = FUN_1400014f0(pauVar2,0x88);
    if ((char)uVar28 != '\0') {
      if ((&stack0x00000030)[lVar17] != '\0') {
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151e36;
        pFVar31 = (FILE *)(**(code **)(&stack0x00000040 + lVar17))(2);
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151e45;
        FUN_14005c3e0(pFVar31,(byte *)"[pluto_infer] transport: shared memory + events\n",
                      (ulonglong)pcVar40,pFVar24);
      }
      *(undefined4 *)(&stack0x000003e0 + lVar17) = 0;
      *(undefined8 *)(&stack0x000003e8 + lVar17) = 0;
      *(undefined8 *)(&stack0x000003f0 + lVar17) = 0;
      *(undefined8 *)(&stack0x000003f8 + lVar17) = 0;
      *(undefined8 *)(&stack0x00000400 + lVar17) = 0;
      *(undefined4 *)(&stack0x00000048 + lVar17) = *(undefined4 *)(&stack0x00001160 + lVar17);
      pauVar2 = (undefined1 (*) [32])(&stack0x000003e0 + lVar17);
      *(undefined8 *)(&stack0x00000408 + lVar17) = 0;
      *(undefined8 *)(&stack0x00000410 + lVar17) = 0;
      *(undefined8 *)(&stack0x00000418 + lVar17) = 0;
      *(undefined8 *)(&stack0x00000420 + lVar17) = 0;
      *(undefined8 *)(&stack0x00000428 + lVar17) = 0;
      *(undefined8 *)(&stack0x00000430 + lVar17) = 0;
      *(undefined8 *)(&stack0x00000438 + lVar17) = 0;
      *(undefined8 *)(&stack0x00000440 + lVar17) = 0;
      *(undefined8 *)(&stack0x00000448 + lVar17) = 0;
      *(undefined8 *)(&stack0x00000450 + lVar17) = 0;
      *(undefined8 *)(&stack0x00000458 + lVar17) = 0;
      *(undefined8 *)(&stack0x00000460 + lVar17) = 0;
      *(undefined8 *)(&stack0x00000468 + lVar17) = 0;
      *(undefined8 *)(&stack0x00000470 + lVar17) = 0;
      *(undefined8 *)(&stack0x00000478 + lVar17) = 0;
      *(undefined8 *)(&stack0x00000480 + lVar17) = 0;
      *(undefined8 *)(&stack0x00000488 + lVar17) = 0;
      *(undefined8 *)(&stack0x00000490 + lVar17) = 0;
      *(undefined8 *)(&stack0x00000498 + lVar17) = 0;
      *(undefined8 *)(&stack0x000004a0 + lVar17) = 0;
      *(undefined8 *)(&stack0x000004a8 + lVar17) = 0;
      *(undefined8 *)(&stack0x000004b0 + lVar17) = 0;
      *(undefined8 *)(&stack0x000004b8 + lVar17) = 0;
      *(undefined8 *)(&stack0x000004c0 + lVar17) = 0;
      *(undefined1 (*) [16])(&stack0x000004c8 + lVar17) = (undefined1  [16])0x0;
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151ecf;
      FUN_140122c60((longlong *)(&stack0x00000448 + lVar17),0x14);
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151ee1;
      FUN_140122c60((longlong *)(&stack0x00000460 + lVar17),0xe9);
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151ef3;
      FUN_1401227f0((undefined8 *)(&stack0x00000478 + lVar17),0x124);
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151f05;
      FUN_140123660((undefined8 *)(&stack0x00000490 + lVar17),0x4000);
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151f17;
      FUN_140122c60((longlong *)(&stack0x000004a8 + lVar17),0x4000);
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151f29;
      FUN_140123f30((undefined8 *)(&stack0x000004c0 + lVar17),4);
      uVar22 = 0;
      pauVar38 = (undefined1 (*) [32])0x0;
      do {
        cVar18 = (&stack0x00000030)[lVar17];
        puVar45 = *(undefined4 **)(&stack0x00000078 + lVar17);
        for (lVar41 = 0xc; lVar41 != 0; lVar41 = lVar41 + -1) {
          *puVar45 = 0;
          puVar45 = puVar45 + 1;
        }
        iVar39 = (int)pauVar38;
        if (cVar18 == '\0') {
          *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401521fb;
          pFVar24 = (FILE *)(**(code **)(&stack0x00000040 + lVar17))(0);
          *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152216;
          sVar26 = fread(*(void **)(&stack0x00000078 + lVar17),1,0x30,pFVar24);
          if (sVar26 != 0x30) {
LAB_140151fdc:
            *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151fec;
            pFVar31 = (FILE *)(**(code **)(&stack0x00000040 + lVar17))(2);
            *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151ffe;
            FUN_14005c3e0(pFVar31,(byte *)"[pluto_infer] shutdown after %ld steps; exiting\n",
                          (ulonglong)pauVar38,pFVar24);
            uVar23 = 0;
            goto LAB_140152001;
          }
        }
        else {
          while( true ) {
            if (lpBaseAddress[5] != 0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015289e;
              pFVar31 = (FILE *)(**(code **)(&stack0x00000040 + lVar17))(2);
              *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401528ad;
              FUN_14005c3e0(pFVar31,(byte *)"[pluto_infer] quit flag set\n",(ulonglong)pcVar40,
                            pFVar24);
              goto LAB_140151fdc;
            }
            pFVar24 = (FILE *)(ulonglong)lpBaseAddress[0x10];
            if (uVar22 != lpBaseAddress[0x10]) break;
            pFVar24 = (FILE *)0xffffffff;
            *(undefined8 *)(&stack0x000002e0 + lVar17) = *(undefined8 *)(&stack0x00000050 + lVar17);
            pcVar40 = (char *)0x0;
            *(undefined8 *)(&stack0x000002e8 + lVar17) = *(undefined8 *)(&stack0x00000080 + lVar17);
            *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151fa1;
            DVar21 = WaitForMultipleObjects(2,(HANDLE *)(&stack0x000002e0 + lVar17),0,0xffffffff);
            if (DVar21 != 0) {
              pcVar40 = "shm wait failed";
              if (DVar21 == 1) {
                pcVar40 = "parent process exited";
              }
              *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151fca;
              pFVar31 = (FILE *)(**(code **)(&stack0x00000040 + lVar17))(2);
              *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140151fdc;
              FUN_14005c3e0(pFVar31,(byte *)"[pluto_infer] %s\n",(ulonglong)pcVar40,pFVar24);
              goto LAB_140151fdc;
            }
          }
          uVar22 = lpBaseAddress[0x10];
          puVar43 = lpBaseAddress + 0x30;
          puVar46 = *(uint **)(&stack0x00000078 + lVar17);
          for (lVar41 = 0xc; lVar41 != 0; lVar41 = lVar41 + -1) {
            *puVar46 = *puVar43;
            puVar43 = puVar43 + 1;
            puVar46 = puVar46 + 1;
          }
        }
        uVar42 = *(uint *)(&stack0x00000190 + lVar17);
        uVar10 = *(uint *)(&stack0x00000194 + lVar17);
        iVar20 = *(int *)(&stack0x00000198 + lVar17);
        if ((((int)uVar42 < 1) || (*(int *)(&stack0x00000048 + lVar17) < (int)uVar42)) ||
           ((uVar10 != 0x80 || (iVar20 != 0x80)))) {
          *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015282f;
          pFVar24 = (FILE *)(**(code **)(&stack0x00000040 + lVar17))(2);
          *(int *)(&stack0xffffffffffffffe0 + lVar17) = iVar20;
          *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152848;
          FUN_14005c3e0(pFVar24,(byte *)"[pluto_infer] bad request header (N=%d W=%d H=%d)\n",
                        (ulonglong)uVar42,(ulonglong)uVar10);
          goto LAB_14015274f;
        }
        uVar23 = (ulonglong)(int)uVar42;
        *(uint *)(&stack0x000003e0 + lVar17) = uVar42;
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015227f;
        FUN_140123f30((undefined8 *)(&stack0x000003e8 + lVar17),uVar23 * 6);
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152290;
        FUN_1401227f0((undefined8 *)(&stack0x00000400 + lVar17),uVar23 * 0x6d);
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401522a0;
        FUN_140122c60((longlong *)(&stack0x00000418 + lVar17),uVar23);
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401522b0;
        FUN_140122c60((longlong *)(&stack0x00000430 + lVar17),uVar23);
        uVar44 = uVar23 * 0x30;
        if ((&stack0x00000030)[lVar17] == '\0') {
          *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152638;
          bVar19 = FUN_1400014b0(*(void **)(&stack0x000003e8 + lVar17),uVar44);
          if (bVar19) {
            *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152654;
            bVar19 = FUN_1400014b0(*(void **)(&stack0x00000400 + lVar17),uVar23 * 0x1b4);
            if (bVar19) {
              *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015266c;
              bVar19 = FUN_1400014b0(*(void **)(&stack0x00000418 + lVar17),uVar23);
              if (bVar19) {
                *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152684;
                bVar19 = FUN_1400014b0(*(void **)(&stack0x00000430 + lVar17),uVar23);
                if (bVar19) {
                  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401526a4;
                  bVar19 = FUN_1400014b0(*(void **)(&stack0x00000448 + lVar17),
                                         *(longlong *)(&stack0x00000450 + lVar17) -
                                         (longlong)*(void **)(&stack0x00000448 + lVar17));
                  if (bVar19) {
                    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401526c4;
                    bVar19 = FUN_1400014b0(*(void **)(&stack0x00000460 + lVar17),
                                           *(longlong *)(&stack0x00000468 + lVar17) -
                                           (longlong)*(void **)(&stack0x00000460 + lVar17));
                    if (bVar19) {
                      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401526e0;
                      bVar19 = FUN_1400014b0(*(void **)(&stack0x00000478 + lVar17),
                                             *(longlong *)(&stack0x00000480 + lVar17) -
                                             (longlong)*(void **)(&stack0x00000478 + lVar17));
                      if (bVar19) {
                        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401526f6;
                        bVar19 = FUN_1400014b0(*(void **)(&stack0x00000490 + lVar17),0x8000);
                        if (bVar19) {
                          *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015270c;
                          bVar19 = FUN_1400014b0(*(void **)(&stack0x000004a8 + lVar17),0x4000);
                          if (bVar19) {
                            *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152728;
                            bVar19 = FUN_1400014b0(*(void **)(&stack0x000004c0 + lVar17),
                                                   *(longlong *)(&stack0x000004c8 + lVar17) -
                                                   (longlong)*(void **)(&stack0x000004c0 + lVar17));
                            if (bVar19) goto LAB_1401523cc;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152740;
          pFVar31 = (FILE *)(**(code **)(&stack0x00000040 + lVar17))(2);
          *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015274f;
          FUN_14005c3e0(pFVar31,(byte *)"[pluto_infer] truncated request payload\n",uVar44,pFVar24);
          goto LAB_14015274f;
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401522d3;
        memcpy(*(void **)(&stack0x000003e8 + lVar17),lpBaseAddress + 0x40,uVar44);
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401522ee;
        memcpy(*(void **)(&stack0x00000400 + lVar17),lpBaseAddress + 0x3040,uVar23 * 0x1b4);
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152305;
        memcpy(*(void **)(&stack0x00000418 + lVar17),lpBaseAddress + 0x1e440,uVar23);
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015231c;
        memcpy(*(void **)(&stack0x00000430 + lVar17),lpBaseAddress + 0x1e540,uVar23);
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015233b;
        memcpy(*(void **)(&stack0x00000448 + lVar17),lpBaseAddress + 0x1e640,
               *(longlong *)(&stack0x00000450 + lVar17) -
               (longlong)*(void **)(&stack0x00000448 + lVar17));
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015235a;
        memcpy(*(void **)(&stack0x00000460 + lVar17),lpBaseAddress + 0x1e650,
               *(longlong *)(&stack0x00000468 + lVar17) -
               (longlong)*(void **)(&stack0x00000460 + lVar17));
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152379;
        memcpy(*(void **)(&stack0x00000478 + lVar17),lpBaseAddress + 0x1e690,
               *(longlong *)(&stack0x00000480 + lVar17) -
               (longlong)*(void **)(&stack0x00000478 + lVar17));
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152393;
        memcpy(*(void **)(&stack0x00000490 + lVar17),lpBaseAddress + 0x1e7c0,0x8000);
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401523ad;
        memcpy(*(void **)(&stack0x000004a8 + lVar17),lpBaseAddress + 0x207c0,0x4000);
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401523cc;
        memcpy(*(void **)(&stack0x000004c0 + lVar17),lpBaseAddress + 0x217c0,
               *(longlong *)(&stack0x000004c8 + lVar17) -
               (longlong)*(void **)(&stack0x000004c0 + lVar17));
LAB_1401523cc:
        *(undefined8 *)(&stack0x00000260 + lVar17) = 0;
        *(undefined4 *)(&stack0x00000268 + lVar17) = 0xffffffff;
        *(undefined2 *)(&stack0x0000026c + lVar17) = 0;
        (&stack0x0000026e)[lVar17] = 0;
        *(undefined8 *)(&stack0x000002a0 + lVar17) = 0;
        *(undefined4 *)(&stack0x000002d8 + lVar17) = 0;
        *(undefined1 (*) [16])(&stack0x00000250 + lVar17) = (undefined1  [16])0x0;
        *(undefined1 (*) [32])(&stack0x00000270 + lVar17) = ZEXT1632(ZEXT816(0));
        *(undefined8 *)(&stack0x00000290 + lVar17) = 0;
        *(undefined8 *)(&stack0x00000298 + lVar17) = 0;
        *(undefined8 *)(&stack0x000002a8 + lVar17) = 0;
        *(undefined8 *)(&stack0x000002b0 + lVar17) = 0;
        *(undefined8 *)(&stack0x000002b8 + lVar17) = 0;
        *(undefined8 *)(&stack0x000002c0 + lVar17) = 0;
        *(undefined1 (*) [16])(&stack0x000002c8 + lVar17) = (undefined1  [16])0x0;
        if (((&stack0x0000019c)[lVar17] & 1) == 0) {
          pFVar24 = (FILE *)0x0;
          *(undefined8 *)(&stack0xffffffffffffffe0 + lVar17) = 0;
        }
        else {
          pFVar24 = *(FILE **)(&stack0x00000038 + lVar17);
          *(undefined8 *)(&stack0xffffffffffffffe0 + lVar17) = 0;
          *(undefined8 *)(&stack0x00000170 + lVar17) = *(undefined8 *)(&stack0x000001a0 + lVar17);
          *(undefined8 *)(&stack0x00000178 + lVar17) = *(undefined8 *)(&stack0x000001a8 + lVar17);
          *(undefined8 *)(&stack0x00000180 + lVar17) = *(undefined8 *)(&stack0x000001b0 + lVar17);
          *(undefined8 *)(&stack0x00000188 + lVar17) = *(undefined8 *)(&stack0x000001b8 + lVar17);
        }
        puVar43 = (uint *)(&stack0x000002e0 + lVar17);
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152492;
        pcVar40 = (char *)pauVar2;
        FUN_140034f10(puVar43,pauVar5,(longlong)pauVar2,pFVar24);
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401524a2;
        pcVar36 = (char *)puVar43;
        FUN_140002170((undefined8 *)(&stack0x00000250 + lVar17),(undefined8 *)puVar43);
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401524af;
        FUN_140122990((undefined8 *)(&stack0x00000350 + lVar17));
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401524bc;
        FUN_140122990((undefined8 *)(&stack0x00000338 + lVar17));
        auVar16 = vpermilpd_avx(*(undefined1 (*) [16])(&stack0x00000298 + lVar17),1);
        *(longlong *)(&stack0x000002e0 + lVar17) = (longlong)*(int *)(&stack0x00000250 + lVar17);
        *(longlong *)(&stack0x000002e8 + lVar17) = (longlong)*(int *)(&stack0x00000254 + lVar17);
        auVar16 = vcvtpd2ps_avx(auVar16);
        *(undefined8 *)(&stack0x000002f0 + lVar17) = *(undefined8 *)(&stack0x00000260 + lVar17);
        *(longlong *)(&stack0x000002f8 + lVar17) = (longlong)*(int *)(&stack0x00000268 + lVar17);
        uVar28 = vmovlps_avx(auVar16);
        *(undefined8 *)(&stack0x00000300 + lVar17) = uVar28;
        if ((&stack0x00000030)[lVar17] == '\0') {
          pcVar36 = (char *)0x28;
          *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015277f;
          uVar28 = FUN_1400014f0(puVar43,0x28);
          if ((char)uVar28 == '\0') goto code_r0x000140152787;
        }
        else {
          puVar46 = lpBaseAddress + 0x217d0;
          for (lVar41 = 10; lVar41 != 0; lVar41 = lVar41 + -1) {
            *puVar46 = *puVar43;
            puVar43 = puVar43 + 1;
            puVar46 = puVar46 + 1;
          }
          lpBaseAddress[0x20] = uVar22;
          *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152542;
          SetEvent(*(HANDLE *)(&stack0x00000090 + lVar17));
        }
        if ((&stack0x0000008b)[lVar17] != '\0') {
          uVar7 = *(undefined4 *)(&stack0x00000254 + lVar17);
          uVar15 = *(undefined8 *)(&stack0x00000260 + lVar17);
          *(undefined4 *)(&stack0x00000058 + lVar17) = *(undefined4 *)(&stack0x00000268 + lVar17);
          uVar8 = *(undefined4 *)(&stack0x00000250 + lVar17);
          *(undefined4 *)(&stack0x0000008c + lVar17) = *(undefined4 *)(&stack0x000003e0 + lVar17);
          uVar28 = *(undefined8 *)(&stack0x000002a0 + lVar17);
          auVar54 = ZEXT864(*(ulonglong *)(&stack0x00000298 + lVar17));
          *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401525a6;
          pFVar31 = (FILE *)(**(code **)(&stack0x00000040 + lVar17))(2);
          *(undefined8 *)(&stack0xfffffffffffffff0 + lVar17) = uVar15;
          *(undefined4 *)(&stack0xffffffffffffffe8 + lVar17) = uVar7;
          pFVar24 = (FILE *)(ulonglong)*(uint *)(&stack0x0000008c + lVar17);
          pcVar36 = "[pluto_infer] step %ld N=%d a=%d arg=%d pos=%lld u=%d lp=%.3f win=%.3f\n";
          *(undefined4 *)(&stack0xfffffffffffffff8 + lVar17) =
               *(undefined4 *)(&stack0x00000058 + lVar17);
          *(undefined4 *)(&stack0xffffffffffffffe0 + lVar17) = uVar8;
          *(undefined8 *)((longlong)auStackX_8 + lVar17) = uVar28;
          *(longlong *)((longlong)auStackX_8 + lVar17 + -8) = auVar54._0_8_;
          *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401525e6;
          FUN_14005c3e0(pFVar31,(byte *)
                                "[pluto_infer] step %ld N=%d a=%d arg=%d pos=%lld u=%d lp=%.3f win=%.3f\n"
                        ,(ulonglong)pauVar38,pFVar24);
          pcVar40 = (char *)pauVar38;
        }
        pauVar38 = (undefined1 (*) [32])(ulonglong)(iVar39 + 1);
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401525f2;
        FUN_14002b8d0((longlong)pauVar5,pcVar36,(undefined1 (*) [32])pcVar40,
                      (undefined1 (*) [32])pFVar24);
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401525ff;
        FUN_140122990((undefined8 *)(&stack0x000002c0 + lVar17));
        *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015260c;
        FUN_140122990((undefined8 *)(&stack0x000002a8 + lVar17));
      } while( true );
    }
  }
  else {
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401527d2;
    pFVar24 = (FILE *)(**(code **)(&stack0x00000040 + lVar17))(2);
    *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401527ea;
    FUN_14005c3e0(pFVar24,(byte *)
                          "[pluto_infer] model max_units %d exceeds protocol cap %d (kShmMaxUnits); refusing to serve\n"
                  ,(ulonglong)uVar42,0x400);
  }
  uVar23 = 1;
  goto LAB_140152009;
code_r0x000140152787:
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152797;
  pFVar31 = (FILE *)(**(code **)(&stack0x00000040 + lVar17))(2);
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401527a6;
  FUN_14005c3e0(pFVar31,(byte *)"[pluto_infer] response write failed\n",(ulonglong)pcVar40,pFVar24);
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401527b3;
  FUN_140122990((undefined8 *)(&stack0x000002c0 + lVar17));
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401527c0;
  FUN_140122990((undefined8 *)(&stack0x000002a8 + lVar17));
LAB_14015274f:
  uVar23 = 1;
LAB_140152001:
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152009;
  FUN_14008ca20((longlong)pauVar2);
LAB_140152009:
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140152016;
  FUN_1401250d0(*(undefined8 **)(&stack0x000000a8 + lVar17));
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x14015201e;
  FUN_140070f40((longlong)pauVar5);
LAB_1401506c9:
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401506d6;
  FUN_1401250d0(*(undefined8 **)(&stack0x00000068 + lVar17));
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401506e0;
  FUN_1401250d0(*(undefined8 **)(&stack0x00000028 + lVar17));
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401506ed;
  FUN_1401250d0(*(undefined8 **)(&stack0x00000060 + lVar17));
  puVar35 = *(undefined8 **)((longlong)auStackX_8 + lVar17 + 0x18);
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1401506f7;
  FUN_1401250d0(puVar35);
  *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x140150704;
  FUN_1401250d0(*(undefined8 **)(&stack0x00000070 + lVar17));
  return uVar23;
}

