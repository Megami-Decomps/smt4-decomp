/* NON_MATCHING: draws save-slot frames, names, location, and play time; save-slot/text record layouts and lost draw-call arguments still need reconstruction. */
/* romwright 0.5.0 decompilation of FUN_001eb874 for reference (not compiled; its own view of the boundaries):

void FUN_001eb874(unsigned int *param_1,int param_2,float *param_3,int param_4,int param_5,int param_6
                 )

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int unaff_r10;
  unsigned int unaff_r11;
  unsigned char auStack_58 [4];
  int iStack_54;
  unsigned char auStack_40 [28];
  
  if (param_1 == (unsigned int *)0x0 || param_2 == 0) {
    return;
  }
  if (param_3 == (float *)0x0) {
    return;
  }
  if (*param_3 == 0.0f) {
    return;
  }
  iStack_54 = param_2 + 0x38;
  FUN_002bed3c();
  FUN_002bf538();
  param_4 = param_4 + (int)param_3[1];
  param_5 = (int)param_3[2] + param_5;
  if (param_6 != 0) {
    FUN_002bf288(2,0x39,0x56,param_4,param_5,0x6f);
    return;
  }
  if (*(char *)(param_2 + 0x37) != '\0') {
    if (*(char *)(param_2 + 0x37) == '\x01') {
      FUN_002bf380(2,0x39,10,param_4,param_5,0x6f);
      unaff_r10 = 0xc0c0c000;
      unaff_r11 = 0xffffff00;
    }
  }
  else {
    FUN_002bf380(2,0x39,9,param_4,param_5,0x6f);
    unaff_r10 = 0x32323200;
    unaff_r11 = 0;
  }
  iVar1 = FUN_002bf4f8(0x39,0x75);
  FUN_002bd82c(*param_1,unaff_r11);
  FUN_002598f0(*param_1,*(short *)(iVar1 + 8) + param_4,*(short *)(iVar1 + 10) + param_5,0x70);
  if ((*(unsigned char *)(param_2 + 0x20) & 2) != 0) {
    iVar1 = FUN_002bf4f8(0x39,0x76);
    if (*(char *)(param_2 + 0x37) == '\0') {
      uVar5 = 0x840000;
    }
    else {
      uVar5 = 0xf33700;
    }
    FUN_002bd82c(param_1[2],uVar5);
    FUN_002598f0(param_1[2],*(short *)(iVar1 + 8) + param_4,*(short *)(iVar1 + 10) + param_5,0x70);
  }
  iVar1 = FUN_002bf4f8(0x39,0x77);
  FUN_002bd82c(param_1[1],unaff_r10);
  FUN_002598f0(param_1[1],*(short *)(iVar1 + 8) + param_4,*(short *)(iVar1 + 10) + param_5,0x70);
  FUN_002bf288(2,0x39,0x5a,param_4,param_5,0x70);
  uVar2 = (unsigned int)*(unsigned short *)(iStack_54 + 0x10);
  if (uVar2 != 0) {
    FUN_002b9024();
    iVar1 = FUN_002bf4f8(0x39,0x78);
    FUN_002b6940(*(unsigned short *)(uVar2 + 0x90),*(short *)(iVar1 + 8) + param_4,
                 *(short *)(iVar1 + 10) + param_5,0x71);
  }
  FUN_002be304(unaff_r10);
  FUN_002be624(auStack_40,0x1ebc78,*(unsigned char *)(param_2 + 0x36));
  iVar1 = FUN_002bf4f8(0x39,0x74);
  FUN_002bdf94(0,*(short *)(iVar1 + 8) + param_4,*(short *)(iVar1 + 10) + param_5,0,5,0x74,
               auStack_40);
  uVar2 = *(unsigned int *)(param_2 + 0x28) / 0xe10;
  uVar3 = *(unsigned int *)(param_2 + 0x28) % 0xe10;
  FUN_002be624(auStack_58,0x1ebc84,uVar3 % 0x3c);
  iVar1 = FUN_002bf4f8(0x39,0x7c);
  FUN_002bdf94(0,*(short *)(iVar1 + 8) + param_4,*(short *)(iVar1 + 10) + param_5,0,5,0x71,
               auStack_58);
  FUN_002be624(auStack_58,0x1ebc8c,0x3a);
  iVar1 = FUN_002bf4f8(0x39,0x79);
  FUN_002bdf94(0,*(short *)(iVar1 + 8) + param_4,*(short *)(iVar1 + 10) + param_5,0,5,0x71,
               auStack_58);
  FUN_002be624(auStack_58,0x1ebc84,uVar3 / 0x3c);
  iVar1 = FUN_002bf4f8(0x39,0x7e);
  FUN_002bdf94(0,*(short *)(iVar1 + 8) + param_4,*(short *)(iVar1 + 10) + param_5,0,5,0x71,
               auStack_58);
  FUN_002be624(auStack_58,0x1ebc8c,0x3a);
  iVar1 = FUN_002bf4f8(0x39,0x7a);
  FUN_002bdf94(0,*(short *)(iVar1 + 8) + param_4,*(short *)(iVar1 + 10) + param_5,0,5,0x71,
               auStack_58);
  iVar1 = 0;
  uVar3 = 4;
  do {
    uVar7 = uVar3 & 0xff;
    uVar6 = 1;
    if (uVar2 != 0) {
      if (uVar7 != 1) {
LAB_001ebc3c:
        if ((uVar3 & 1) == 0) {
          uVar6 = 10;
        }
        for (uVar4 = (uVar7 - 1) >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
          uVar6 = uVar6 * 100;
        }
      }
      if (uVar6 <= uVar2) {
        uVar6 = uVar2;
        if (uVar7 != 1) {
          if ((uVar3 & 1) == 0) {
            uVar6 = uVar2 / 10;
          }
          for (uVar4 = (uVar7 - 1) >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
            uVar7 = (unsigned int)(((unsigned long long)uVar6 / 10) * 0xcccccccd);
            uVar6 = (unsigned int)(((unsigned long long)uVar6 / 10) / 10);
          }
        }
        uVar6 = uVar6 % 10;
        if (uVar6 != 10) goto LAB_001ebcbc;
      }
      auStack_58[iVar1] = 0x20;
    }
    else {
      if (uVar7 != 1) goto LAB_001ebc3c;
      uVar6 = 0;
LAB_001ebcbc:
      FUN_002be624(auStack_58 + iVar1,0x1ebc78,uVar6,uVar7);
    }
    uVar3 = uVar3 - 1;
    iVar1 = iVar1 + 1;
    if ((int)uVar3 < 1) {
      auStack_58[iVar1] = 0;
      iVar1 = FUN_002bf4f8(0x39,0x82);
      FUN_002bdf94(0,*(short *)(iVar1 + 8) + param_4,*(short *)(iVar1 + 10) + param_5,0,5,0x71,
                   auStack_58);
      iVar1 = FUN_002bf4f8(0x39,0x89);
      FUN_00210d08(*(unsigned int *)(param_2 + 0x30),*(short *)(iVar1 + 8) + param_4,
                   *(short *)(iVar1 + 10) + param_5,0x71);
      FUN_002bed3c();
      FUN_002bf538();
      return;
    }
  } while( 1 );
}
*/
#include "common.h"
