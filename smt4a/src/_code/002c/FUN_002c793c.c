/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c793c` (_code @ 0x2c793c, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002039d0. */


void FUN_002c793c(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v4;
  unsigned int temp_v5;
  float temp_v6;
  
  temp_v2 = 1;
  if ('\x02' < *(char *)(param_1 + 0x2e9)) {
    *(unsigned char *)(param_1 + 0x2e9) = 4;
  }
  temp_v0 = (int)*(char *)(param_1 + 0x2e9);
  if (temp_v0 + 1 < 4) {
    while (temp_v1 = *(int *)(param_2 + (temp_v0 + temp_v2) * 0x44 + 0x30) -
                   *(int *)(param_2 + temp_v0 * 0x44 + 0x30), *(int *)(param_1 + 0x334) = temp_v1,
          temp_v1 < 1) {
      temp_v2 = temp_v2 + 1;
      if (temp_v0 + temp_v2 >= 4) {
        return;
      }
    }
    temp_v1 = param_1 + (temp_v0 + temp_v2) * 0x44;
    temp_v3 = *(short *)(temp_v1 + 0x4c) != 0;
    temp_v0 = 0;
    if (temp_v3) {
      temp_v0 = *(int *)(temp_v1 + 0x50);
    }
    if (temp_v3 && 0 < temp_v0) {
      FUN_002039d0(2,temp_v0,1);
      temp_v0 = param_1 + (*(char *)(param_1 + 0x2e9) + temp_v2) * 0x44;
      *(short *)(temp_v0 + 0x4c) = *(short *)(temp_v0 + 0x4c) - (short)(int)in_s0;
    }
    temp_v2 = *(char *)(param_1 + 0x2e9) + temp_v2;
    temp_v1 = param_1 + *(char *)(param_1 + 0x2e9) * 0x44;
    temp_v0 = param_1 + temp_v2 * 0x44;
    temp_v6 = (float)VectorSignedToFloat(*(int *)(temp_v0 + 0x30) - *(int *)(temp_v1 + 0x30),
                                       (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v4 = (float)VectorSignedToFloat((int)*(short *)(temp_v0 + 0x4c) - (int)*(short *)(temp_v1 + 0x4c)
                                       ,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(float *)(param_1 + 0x238) = temp_v4 / temp_v6;
    temp_v5 = VectorSignedToFloat((int)*(short *)(temp_v0 + 0x4c),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(param_1 + 0x264) = temp_v5;
    *(char *)(param_1 + 0x2e9) = (char)temp_v2;
  }
  return;
}
