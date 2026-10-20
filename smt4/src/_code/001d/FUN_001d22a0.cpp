/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d22a0` (_code @ 0x1d22a0, 0x180 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_001d22a0(unsigned int *param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int *piVar4;
  int temp_v2;
  int *piVar6;
  short *psVar7;
  int temp_v3;
  int temp_v4;
  int unaff_r11;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  piVar3 = (int *)*param_1;
  piVar4 = (int *)(piVar3[1] + param_2 * 0x14);
  if (piVar4[3] != 0) {
    if ((piVar4[4] & 0x10000000U) != 0) {
      param_1[2] = param_2;
      param_1[1] = 0x10000000;
      param_1[3] = piVar4[3];
      temp_v0 = *piVar3;
      temp_v2 = *piVar4;
      if (piVar4[3] != 0) {
        unaff_r11 = 4;
      }
      temp_v5 = 0;
      if (piVar4[3] != 0) {
        do {
          temp_v3 = *piVar3;
          psVar7 = (short *)(temp_v0 + temp_v2 + temp_v5 * 0x18);
          temp_v6 = temp_v5 + 1;
          temp_v1 = param_1[4] + temp_v5 * 0x14;
          piVar6 = (int *)(piVar3[1] + *psVar7 * 0x14);
          temp_v4 = *piVar6;
          *(unsigned int *)(temp_v1 + 4) = 0;
          temp_v3 = temp_v3 + temp_v4;
          *(int *)(temp_v1 + 8) = (int)*(short *)(temp_v3 + 0x12);
          *(int **)(temp_v1 + 0xc) = piVar6;
          *(int *)(temp_v1 + 0x10) = temp_v3;
          *(int *)(param_1[4] + unaff_r11 + temp_v5 * 0x14) = -(int)psVar7[1];
          temp_v5 = temp_v6;
        } while (temp_v6 < (unsigned int)piVar4[3]);
      }
    }
    else if ((piVar4[2] & 0xc0U) != 0) {
      param_1[1] = piVar4[2];
      param_1[2] = param_2;
      param_1[3] = 2;
      temp_v0 = param_1[4];
      temp_v2 = *piVar3;
      piVar4 = (int *)(piVar3[1] + param_2 * 0x14);
      temp_v1 = *piVar4;
      *(unsigned int *)(temp_v0 + 4) = 0;
      temp_v1 = temp_v1 + temp_v2;
      *(int *)(temp_v0 + 8) = (int)*(short *)(temp_v1 + 0x12);
      *(int **)(temp_v0 + 0xc) = piVar4;
      *(int *)(temp_v0 + 0x10) = temp_v1;
      temp_v2 = param_1[4];
      temp_v0 = *piVar3;
      piVar3 = (int *)(piVar3[1] + (param_2 + 1) * 0x14);
      temp_v1 = *piVar3;
      *(unsigned int *)(temp_v2 + 0x18) = 0;
      temp_v0 = temp_v0 + temp_v1;
      *(int *)(temp_v2 + 0x1c) = (int)*(short *)(temp_v0 + 0x12);
      *(int **)(temp_v2 + 0x20) = piVar3;
      *(int *)(temp_v2 + 0x24) = temp_v0;
    }
    else {
      param_1[1] = 0;
      param_1[2] = param_2;
      param_1[3] = 1;
      temp_v2 = *piVar3;
      temp_v0 = param_1[4];
      piVar3 = (int *)(piVar3[1] + param_2 * 0x14);
      temp_v1 = *piVar3;
      *(unsigned int *)(temp_v0 + 4) = 0;
      temp_v2 = temp_v2 + temp_v1;
      *(int *)(temp_v0 + 8) = (int)*(short *)(temp_v2 + 0x12);
      *(int **)(temp_v0 + 0xc) = piVar3;
      *(int *)(temp_v0 + 0x10) = temp_v2;
    }
    *(unsigned short *)(param_1 + 5) = 1;
  }
  return;
}

} /* extern "C" */
