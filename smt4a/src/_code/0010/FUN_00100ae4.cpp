/* NON_MATCHING: found outside every function: branched to by FUN_00135b64; not written yet. */
/* romwright 0.5.0 decompilation of FUN_00100ae4 for reference (not compiled; its own view of the boundaries):

void FUN_00100ae4(unsigned char *param_1,int param_2,unsigned int *param_3,unsigned int *param_4)

{
  int iVar1;
  unsigned int unaff_r4;
  unsigned int unaff_r5;
  unsigned int uVar2;
  unsigned int unaff_r6;
  int iVar3;
  unsigned int unaff_r7;
  int iVar4;
  unsigned int unaff_r8;
  unsigned int unaff_r11;
  unsigned int in_lr;
  unsigned char in_NG;
  unsigned char in_ZR;
  unsigned char in_CY;
  unsigned char in_OV;
  
  if (in_OV) {
    *param_3 = in_lr;
    param_3[-1] = (unsigned int)register0x00000054;
    param_3[-2] = unaff_r11;
    param_3[-3] = unaff_r4;
    param_3[-4] = (unsigned int)param_1;
  }
  if (in_ZR) {
    unaff_r6 = (unsigned int)(unsigned char)param_4[-0x280];
  }
  if (!in_OV) {
    register0x00000054 = (BADSPACEBASE *)(unaff_r8 & (param_2 << 10));
  }
  if (in_ZR) {
    in_lr = (unsigned int)*(unsigned char *)((int)param_4 + 10);
  }
  if (in_CY && !in_ZR) {
    register0x00000054 = (BADSPACEBASE *)(unaff_r8 & (param_2 << 10));
  }
  if (in_ZR) {
    in_lr = *param_4;
  }
  else {
    *(unsigned char *)((int)param_3 * 0x401) = 0;
  }
  if (in_OV) {
    param_1 = (unsigned char *)(unaff_r8 & ((int)param_3 >> (unaff_r6 & 0xff)));
  }
  if (in_NG) {
    param_1 = param_1 + -param_2;
    param_3 = (unsigned int *)(unsigned int)*param_1;
  }
  *(unsigned int *)((int)register0x00000054 - 4) = in_lr;
  *(unsigned int *)((int)register0x00000054 - 8) = unaff_r7;
  *(unsigned int *)((int)register0x00000054 - 0xc) = unaff_r6;
  *(unsigned int *)((int)register0x00000054 - 0x10) = unaff_r5;
  *(unsigned int *)((int)register0x00000054 - 0x14) = unaff_r4;
  *(unsigned int **)((int)register0x00000054 - 0x18) = param_3;
  *(int *)((int)register0x00000054 - 0x1c) = param_2;
  *(unsigned char **)((int)register0x00000054 - 0x20) = param_1;
  iVar4 = 0;
  iVar3 = 0;
  *(unsigned int *)((int)register0x00000054 - 0x38) = 0;
  *(unsigned int *)((int)register0x00000054 - 0x34) = 0;
  while (((*(int *)param_1 << 0x1a >= 0 || (*(int *)(param_1 + 0x1c) > iVar4)) &&
         (((int)param_3 > iVar3 ||
          (*(short *)(*(int *)((int)register0x00000054 - 0x1c) + iVar3 * 2) != 0))))) {
    iVar1 = FUN_002e3f88((unsigned char *)((int)register0x00000054 - 0x30),
                         *(unsigned short *)(*(int *)((int)register0x00000054 - 0x1c) + iVar3 * 2),
                         (unsigned char *)((int)register0x00000054 - 0x38));
    if (iVar1 != -1) {
      if ((*(int *)param_1 << 0x1a < 0) && (*(unsigned int *)(param_1 + 0x1c) < (unsigned int)(iVar4 + iVar1)))
      break;
      iVar4 = iVar4 + iVar1;
    }
    iVar3 = iVar3 + 1;
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - iVar4;
  FUN_002e31ea(param_1);
  *(unsigned int *)((int)register0x00000054 - 0x38) = 0;
  *(unsigned int *)((int)register0x00000054 - 0x34) = 0;
  iVar1 = 0;
  while (*(int *)((int)register0x00000054 - 0x28) = iVar1, iVar1 < iVar3) {
    iVar1 = FUN_002e3f88((unsigned char *)((int)register0x00000054 - 0x30),
                         *(unsigned short *)(*(int *)((int)register0x00000054 - 0x1c) + iVar1 * 2),
                         (unsigned char *)((int)register0x00000054 - 0x38));
    *(int *)((int)register0x00000054 - 0x24) = iVar1;
    if (iVar1 != -1) {
      for (uVar2 = 0; uVar2 < *(unsigned int *)((int)register0x00000054 - 0x24); uVar2 = uVar2 + 1) {
        (**(code **)(param_1 + 4))
                  (*(unsigned char *)((int)register0x00000054 + (uVar2 - 0x30)),
                   *(unsigned int *)(param_1 + 8));
      }
    }
    iVar1 = *(int *)((int)register0x00000054 - 0x28) + 1;
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar4;
  FUN_002e3216(param_1);
  return;
}
*/
#include "common.h"
