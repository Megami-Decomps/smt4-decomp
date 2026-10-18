/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003931fc` (_code @ 0x3931fc, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00514500. */
/* Supplied declaration required: FUN_00514540. */


void FUN_003931fc(int param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  
  piVar4 = *(int **)(param_1 + 0x30);
  temp_v1 = *(int *)(param_1 + 0x34);
  temp_v0 = *piVar4;
  temp_v4 = *(int *)(temp_v1 + 0x34);
  FUN_00514540(0);
  temp_v9 = 1.0f;
  temp_v8 = ((1.0f - *(float *)(temp_v1 + 0x90)) + in_s0 * *(float *)(temp_v1 + 0x90)) *
           *(float *)(temp_v1 + 0x8c);
  if (temp_v4 >= 1) {
    FUN_00514540(0);
    temp_v5 = *(float *)(temp_v1 + 0x98);
    temp_v7 = *(float *)(temp_v1 + 0x94);
    piVar4[1] = (int)temp_v8;
    temp_v6 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
    piVar4[2] = (int)((((temp_v9 - temp_v5) + in_s0 * temp_v5) * temp_v7 - temp_v8) / temp_v6);
  }
  else {
    piVar4[1] = (int)temp_v8;
    piVar4[2] = 0;
  }
  temp_v3 = *(unsigned int *)(temp_v1 + 0x38);
  temp_v2 = 0;
  if (temp_v2 < temp_v3) {
    do {
      temp_v1 = 0;
      FUN_00514500();
      temp_v2 = temp_v2 + 1;
      *(int *)(temp_v0 + 0x14) = ~(temp_v1 % 8);
      temp_v0 = temp_v0 + 0x30;
    } while (temp_v2 < temp_v3);
  }
  return;
}
