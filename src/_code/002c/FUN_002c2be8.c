/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2be8` (_code @ 0x2c2be8, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */


void FUN_002c2be8(float *param_1,unsigned int param_2,int param_3,int param_4)

{
/* irregular: irregular input(s): in_cr1; 4 native warning(s); review required */
  int unaff_r4;
  unsigned int in_cr1;
  float temp_v0;
  float temp_v1;
  
  temp_v0 = 1.0f;
  temp_v1 = *param_1;
  if ((temp_v1 <= 1.0f) && (temp_v0 = temp_v1, temp_v1 < 0.0f)) {
    temp_v0 = 0.0f;
  }
  VectorFloatToUnsigned(temp_v0 * 255.0f + 0.5f,3);
  coprocessor_load(0,in_cr1,(unsigned int *)(param_3 - (int)param_1) + 0xff);
  *(unsigned int *)(param_3 - (int)param_1) = param_2;
  param_4 = param_4 + ((unaff_r4 << 6) >> 2) * 4;
  *(int *)(param_4 + 8) = unaff_r4 << 6;
  *(unsigned int *)(param_4 + 4) = 0;
  *(unsigned char *)(param_4 + 0x10) = 2;
  *(int *)(param_4 + 0xc) = param_3;
  return;
}
