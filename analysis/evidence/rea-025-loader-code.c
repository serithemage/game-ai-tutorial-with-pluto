
void FUN_140074460(undefined8 *param_1,undefined8 *param_2)

{
  undefined ******ppppppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  size_t sVar5;
  int iVar6;
  longlong *plVar7;
  size_t sVar8;
  ulonglong uVar9;
  undefined *******pppppppuVar10;
  ulonglong *puVar11;
  undefined *puVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  undefined *******pppppppuVar16;
  ulonglong uVar17;
  undefined *******pppppppuVar18;
  uint uVar19;
  ulonglong local_308 [2];
  undefined8 local_2f8;
  ulonglong local_2f0;
  ulonglong local_2d8 [4];
  longlong local_2b8 [4];
  undefined1 *local_298 [2];
  undefined1 local_288 [16];
  undefined ******local_278;
  ulonglong local_270;
  undefined ******appppppuStack_268 [3];
  size_t local_250;
  undefined *****local_248 [4];
  undefined ******local_228;
  size_t local_220;
  undefined *****local_218 [2];
  uint auStack_208 [10];
  undefined8 local_1e0 [2];
  undefined8 local_1d0 [15];
  undefined **local_158 [4];
  byte local_138;
  undefined8 local_80;
  undefined2 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (param_2[1] == 0) {
    appppppuStack_268[2] = local_248;
    appppppuStack_268[0] = (undefined ******)((ulonglong)appppppuStack_268[0] & 0xffffffffffff0000);
    local_250 = 0;
LAB_1400744a4:
    pppppppuVar18 = appppppuStack_268;
    uVar13 = local_250 * 2 + 2;
    pppppppuVar10 = (undefined *******)local_248;
    if (7 < (uint)uVar13) {
      uVar17 = 8;
      uVar19 = (uint)uVar13 & 0xfffffff8;
      local_248[0] = (undefined *****)appppppuStack_268[0];
      uVar14 = uVar19 - 1 >> 3 & 7;
      if (8 < uVar19) {
        if (uVar14 != 0) {
          uVar9 = uVar17;
          if (uVar14 != 1) {
            if (uVar14 != 2) {
              if (uVar14 != 3) {
                if (uVar14 != 4) {
                  if (uVar14 != 5) {
                    if (uVar14 != 6) {
                      uVar17 = 0x10;
                      local_248[1] = (undefined *****)appppppuStack_268[1];
                    }
                    uVar9 = (ulonglong)((int)uVar17 + 8);
                    *(undefined8 *)((longlong)local_248 + uVar17) =
                         *(undefined8 *)((longlong)pppppppuVar18 + uVar17);
                  }
                  uVar17 = (ulonglong)((int)uVar9 + 8);
                  *(undefined8 *)((longlong)local_248 + uVar9) =
                       *(undefined8 *)((longlong)pppppppuVar18 + uVar9);
                }
                uVar9 = (ulonglong)((int)uVar17 + 8);
                *(undefined8 *)((longlong)local_248 + uVar17) =
                     *(undefined8 *)((longlong)pppppppuVar18 + uVar17);
              }
              uVar17 = (ulonglong)((int)uVar9 + 8);
              *(undefined8 *)((longlong)local_248 + uVar9) =
                   *(undefined8 *)((longlong)pppppppuVar18 + uVar9);
            }
            uVar9 = (ulonglong)((int)uVar17 + 8);
            *(undefined8 *)((longlong)local_248 + uVar17) =
                 *(undefined8 *)((longlong)pppppppuVar18 + uVar17);
          }
          uVar14 = (int)uVar9 + 8;
          uVar17 = (ulonglong)uVar14;
          *(undefined8 *)((longlong)local_248 + uVar9) =
               *(undefined8 *)((longlong)pppppppuVar18 + uVar9);
          if (uVar19 <= uVar14) goto LAB_140074ce0;
        }
        do {
          iVar6 = (int)uVar17;
          uVar2 = *(undefined8 *)((longlong)pppppppuVar18 + (ulonglong)(iVar6 + 8));
          uVar3 = *(undefined8 *)((longlong)pppppppuVar18 + (ulonglong)(iVar6 + 0x10));
          *(undefined8 *)((longlong)local_248 + uVar17) =
               *(undefined8 *)((longlong)pppppppuVar18 + uVar17);
          uVar4 = *(undefined8 *)((longlong)pppppppuVar18 + (ulonglong)(iVar6 + 0x18));
          *(undefined8 *)((longlong)local_248 + (ulonglong)(iVar6 + 8)) = uVar2;
          uVar2 = *(undefined8 *)((longlong)pppppppuVar18 + (ulonglong)(iVar6 + 0x20));
          *(undefined8 *)((longlong)local_248 + (ulonglong)(iVar6 + 0x10)) = uVar3;
          *(undefined8 *)((longlong)local_248 + (ulonglong)(iVar6 + 0x18)) = uVar4;
          uVar3 = *(undefined8 *)((longlong)pppppppuVar18 + (ulonglong)(iVar6 + 0x28));
          uVar17 = (ulonglong)(iVar6 + 0x40U);
          *(undefined8 *)((longlong)local_248 + (ulonglong)(iVar6 + 0x20)) = uVar2;
          uVar2 = *(undefined8 *)((longlong)pppppppuVar18 + (ulonglong)(iVar6 + 0x30));
          uVar4 = *(undefined8 *)((longlong)pppppppuVar18 + (ulonglong)(iVar6 + 0x38));
          *(undefined8 *)((longlong)local_248 + (ulonglong)(iVar6 + 0x28)) = uVar3;
          *(undefined8 *)((longlong)local_248 + (ulonglong)(iVar6 + 0x30)) = uVar2;
          *(undefined8 *)((longlong)local_248 + (ulonglong)(iVar6 + 0x38)) = uVar4;
        } while (iVar6 + 0x40U < uVar19);
      }
LAB_140074ce0:
      pppppppuVar10 = (undefined *******)((longlong)local_248 + uVar17);
      pppppppuVar18 = (undefined *******)(uVar17 + (longlong)pppppppuVar18);
    }
    lVar15 = 0;
    if ((uVar13 & 4) != 0) {
      lVar15 = 4;
      *(undefined4 *)pppppppuVar10 = *(undefined4 *)pppppppuVar18;
    }
    appppppuStack_268[2] = local_248;
    if ((uVar13 & 2) != 0) {
      *(undefined2 *)((longlong)pppppppuVar10 + lVar15) =
           *(undefined2 *)((longlong)pppppppuVar18 + lVar15);
    }
  }
  else {
    pppppppuVar10 = (undefined *******)local_218;
    iVar6 = MultiByteToWideChar(0xfde9,0,(LPCSTR)*param_2,(int)param_2[1],(LPWSTR)0x0,0);
    uVar13 = 0;
    if (-1 < iVar6) {
      uVar13 = (longlong)iVar6;
    }
    local_228 = (undefined ******)pppppppuVar10;
    FUN_140129410((longlong *)&local_228,uVar13,0);
    if (0 < iVar6) {
      MultiByteToWideChar(0xfde9,0,(LPCSTR)*param_2,*(int *)(param_2 + 1),(LPWSTR)local_228,iVar6);
    }
    sVar5 = local_220;
    ppppppuVar1 = local_228;
    local_250 = sVar5;
    if ((undefined *******)local_228 == pppppppuVar10) {
      uVar13 = local_220 * 2 + 2;
      pppppppuVar18 = appppppuStack_268;
      if (7 < (uint)uVar13) {
        uVar17 = 8;
        uVar19 = (uint)uVar13 & 0xfffffff8;
        appppppuStack_268[0] = (undefined ******)local_218[0];
        uVar14 = uVar19 - 1 >> 3 & 7;
        if (8 < uVar19) {
          if (uVar14 != 0) {
            uVar9 = uVar17;
            if (uVar14 != 1) {
              if (uVar14 != 2) {
                if (uVar14 != 3) {
                  if (uVar14 != 4) {
                    if (uVar14 != 5) {
                      if (uVar14 != 6) {
                        uVar17 = 0x10;
                        appppppuStack_268[1] = (undefined ******)local_218[1];
                      }
                      uVar9 = (ulonglong)((int)uVar17 + 8);
                      *(undefined8 *)((longlong)appppppuStack_268 + uVar17) =
                           *(undefined8 *)((longlong)pppppppuVar10 + uVar17);
                    }
                    uVar17 = (ulonglong)((int)uVar9 + 8);
                    *(undefined8 *)((longlong)appppppuStack_268 + uVar9) =
                         *(undefined8 *)((longlong)pppppppuVar10 + uVar9);
                  }
                  uVar9 = (ulonglong)((int)uVar17 + 8);
                  *(undefined8 *)((longlong)appppppuStack_268 + uVar17) =
                       *(undefined8 *)((longlong)pppppppuVar10 + uVar17);
                }
                uVar17 = (ulonglong)((int)uVar9 + 8);
                *(undefined8 *)((longlong)appppppuStack_268 + uVar9) =
                     *(undefined8 *)((longlong)pppppppuVar10 + uVar9);
              }
              uVar9 = (ulonglong)((int)uVar17 + 8);
              *(undefined8 *)((longlong)appppppuStack_268 + uVar17) =
                   *(undefined8 *)((longlong)pppppppuVar10 + uVar17);
            }
            uVar14 = (int)uVar9 + 8;
            uVar17 = (ulonglong)uVar14;
            *(undefined8 *)((longlong)appppppuStack_268 + uVar9) =
                 *(undefined8 *)((longlong)pppppppuVar10 + uVar9);
            if (uVar19 <= uVar14) goto LAB_140075023;
          }
          do {
            iVar6 = (int)uVar17;
            uVar2 = *(undefined8 *)((longlong)pppppppuVar10 + (ulonglong)(iVar6 + 8));
            uVar3 = *(undefined8 *)((longlong)pppppppuVar10 + (ulonglong)(iVar6 + 0x10));
            *(undefined8 *)((longlong)appppppuStack_268 + uVar17) =
                 *(undefined8 *)((longlong)pppppppuVar10 + uVar17);
            *(undefined8 *)((longlong)appppppuStack_268 + (ulonglong)(iVar6 + 8)) = uVar2;
            uVar2 = *(undefined8 *)((longlong)pppppppuVar10 + (ulonglong)(iVar6 + 0x18));
            uVar4 = *(undefined8 *)((longlong)pppppppuVar10 + (ulonglong)(iVar6 + 0x20));
            *(undefined8 *)((longlong)appppppuStack_268 + (ulonglong)(iVar6 + 0x10)) = uVar3;
            *(undefined8 *)((longlong)appppppuStack_268 + (ulonglong)(iVar6 + 0x18)) = uVar2;
            uVar2 = *(undefined8 *)((longlong)pppppppuVar10 + (ulonglong)(iVar6 + 0x28));
            *(undefined8 *)((longlong)appppppuStack_268 + (ulonglong)(iVar6 + 0x20)) = uVar4;
            uVar3 = *(undefined8 *)((longlong)pppppppuVar10 + (ulonglong)(iVar6 + 0x30));
            uVar17 = (ulonglong)(iVar6 + 0x40U);
            uVar4 = *(undefined8 *)((longlong)pppppppuVar10 + (ulonglong)(iVar6 + 0x38));
            *(undefined8 *)((longlong)appppppuStack_268 + (ulonglong)(iVar6 + 0x28)) = uVar2;
            *(undefined8 *)((longlong)appppppuStack_268 + (ulonglong)(iVar6 + 0x30)) = uVar3;
            *(undefined8 *)((longlong)appppppuStack_268 + (ulonglong)(iVar6 + 0x38)) = uVar4;
          } while (iVar6 + 0x40U < uVar19);
        }
LAB_140075023:
        pppppppuVar18 = (undefined *******)((longlong)appppppuStack_268 + uVar17);
        pppppppuVar10 = (undefined *******)(uVar17 + (longlong)pppppppuVar10);
      }
      lVar15 = 0;
      if ((uVar13 & 4) != 0) {
        lVar15 = 4;
        *(undefined4 *)pppppppuVar18 = *(undefined4 *)pppppppuVar10;
      }
      pppppppuVar16 = appppppuStack_268;
      if ((uVar13 & 2) != 0) {
        *(undefined2 *)((longlong)pppppppuVar18 + lVar15) =
             *(undefined2 *)((longlong)pppppppuVar10 + lVar15);
      }
    }
    else {
      local_278 = local_228;
      local_270 = local_220;
      appppppuStack_268[0] = (undefined ******)local_218[0];
      pppppppuVar16 = (undefined *******)local_228;
      if (((0xf7 < local_220) && (*(short *)local_228 != 0x5c)) &&
         (*(short *)((longlong)local_228 + 2) == 0x3a)) {
        sVar8 = wcslen(L"\\\\?\\");
        uVar13 = local_220 + sVar8;
        local_220 = 0;
        local_218[0] = (undefined *****)((ulonglong)local_218[0] & 0xffffffffffff0000);
        local_228 = (undefined ******)pppppppuVar10;
        FUN_14012b7c0(&local_228,uVar13);
        if (0x1fffffffffffffff - local_220 < sVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_1401533c0("basic_string::append");
        }
        FUN_14012b900((longlong *)&local_228,L"\\\\?\\",sVar8);
        if (0x1fffffffffffffff - local_220 < sVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_1401533c0("basic_string::append");
        }
        FUN_14012b900((longlong *)&local_228,(undefined2 *)ppppppuVar1,sVar5);
        ppppppuVar1 = appppppuStack_268[0];
        pppppppuVar18 = (undefined *******)local_278;
        if ((undefined *******)local_228 == pppppppuVar10) {
          pppppppuVar18 = pppppppuVar10;
          if (local_220 != 0) {
            if (local_220 == 1) {
              *(short *)local_278 = (short)local_218[0];
            }
            else {
              memcpy(local_278,pppppppuVar10,local_220 * 2);
              pppppppuVar18 = (undefined *******)local_228;
            }
          }
          *(short *)((longlong)local_278 + local_220 * 2) = 0;
          local_270 = local_220;
LAB_140074e62:
          local_220 = 0;
          *(short *)pppppppuVar18 = 0;
          local_250 = local_270;
          pppppppuVar16 = (undefined *******)local_278;
          if (pppppppuVar18 != pppppppuVar10) {
            FUN_14003cb20(pppppppuVar18);
            local_250 = local_270;
            pppppppuVar16 = (undefined *******)local_278;
          }
        }
        else {
          local_250 = local_220;
          pppppppuVar16 = (undefined *******)local_228;
          if ((undefined *******)local_278 == appppppuStack_268) {
            appppppuStack_268[0] = (undefined ******)local_218[0];
          }
          else {
            local_278 = local_228;
            local_270 = local_220;
            appppppuStack_268[0] = (undefined ******)local_218[0];
            if (pppppppuVar18 != (undefined *******)0x0) {
              local_228 = (undefined ******)pppppppuVar18;
              local_218[0] = (undefined *****)ppppppuVar1;
              goto LAB_140074e62;
            }
          }
        }
      }
    }
    appppppuStack_268[2] = local_248;
    if (pppppppuVar16 == appppppuStack_268) goto LAB_1400744a4;
    local_248[0] = (undefined *****)appppppuStack_268[0];
    appppppuStack_268[2] = (undefined ******)pppppppuVar16;
  }
  local_270 = 0;
  appppppuStack_268[0] = (undefined ******)((ulonglong)appppppuStack_268[0] & 0xffffffffffff0000);
  local_278 = (undefined ******)appppppuStack_268;
  FUN_1400f61d0(local_248 + 2);
  pppppppuVar10 = appppppuStack_268 + 2;
  FUN_1400f5330((longlong *)pppppppuVar10);
  if ((undefined *******)local_278 != appppppuStack_268) {
    FUN_14003cb20(local_278);
  }
  ppppppuVar1 = appppppuStack_268[2];
  FUN_1401338e0(local_158);
  lVar15 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  local_80 = 0;
  local_228 = (undefined ******)&DAT_140163438;
  local_158[0] = (undefined **)&DAT_140163460;
  local_220 = 0;
  FUN_140134940((longlong)local_158,0,0);
  local_228 = (undefined ******)&PTR_LAB_140169f68;
  local_158[0] = &PTR_FUN_140169f90;
  FUN_1401052f0(local_218,&PTR_FUN_140169f90,lVar15);
  FUN_140134940((longlong)local_158,(longlong)local_218,lVar15);
  plVar7 = FUN_140103a00((longlong *)local_218,(wchar_t *)ppppppuVar1,0xc);
  puVar12 = (undefined *)((longlong)local_228[-3] + (longlong)&local_228);
  if (plVar7 == (longlong *)0x0) {
    FUN_140134b10((longlong)puVar12,*(uint *)((longlong)auStack_208 + (longlong)local_228[-3]) | 4);
  }
  else {
    FUN_140134b10((longlong)puVar12,0);
  }
  if (local_248[2] != (undefined *****)0x0) {
    FUN_14009b3b0(local_248 + 2,(ulonglong)local_248[2]);
  }
  if (appppppuStack_268[2] != local_248) {
    FUN_14003cb20(appppppuStack_268[2]);
  }
  if ((local_138 & 5) == 0) {
    plVar7 = FUN_1400ed2e0((longlong *)&local_228,&local_2f8,0x10);
    if (((*(byte *)((longlong)plVar7 + *(longlong *)(*plVar7 + -0x18) + 0x20) & 5) != 0) ||
       ((int)local_2f8 != 0x42574c50)) {
      puVar11 = FUN_14014f6e0(0x10);
      FUN_14000a750((longlong *)pppppppuVar10,"not a Pluto weights container: ",
                    (undefined1 *)*param_2,param_2[1]);
      FUN_14010fba0(puVar11,pppppppuVar10);
      FUN_1401250d0(pppppppuVar10);
                    /* WARNING: Subroutine does not return */
      FUN_14014fde0((longlong)puVar11,&PTR_PTR_140164930,FUN_14010fd00);
    }
    if (local_2f8._4_4_ != 1) {
      puVar11 = FUN_14014f6e0(0x10);
      FUN_140130d70((longlong *)local_2d8,local_2f8._4_4_);
      plVar7 = (longlong *)FUN_140126d10(local_2d8,0,"weights container: unsupported version ");
      FUN_140127e50(local_2b8,plVar7);
      plVar7 = FUN_1401265a0(local_2b8," (");
      FUN_140127e50((longlong *)local_298,plVar7);
      plVar7 = FUN_140126660((longlong *)local_298,(undefined1 *)*param_2,param_2[1]);
      FUN_140127e50((longlong *)&local_278,plVar7);
      plVar7 = FUN_1401265a0((longlong *)&local_278,")");
      FUN_140127e50((longlong *)pppppppuVar10,plVar7);
      FUN_14010fba0(puVar11,pppppppuVar10);
      FUN_1401250d0(pppppppuVar10);
      FUN_1401250d0(&local_278);
      FUN_1401250d0(local_298);
      FUN_1401250d0(local_2b8);
      FUN_1401250d0(local_2d8);
                    /* WARNING: Subroutine does not return */
      FUN_14014fde0((longlong)puVar11,&PTR_PTR_140164930,FUN_14010fd00);
    }
    local_298[0] = local_288;
    FUN_1401252e0((longlong *)local_298,local_2f0,'\0');
    uVar13 = local_2f0;
    plVar7 = FUN_1400ed2e0((longlong *)&local_228,local_298[0],local_2f0);
    if ((*(byte *)((longlong)plVar7 + *(longlong *)(*plVar7 + -0x18) + 0x20) & 5) != 0) {
      puVar11 = FUN_14014f6e0(0x10);
      FUN_14000a750((longlong *)&local_278,"weights container: truncated header (",
                    (undefined1 *)*param_2,param_2[1]);
      plVar7 = FUN_1401265a0((longlong *)&local_278,")");
      FUN_140127e50((longlong *)pppppppuVar10,plVar7);
      FUN_14010fba0(puVar11,pppppppuVar10);
      FUN_1401250d0(pppppppuVar10);
      FUN_1401250d0(&local_278);
                    /* WARNING: Subroutine does not return */
      FUN_14014fde0((longlong)puVar11,&PTR_PTR_140164930,FUN_14010fd00);
    }
    FUN_140072190(param_1,(ulonglong *)local_298,uVar13);
    local_308[1] = 0;
    local_308[0] = local_2f0 + 0x4f & 0xffffffffffffffc0;
    FUN_1400ed560((longlong *)&local_228,local_308);
    FUN_140126f60(param_1 + 6,param_1[0xc],'\0');
    plVar7 = FUN_1400ed2e0((longlong *)&local_228,param_1[6],param_1[0xc]);
    if ((*(byte *)((longlong)plVar7 + *(longlong *)(*plVar7 + -0x18) + 0x20) & 5) != 0) {
      puVar11 = FUN_14014f6e0(0x10);
      FUN_14000a750((longlong *)&local_278,"weights container: truncated blob (",
                    (undefined1 *)*param_2,param_2[1]);
      plVar7 = FUN_1401265a0((longlong *)&local_278,")");
      FUN_140127e50((longlong *)pppppppuVar10,plVar7);
      FUN_14010fba0(puVar11,pppppppuVar10);
      FUN_1401250d0(pppppppuVar10);
      FUN_1401250d0(&local_278);
                    /* WARNING: Subroutine does not return */
      FUN_14014fde0((longlong)puVar11,&PTR_PTR_140164930,FUN_14010fd00);
    }
    param_1[10] = param_1[6];
    param_1[0xb] = param_1[7];
    FUN_1401250d0(local_298);
    goto LAB_1400748c9;
  }
  uVar13 = param_2[1];
  FUN_14000a810((longlong *)&local_278,(undefined1 *)*param_2,uVar13,".json");
  FUN_140093100((longlong *)pppppppuVar10,&local_278);
  FUN_140072190(param_1,(ulonglong *)pppppppuVar10,uVar13);
  FUN_1401250d0(pppppppuVar10);
  FUN_1401250d0(&local_278);
  FUN_14000a810((longlong *)&local_278,(undefined1 *)*param_2,param_2[1],".bin");
  FUN_140093100((longlong *)pppppppuVar10,&local_278);
  pppppppuVar18 = (undefined *******)param_1[6];
  if (pppppppuVar18 == (undefined *******)(param_1 + 8)) {
    if (appppppuStack_268[2] == local_248) goto LAB_140074d28;
    param_1[6] = appppppuStack_268[2];
    param_1[7] = local_250;
    param_1[8] = local_248[0];
    appppppuStack_268[2] = local_248;
  }
  else if (appppppuStack_268[2] == local_248) {
LAB_140074d28:
    if (local_250 != 0) {
      if (local_250 == 1) {
        *(undefined1 *)pppppppuVar18 = local_248[0]._0_1_;
        pppppppuVar18 = (undefined *******)param_1[6];
      }
      else {
        memcpy(pppppppuVar18,local_248,local_250);
        pppppppuVar18 = (undefined *******)param_1[6];
      }
    }
    param_1[7] = local_250;
    *(undefined1 *)((longlong)pppppppuVar18 + local_250) = 0;
  }
  else {
    ppppppuVar1 = (undefined ******)param_1[8];
    param_1[6] = appppppuStack_268[2];
    param_1[7] = local_250;
    param_1[8] = local_248[0];
    appppppuStack_268[2] = local_248;
    if (pppppppuVar18 != (undefined *******)0x0) {
      appppppuStack_268[2] = (undefined ******)pppppppuVar18;
      local_248[0] = (undefined *****)ppppppuVar1;
    }
  }
  local_250 = 0;
  *(undefined1 *)appppppuStack_268[2] = 0;
  FUN_1401250d0(pppppppuVar10);
  FUN_1401250d0(&local_278);
  param_1[10] = param_1[6];
  param_1[0xb] = param_1[7];
  if (param_1[0xc] != param_1[7]) {
    puVar11 = FUN_14014f6e0(0x10);
    FUN_140131d50((longlong *)local_298,param_1[0xc]);
    FUN_140131d50(&local_2f8,param_1[0xb]);
    plVar7 = (longlong *)FUN_140126d10(&local_2f8,0,"weight blob: .bin size mismatch (");
    FUN_140127e50((longlong *)local_2d8,plVar7);
    plVar7 = FUN_1401265a0((longlong *)local_2d8," vs ");
    FUN_140127e50(local_2b8,plVar7);
    FUN_14013b410((longlong *)&local_278,local_2b8,(ulonglong *)local_298);
    plVar7 = FUN_1401265a0((longlong *)&local_278,")");
    FUN_140127e50((longlong *)pppppppuVar10,plVar7);
    FUN_14010fba0(puVar11,pppppppuVar10);
    FUN_1401250d0(pppppppuVar10);
    FUN_1401250d0(&local_278);
    FUN_1401250d0(local_2b8);
    FUN_1401250d0(local_2d8);
    FUN_1401250d0(&local_2f8);
    FUN_1401250d0(local_298);
                    /* WARNING: Subroutine does not return */
    FUN_14014fde0((longlong)puVar11,&PTR_PTR_140164930,FUN_14010fd00);
  }
LAB_1400748c9:
  local_228 = (undefined ******)&PTR_LAB_140169f68;
  local_158[0] = &PTR_FUN_140169f90;
  local_218[0] = (undefined *****)&PTR_LAB_140169c90;
  FUN_140103d50((longlong *)local_218);
  FUN_1400fd2e0(local_1d0);
  local_218[0] = (undefined *****)&PTR_FUN_14016a290;
  FUN_14011f690(local_1e0);
  local_228 = (undefined ******)&DAT_140163438;
  local_220 = 0;
  local_158[0] = &PTR_FUN_14016b8a0;
  FUN_140133980(local_158);
  return;
}

