/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_TransformAnimBlendOp_BlendRotateQuaternion` (_code @ 0x3e42dc, 0x18c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_3_stack;

/* Supplied declaration required: FUN_0028250c. */
/* Supplied declaration required: FUN_0028836c. */
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34ToQUATC_FAST. */


void nw_gfx_TransformAnimBlendOp_BlendRotateQuaternion
               (unsigned int param_1,float *param_2,float *param_3)

{
/* irregular: irregular input(s): in_s0; 5 native warning(s); review required */
  float *pfVar1;
  float in_s0;
  float temp_v0;
  float temp_v1;
  float temp_v2;
  unsigned long long temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  
  if (in_s0 != -1.0f) {
    pfVar1 = param_2 + 5;
    if ((~(unsigned int)param_3[0xf] & 0x40000000) != 0) {
      nn_math_ARMv6_MTX34ToQUATC_FAST(&temp_v8);
    }
    else {
      temp_v8 = *param_3;
      temp_v9 = param_3[1];
      temp_v10 = param_3[2];
      temp_v11 = param_3[4];
    }
    if ((~(unsigned int)param_2[0xf] & 0x10) != 0) {
      temp_v1 = 0.0f;
      temp_v4 = param_2[4];
      temp_v0 = *pfVar1 + in_s0;
      temp_v2 = *param_2;
      temp_v3 = *(unsigned long long *)(param_2 + 1);
      *pfVar1 = temp_v0;
      if (temp_v0 != 0.0f) {
        temp_v1 = in_s0 / temp_v0;
      }
      temp_v6 = 1.0f;
      temp_v0 = temp_v2 * temp_v8 + (float)temp_v3 * temp_v9 +
              (float)((unsigned long long)temp_v3 >> 0x20) * temp_v10 + temp_v4 * temp_v11;
      temp_v5 = temp_v6;
      if (temp_v0 < 0.0f) {
        temp_v0 = -temp_v0;
        temp_v5 = -1.0f;
      }
      if ((int)temp_v0 >= 0x3f7fff59) {
        temp_v5 = temp_v5 * temp_v1;
        temp_v6 = 1.0f - temp_v1;
      }
      else {
        FUN_0028836c();
        temp_v7 = temp_v0;
        FUN_0028250c();
        temp_v6 = (temp_v6 - temp_v1) * temp_v7;
        FUN_0028250c();
        temp_v6 = temp_v6 / temp_v0;
        temp_v1 = temp_v1 * temp_v7;
        FUN_0028250c();
        temp_v5 = (temp_v1 / temp_v0) * temp_v5;
      }
      temp_v0 = (float)((unsigned long long)temp_v3 >> 0x20) * temp_v6 + temp_v5 * temp_v10;
      temp_v1 = temp_v2 * temp_v6 + temp_v5 * temp_v8;
      temp_v2 = (float)temp_v3 * temp_v6 + temp_v5 * temp_v9;
      temp_v4 = temp_v4 * temp_v6 + temp_v5 * temp_v11;
    }
    else {
      *pfVar1 = in_s0;
      temp_v0 = temp_v10;
      temp_v1 = temp_v8;
      temp_v2 = temp_v9;
      temp_v4 = temp_v11;
    }
    param_2[2] = temp_v0;
    param_2[4] = temp_v4;
    *param_2 = temp_v1;
    param_2[1] = temp_v2;
    param_2[0xf] = (float)((unsigned int)param_2[0xf] & 0xffffffef);
    nn_math_ARMv6_MTX34CopyAsm(param_2);
    param_2[0xf] = (float)((unsigned int)param_2[0xf] | 0x800);
  }
  return;
}
