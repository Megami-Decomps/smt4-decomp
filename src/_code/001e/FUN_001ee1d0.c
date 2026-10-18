/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ee1d0` (_code @ 0x1ee1d0, 0x120 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002918c4. */


void FUN_001ee1d0(int param_1,int param_2)

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
  if ('\x02' < *(char *)(param_1 + 0x2e6)) {
    *(unsigned char *)(param_1 + 0x2e6) = 4;
  }
  temp_v0 = (int)*(char *)(param_1 + 0x2e6);
  if (temp_v0 + 1 < 4) {
    while (temp_v1 = *(int *)(param_2 + (temp_v0 + temp_v2) * 0x44 + 0x1c) -
                   *(int *)(param_2 + temp_v0 * 0x44 + 0x1c), *(int *)(param_1 + 0x328) = temp_v1,
          temp_v1 < 1) {
      temp_v2 = temp_v2 + 1;
      if (temp_v0 + temp_v2 >= 4) {
        return;
      }
    }
    temp_v1 = param_1 + (temp_v0 + temp_v2) * 0x44;
    temp_v3 = *(short *)(temp_v1 + 0x3c) != 0;
    temp_v0 = 0;
    if (temp_v3) {
      temp_v0 = *(int *)(temp_v1 + 0x50);
    }
    if (temp_v3 && 0 < temp_v0) {
      FUN_002918c4(2,temp_v0,1);
      temp_v0 = param_1 + (*(char *)(param_1 + 0x2e6) + temp_v2) * 0x44;
      *(short *)(temp_v0 + 0x3c) = *(short *)(temp_v0 + 0x3c) - (short)(int)in_s0;
    }
    temp_v2 = *(char *)(param_1 + 0x2e6) + temp_v2;
    temp_v1 = param_1 + *(char *)(param_1 + 0x2e6) * 0x44;
    temp_v0 = param_1 + temp_v2 * 0x44;
    temp_v6 = (float)VectorSignedToFloat(*(int *)(temp_v0 + 0x1c) - *(int *)(temp_v1 + 0x1c),
                                       (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v4 = (float)VectorSignedToFloat((int)*(short *)(temp_v0 + 0x3c) - (int)*(short *)(temp_v1 + 0x3c)
                                       ,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(float *)(param_1 + 0x22c) = temp_v4 / temp_v6;
    temp_v5 = VectorSignedToFloat((int)*(short *)(temp_v0 + 0x3c),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(param_1 + 600) = temp_v5;
    *(char *)(param_1 + 0x2e6) = (char)temp_v2;
  }
  return;
}
