
void FUN_14000ed00(longlong param_1,char *param_2,uint param_3,ulonglong param_4,char *param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong local_208 [4];
  longlong local_1e8 [4];
  longlong local_1c8 [4];
  ulonglong local_1a8 [4];
  longlong local_188 [4];
  longlong local_168 [4];
  ulonglong local_148 [4];
  longlong local_128 [4];
  longlong local_108 [4];
  ulonglong local_e8 [4];
  longlong local_c8 [4];
  undefined8 *local_a8;
  ulonglong local_a0;
  undefined8 local_98 [2];
  longlong local_88 [4];
  longlong local_68 [5];
  
  FUN_1400091e0((longlong *)&local_a8,param_2);
  puVar1 = local_a8;
  lVar2 = FUN_14000d680(param_1,local_a8,local_a0);
  if (lVar2 == param_1 + 8) {
    puVar3 = FUN_14014f6e0(0x10);
    FUN_14000a750(local_88,"weight blob: missing tensor \'",(undefined1 *)local_a8,local_a0);
    plVar4 = FUN_1401265a0(local_88,"\'");
    FUN_140127e50(local_68,plVar4);
    FUN_14010fba0(puVar3,local_68);
    FUN_1401250d0(local_68);
    FUN_1401250d0(local_88);
                    /* WARNING: Subroutine does not return */
    FUN_14014fde0((longlong)puVar3,&PTR_PTR_140164930,FUN_14010fd00);
  }
  if (puVar1 != local_98) {
    FUN_14003cb20(puVar1);
  }
  uVar5 = 0xffffffffffffffff;
  if ((int)param_3 < (int)(*(longlong *)(lVar2 + 0x48) - *(longlong *)(lVar2 + 0x40) >> 3)) {
    uVar5 = *(ulonglong *)(*(longlong *)(lVar2 + 0x40) + (longlong)(int)param_3 * 8);
  }
  if (uVar5 == param_4) {
    return;
  }
  puVar3 = FUN_14014f6e0(0x10);
  FUN_1401317c0((longlong *)local_e8,param_4);
  FUN_1401317c0((longlong *)local_148,uVar5);
  FUN_140130830((longlong *)local_1a8,param_3);
  FUN_1400091e0((longlong *)local_208,param_2);
  plVar4 = (longlong *)
           FUN_140126d10(local_208,0,"model: blob incompatible with this engine build: ");
  FUN_140127e50(local_1e8,plVar4);
  plVar4 = FUN_1401265a0(local_1e8," dim");
  FUN_140127e50(local_1c8,plVar4);
  FUN_14013b410(local_188,local_1c8,local_1a8);
  plVar4 = FUN_1401265a0(local_188," = ");
  FUN_140127e50(local_168,plVar4);
  FUN_14013b410(local_128,local_168,local_148);
  plVar4 = FUN_1401265a0(local_128,", engine expects ");
  FUN_140127e50(local_108,plVar4);
  FUN_14013b410(local_c8,local_108,local_e8);
  plVar4 = FUN_1401265a0(local_c8," (");
  FUN_140127e50((longlong *)&local_a8,plVar4);
  plVar4 = FUN_1401265a0((longlong *)&local_a8,param_5);
  FUN_140127e50(local_88,plVar4);
  plVar4 = FUN_1401265a0(local_88,")");
  FUN_140127e50(local_68,plVar4);
  FUN_14010fba0(puVar3,local_68);
  FUN_1401250d0(local_68);
  FUN_1401250d0(local_88);
  FUN_1401250d0(&local_a8);
  FUN_1401250d0(local_c8);
  FUN_1401250d0(local_108);
  FUN_1401250d0(local_128);
  FUN_1401250d0(local_168);
  FUN_1401250d0(local_188);
  FUN_1401250d0(local_1c8);
  FUN_1401250d0(local_1e8);
  FUN_1401250d0(local_208);
  FUN_1401250d0(local_1a8);
  FUN_1401250d0(local_148);
  FUN_1401250d0(local_e8);
                    /* WARNING: Subroutine does not return */
  FUN_14014fde0((longlong)puVar3,&PTR_PTR_140164930,FUN_14010fd00);
}

