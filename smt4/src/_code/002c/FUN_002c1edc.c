/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1edc` (_code @ 0x2c1edc, 0xd0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Supplied declaration required: FUN_002b77b0. */
/* Supplied declaration required: FUN_002b77f4. */
/* Supplied declaration required: nn_math_ARMv6_MTX34LookAtC_FAST. */


int FUN_002c1edc(int param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4)

{
/* irregular: irregular input(s): in_cr1; 4 native warning(s); review required */
  unsigned int in_cr1;
  float temp_v0;
  unsigned int temp_v1;
  float temp_v2;
  unsigned int temp_v3;
  float temp_v4;
  
  temp_v1 = param_2[1];
  temp_v3 = param_2[2];
  *(unsigned int *)(param_1 + 4) = *param_2;
  *(unsigned int *)(param_1 + 8) = temp_v1;
  *(unsigned int *)(param_1 + 0xc) = temp_v3;
  temp_v1 = param_3[1];
  temp_v3 = param_3[2];
  *(unsigned int *)(param_1 + 0x10) = *param_3;
  *(unsigned int *)(param_1 + 0x14) = temp_v1;
  *(unsigned int *)(param_1 + 0x18) = temp_v3;
  temp_v1 = param_4[1];
  temp_v3 = param_4[2];
  *(unsigned int *)(param_1 + 0x1c) = *param_4;
  *(unsigned int *)(param_1 + 0x20) = temp_v1;
  *(unsigned int *)(param_1 + 0x24) = temp_v3;
  *(unsigned char *)(param_1 + 1) = 0;
  temp_v0 = *(float *)(param_1 + 4) - *(float *)(param_1 + 0x10);
  temp_v2 = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x14);
  temp_v4 = *(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x18);
  if (temp_v0 * temp_v0 + temp_v2 * temp_v2 + temp_v4 * temp_v4 == 0.0f) {
    *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + 1.0f;
  }
  nn_math_ARMv6_MTX34LookAtC_FAST(param_1 + 0x38,param_1 + 4,param_1 + 0x1c,param_1 + 0x10);
  FUN_002b77f4(param_1 + 0x128,param_1 + 0x38);
  FUN_002b77b0(param_1 + 0x38,param_1 + 0x68,0x30);
  coprocessor_storelong(0,in_cr1,param_1);
  return param_1 << 2;
}
