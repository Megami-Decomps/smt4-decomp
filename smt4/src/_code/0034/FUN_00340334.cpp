/* NON_MATCHING: entry consumes four VFP words with vldmia sp! without creating a frame, then falls through a linker-NOP into FUN_00340350; its inherited-stack calling boundary remains unresolved. */
/* romwright 0.5.0 decompilation of FUN_00340334 for reference (not compiled; its own view of the boundaries):

void FUN_00340334(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6,unsigned int param_7)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  unsigned int in_fpscr;
  unsigned int in_s0;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  *(unsigned int *)(param_1 + 0x40) = param_2;
  *(unsigned int *)(param_1 + 0x44) = param_3;
  *(unsigned int *)(param_1 + 0x48) = param_4;
  *(unsigned int *)(param_1 + 0x58) = in_s0;
  *(unsigned int *)(param_1 + 0x4c) = param_5;
  *(unsigned int *)(param_1 + 0x50) = param_6;
  *(unsigned int *)(param_1 + 0x54) = param_7;
  fVar4 = (float)VectorSignedToFloat(*(unsigned int *)(param_1 + 0x50),(unsigned char)(in_fpscr >> 0x16) & 3);
  fVar8 = (float)VectorSignedToFloat(*(unsigned int *)(param_1 + 0x54),(unsigned char)(in_fpscr >> 0x16) & 3);
  fVar7 = (float)VectorSignedToFloat(*(unsigned int *)(param_1 + 0x44),(unsigned char)(in_fpscr >> 0x16) & 3);
  fVar6 = (float)VectorSignedToFloat(*(unsigned int *)(param_1 + 0x48),(unsigned char)(in_fpscr >> 0x16) & 3);
  fVar7 = fVar7 * 0.003921569f;
  fVar6 = fVar6 * 0.003921569f;
  fVar9 = fVar4 * 0.001f + 25570.0f;
  fVar5 = (float)VectorSignedToFloat(*(unsigned int *)(param_1 + 0x4c),(unsigned char)(in_fpscr >> 0x16) & 3);
  fVar4 = fVar4 * 0.001f + fVar8 * 0.001f + 25570.0f;
  fVar5 = fVar5 * 0.003921569f;
  iVar1 = FUN_001db5b8(0);
  iVar1 = *(int *)(iVar1 + 8);
  *(float *)(iVar1 + 0xbc) = fVar5;
  *(unsigned int *)(iVar1 + 0xc0) = 0x3f800000;
  *(float *)(iVar1 + 0xb4) = fVar7;
  *(float *)(iVar1 + 0xb8) = fVar6;
  piVar2 = (int *)(iVar1 + 200);
  iVar1 = *piVar2;
  if (iVar1 != 0) {
    piVar2 = (int *)((int)piVar2 + iVar1);
  }
  iVar3 = *(int *)(param_1 + 0x40);
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  if (iVar3 == 0) {
    *piVar2 = 1;
  }
  else {
    if (iVar3 == 1) {
      iVar1 = 2;
    }
    else {
      if (iVar3 != 2) {
        piVar2[1] = (int)fVar9;
        piVar2[2] = (int)fVar4;
        piVar2[3] = *(int *)(param_1 + 0x58);
        return;
      }
      iVar1 = 3;
    }
    *piVar2 = iVar1;
  }
  piVar2[1] = (int)fVar9;
  piVar2[2] = (int)fVar4;
  piVar2[3] = *(int *)(param_1 + 0x58);
  return;
}
*/
#include "common.h"
