/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00340334` (_code @ 0x340334, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_001db5b8(unsigned int);


void FUN_00340334(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6,unsigned int param_7)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 3 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int in_fpscr;
  unsigned int in_s0;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  
  *(unsigned int *)(param_1 + 0x40) = param_2;
  *(unsigned int *)(param_1 + 0x44) = param_3;
  *(unsigned int *)(param_1 + 0x48) = param_4;
  *(unsigned int *)(param_1 + 0x58) = in_s0;
  *(unsigned int *)(param_1 + 0x4c) = param_5;
  *(unsigned int *)(param_1 + 0x50) = param_6;
  *(unsigned int *)(param_1 + 0x54) = param_7;
  temp_v2 = (float)VectorSignedToFloat(*(unsigned int *)(param_1 + 0x50),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = (float)VectorSignedToFloat(*(unsigned int *)(param_1 + 0x54),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v5 = (float)VectorSignedToFloat(*(unsigned int *)(param_1 + 0x44),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v4 = (float)VectorSignedToFloat(*(unsigned int *)(param_1 + 0x48),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v5 = temp_v5 * 0.003921569f;
  temp_v4 = temp_v4 * 0.003921569f;
  temp_v7 = temp_v2 * 0.001f + 25570.0f;
  temp_v3 = (float)VectorSignedToFloat(*(unsigned int *)(param_1 + 0x4c),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = temp_v2 * 0.001f + temp_v6 * 0.001f + 25570.0f;
  temp_v3 = temp_v3 * 0.003921569f;
  temp_v0 = FUN_001db5b8(0);
  temp_v0 = *(int *)(temp_v0 + 8);
  *(float *)(temp_v0 + 0xbc) = temp_v3;
  *(unsigned int *)(temp_v0 + 0xc0) = 0x3f800000;
  *(float *)(temp_v0 + 0xb4) = temp_v5;
  *(float *)(temp_v0 + 0xb8) = temp_v4;
  piVar2 = (int *)(temp_v0 + 200);
  temp_v0 = *piVar2;
  if (temp_v0 != 0) {
    piVar2 = (int *)((int)piVar2 + temp_v0);
  }
  temp_v1 = *(int *)(param_1 + 0x40);
  if (temp_v0 == 0) {
    piVar2 = (int *)0x0;
  }
  if (temp_v1 == 0) {
    *piVar2 = 1;
  }
  else {
    if (temp_v1 == 1) {
      temp_v0 = 2;
    }
    else {
      if (temp_v1 != 2) {
        piVar2[1] = (int)temp_v7;
        piVar2[2] = (int)temp_v2;
        piVar2[3] = *(int *)(param_1 + 0x58);
        return;
      }
      temp_v0 = 3;
    }
    *piVar2 = temp_v0;
  }
  piVar2[1] = (int)temp_v7;
  piVar2[2] = (int)temp_v2;
  piVar2[3] = *(int *)(param_1 + 0x58);
  return;
}
