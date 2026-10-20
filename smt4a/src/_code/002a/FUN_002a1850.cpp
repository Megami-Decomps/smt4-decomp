/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a1850` (_code @ 0x2a1850, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_math_ARMv6_VEC3TransformAsm_2AD44C(float *, int, unsigned int);

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
} param_4_stack;

/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


void FUN_002a1850(float *param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8 [4];
  
  temp_v8[0] = 400.0f;
  temp_v8[1] = 320.0f;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v5,param_3 + 0x38,param_4);
  temp_v2 = *(float *)(param_3 + 0xac);
  temp_v3 = *(float *)(param_3 + 0xb0);
  temp_v1 = *(float *)(param_3 + 0xb4);
  temp_v4 = *(float *)(param_3 + 0xa8);
  temp_v0 = 1.0f / (*(float *)(param_3 + 0xdc) * temp_v6 + *(float *)(param_3 + 0xe0) * temp_v7 +
                *(float *)(param_3 + 0xe4) + *(float *)(param_3 + 0xd8) * temp_v5);
  *param_1 = temp_v8[param_2] *
             (1.0f - (*(float *)(param_3 + 0xbc) * temp_v6 + *(float *)(param_3 + 0xc0) * temp_v7 +
                    *(float *)(param_3 + 0xc4) + *(float *)(param_3 + 0xb8) * temp_v5) * temp_v0) *
             0.5f;
  param_1[1] = (1.0f - (temp_v2 * temp_v6 + temp_v3 * temp_v7 + temp_v1 + temp_v4 * temp_v5) * temp_v0) *
               0.5f * 240.0f;
  param_1[2] = temp_v7;
  return;
}

} /* extern "C" */
