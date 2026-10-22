/* NON_MATCHING: Builds shader attribute bindings and three filtered-range buffer arrays; the reference loses allocation returns and attribute/range descriptor types, so the large constructor remains reference-only. */
/* romwright 0.5.0 decompilation of FUN_004194c8 for reference (not compiled; its own view of the boundaries):

void FUN_004194c8(int param_1,unsigned int param_2,int param_3)

{
  unsigned char *puVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  unsigned char auStack_90 [4];
  unsigned char uStack_8c;
  unsigned char uStack_8b;
  unsigned char uStack_8a;
  unsigned char *puStack_80;
  unsigned char *puStack_7c;
  unsigned char *puStack_78;
  unsigned char uStack_50;
  unsigned char uStack_4f;
  unsigned char uStack_4e;
  unsigned char uStack_4d;
  unsigned int uStack_4c;
  unsigned char uStack_48;
  unsigned char uStack_47;
  unsigned char uStack_46;
  unsigned char uStack_45;
  unsigned int uStack_44;
  unsigned char uStack_38;
  unsigned char uStack_37;
  unsigned char uStack_36;
  unsigned char uStack_35;
  unsigned int uStack_34;
  int iStack_30;
  unsigned int uStack_2c;
  int iStack_28;
  
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_37 = 1;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_4f = 1;
  uStack_47 = 1;
  uStack_36 = 0xff;
  uStack_35 = 0xff;
  uStack_4e = 0xff;
  uStack_46 = 0xff;
  uStack_4d = 0xff;
  uStack_45 = 0xff;
  uStack_4c = 0;
  uStack_44 = 0;
  iStack_30 = param_1;
  uStack_2c = param_2;
  iStack_28 = param_3;
  FUN_0015fb84(&DAT_005cc554,&uStack_38,&LAB_0041982c);
  FUN_0015fb84(&DAT_005cc554,&uStack_50,&LAB_0041983c);
  FUN_0015fb84(&DAT_005cc554,&uStack_48,&LAB_00419844);
  puVar1 = &uStack_8c;
  FUN_002f5020(puVar1,&LAB_005157dc,1,0xc);
  puVar1 = puVar1 + -4;
  *puVar1 = 0;
  uVar5 = 0;
  do {
    uVar4 = uVar5 + 1;
    puVar1[uVar5 + 4] = 0;
    uVar5 = uVar4;
  } while (uVar4 < 0xc);
  iVar6 = 0;
  uVar5 = 0;
  do {
    iVar7 = iVar6 + 1;
    uVar5 = uVar5 + 2;
    *(unsigned int *)(puVar1 + iVar6 * 4 + 0x10) = 0;
    iVar6 = iVar6 + 2;
    *(unsigned int *)(puVar1 + iVar7 * 4 + 0x10) = 0;
  } while (uVar5 < 0xc);
  auStack_90[0] = 3;
  puStack_80 = &uStack_48;
  uStack_8c = 7;
  puStack_7c = &uStack_50;
  uStack_8b = 0xf;
  puStack_78 = &uStack_38;
  uStack_8a = 0xb;
  uVar2 = func_0x004ff4a4(uStack_2c);
  *(unsigned int *)(param_1 + 0x10) = uVar2;
  if (param_3 != 0) {
    uVar2 = 0x100;
    FUN_00163060(0x100,0x100,0,*(int *)(param_1 + 0x10) << 2,1);
    *(unsigned int *)(param_1 + 8) = uVar2;
    uVar2 = 0x100;
    FUN_00163060(0x100,0x100,0,*(int *)(param_1 + 0x10) << 2,1);
    *(unsigned int *)(param_1 + 4) = uVar2;
    uVar2 = 0x100;
    FUN_00163060(0x100,0x100,0,*(int *)(param_1 + 0x10) << 2,1);
    *(unsigned int *)(param_1 + 0xc) = uVar2;
  }
  else {
    uVar2 = 0x10000;
    FUN_00163060(0x10000,0x100,0,*(int *)(param_1 + 0x10) << 2,1);
    *(unsigned int *)(param_1 + 8) = uVar2;
    uVar2 = 0x10000;
    FUN_00163060(0x10000,0x100,0,*(int *)(param_1 + 0x10) << 2,1);
    *(unsigned int *)(param_1 + 4) = uVar2;
    uVar2 = 0x10000;
    FUN_00163060(0x10000,0x100,0,*(int *)(param_1 + 0x10) << 2,1);
    *(unsigned int *)(param_1 + 0xc) = uVar2;
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      *(unsigned int *)(*(int *)(param_1 + 8) + iVar6 * 4) = 0;
      *(unsigned int *)(*(int *)(param_1 + 4) + iVar6 * 4) = 0;
      *(unsigned int *)(*(int *)(param_1 + 0xc) + iVar6 * 4) = 0;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x10));
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      iVar7 = func_0x004ff3c0(uStack_2c,iVar6,5);
      if (iVar7 != 0) {
        if (param_3 != 0) {
          iVar3 = 0x100;
          FUN_00163060(0x100,0x100,0,0x7ac,1);
          *(int *)(*(int *)(param_1 + 8) + iVar6 * 4) = iVar3;
          *(int *)(iVar3 + 4) = iVar7;
          uVar2 = 0x10000;
          FUN_0019d4d8(0x10000,0x100,0,*(int *)(iVar3 + 4) * 0x90,0x80,1);
          *(unsigned int *)(iVar3 + 8) = uVar2;
          uVar2 = 0x10000;
          FUN_0019d4d8(0x10000,0x100,0,*(int *)(iVar3 + 4) * 0xc,0x80,1);
          *(unsigned int *)(iVar3 + 0xc) = uVar2;
        }
        else {
          iVar3 = 0x10000;
          FUN_00163060(0x10000,0x100,0,0x7ac,1);
          *(int *)(*(int *)(param_1 + 8) + iVar6 * 4) = iVar3;
          *(int *)(iVar3 + 4) = iVar7;
          uVar2 = 0x10000;
          FUN_0019d4d8(0x10000,0x100,0,*(int *)(iVar3 + 4) * 0x90,0x80,1);
          *(unsigned int *)(iVar3 + 8) = uVar2;
          uVar2 = 0x10000;
          FUN_0019d4d8(0x10000,0x100,0,*(int *)(iVar3 + 4) * 0xc,0x80,1);
          *(unsigned int *)(iVar3 + 0xc) = uVar2;
        }
        FUN_0042c8f8(*(unsigned int *)(*(int *)(param_1 + 8) + iVar6 * 4),auStack_90,uStack_2c,iVar6,5
                    );
      }
      iVar7 = func_0x004ff3c0(uStack_2c,iVar6,4);
      if (iVar7 != 0) {
        if (param_3 != 0) {
          iVar3 = 0x100;
          FUN_00163060(0x100,0x100,0,0x7ac,1);
          *(int *)(*(int *)(param_1 + 4) + iVar6 * 4) = iVar3;
          *(int *)(iVar3 + 4) = iVar7;
          uVar2 = 0x10000;
          FUN_0019d4d8(0x10000,0x100,0,*(int *)(iVar3 + 4) * 0x90,0x80,1);
          *(unsigned int *)(iVar3 + 8) = uVar2;
          uVar2 = 0x10000;
          FUN_0019d4d8(0x10000,0x100,0,*(int *)(iVar3 + 4) * 0xc,0x80,1);
          *(unsigned int *)(iVar3 + 0xc) = uVar2;
        }
        else {
          iVar3 = 0x10000;
          FUN_00163060(0x10000,0x100,0,0x7ac,1);
          *(int *)(*(int *)(param_1 + 4) + iVar6 * 4) = iVar3;
          *(int *)(iVar3 + 4) = iVar7;
          uVar2 = 0x10000;
          FUN_0019d4d8(0x10000,0x100,0,*(int *)(iVar3 + 4) * 0x90,0x80,1);
          *(unsigned int *)(iVar3 + 8) = uVar2;
          uVar2 = 0x10000;
          FUN_0019d4d8(0x10000,0x100,0,*(int *)(iVar3 + 4) * 0xc,0x80,1);
          *(unsigned int *)(iVar3 + 0xc) = uVar2;
        }
        FUN_0042c8f8(*(unsigned int *)(*(int *)(param_1 + 4) + iVar6 * 4),auStack_90,uStack_2c,iVar6,4
                    );
      }
      iVar7 = func_0x004ff3c0(uStack_2c,iVar6,6);
      if (iVar7 != 0) {
        if (param_3 != 0) {
          iVar3 = 0x100;
          FUN_00163060(0x100,0x100,0,0x7ac,1);
          *(int *)(*(int *)(param_1 + 0xc) + iVar6 * 4) = iVar3;
          *(int *)(iVar3 + 4) = iVar7;
          uVar2 = 0x10000;
          FUN_0019d4d8(0x10000,0x100,0,*(int *)(iVar3 + 4) * 0x90,0x80,1);
          *(unsigned int *)(iVar3 + 8) = uVar2;
          uVar2 = 0x10000;
          FUN_0019d4d8(0x10000,0x100,0,*(int *)(iVar3 + 4) * 0xc,0x80,1);
          *(unsigned int *)(iVar3 + 0xc) = uVar2;
        }
        else {
          iVar3 = 0x10000;
          FUN_00163060(0x10000,0x100,0,0x7ac,1);
          *(int *)(*(int *)(param_1 + 0xc) + iVar6 * 4) = iVar3;
          *(int *)(iVar3 + 4) = iVar7;
          uVar2 = 0x10000;
          FUN_0019d4d8(0x10000,0x100,0,*(int *)(iVar3 + 4) * 0x90,0x80,1);
          *(unsigned int *)(iVar3 + 8) = uVar2;
          uVar2 = 0x10000;
          FUN_0019d4d8(0x10000,0x100,0,*(int *)(iVar3 + 4) * 0xc,0x80,1);
          *(unsigned int *)(iVar3 + 0xc) = uVar2;
        }
        FUN_0042c8f8(*(unsigned int *)(*(int *)(param_1 + 0xc) + iVar6 * 4),auStack_90,uStack_2c,iVar6
                     ,6);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x10));
  }
  return;
}
*/
#include "common.h"
