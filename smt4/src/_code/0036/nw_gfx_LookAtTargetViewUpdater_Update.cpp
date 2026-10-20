/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_LookAtTargetViewUpdater_Update` (_code @ 0x36b19c, 0x1c0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_math_ARMv6_MTX34ToMTX33Asm(unsigned char [40], unsigned int);
int nn_math_ARMv6_VEC3TransformAsm_2A87B4(float *, unsigned char [40]);

/* stack frame of param_4: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_4_stack;

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: nn_math_ARMv6_MTX34ToMTX33Asm. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2A87B4. */


void nw_gfx_LookAtTargetViewUpdater_Update
               (int param_1,float *param_2,unsigned int param_3,float *param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  unsigned char temp_v17 [40];
  
  temp_v0 = *(int *)(param_1 + 0xc);
  temp_v1 = *(unsigned int *)(temp_v0 + 4);
  temp_v11 = *(float *)(temp_v0 + 8);
  temp_v12 = *(float *)(temp_v0 + 0xc);
  temp_v13 = *(float *)(temp_v0 + 0x10);
  temp_v0 = *(int *)(param_1 + 0xc);
  temp_v14 = *(float *)(temp_v0 + 0x14);
  temp_v15 = *(float *)(temp_v0 + 0x18);
  temp_v16 = *(float *)(temp_v0 + 0x1c);
  if ((temp_v1 & 7) != 0) {
    nn_math_ARMv6_MTX34ToMTX33Asm(temp_v17,param_3);
    if ((~temp_v1 & 1) == 0) {
      nn_math_ARMv6_VEC3TransformAsm_2A87B4(&temp_v14,temp_v17);
    }
    if ((~temp_v1 & 2) == 0) {
      nn_math_ARMv6_VEC3TransformAsm_2A87B4(&temp_v11,temp_v17);
    }
    if ((~temp_v1 & 4) == 0) {
      temp_v11 = temp_v11 + *param_4;
      temp_v12 = temp_v12 + param_4[1];
      temp_v13 = temp_v13 + param_4[2];
    }
  }
  temp_v7 = *param_4;
  temp_v5 = param_4[1];
  temp_v6 = param_4[2];
  temp_v11 = temp_v7 - temp_v11;
  temp_v12 = temp_v5 - temp_v12;
  temp_v13 = temp_v6 - temp_v13;
  temp_v2 = 1.0f / romwright_sqrt_4(temp_v11 * temp_v11 + temp_v12 * temp_v12 + temp_v13 * temp_v13);
  temp_v13 = temp_v13 * temp_v2;
  temp_v11 = temp_v11 * temp_v2;
  temp_v12 = temp_v12 * temp_v2;
  temp_v3 = temp_v15 * temp_v13 - temp_v16 * temp_v12;
  temp_v4 = temp_v16 * temp_v11 - temp_v14 * temp_v13;
  temp_v2 = temp_v14 * temp_v12 - temp_v15 * temp_v11;
  temp_v8 = 1.0f / romwright_sqrt_4(temp_v3 * temp_v3 + temp_v4 * temp_v4 + temp_v2 * temp_v2);
  temp_v2 = temp_v2 * temp_v8;
  temp_v3 = temp_v3 * temp_v8;
  temp_v4 = temp_v4 * temp_v8;
  param_2[2] = temp_v2;
  *param_2 = temp_v3;
  param_2[1] = temp_v4;
  param_2[8] = temp_v11;
  param_2[9] = temp_v12;
  param_2[10] = temp_v13;
  temp_v8 = temp_v12 * temp_v2 - temp_v13 * temp_v4;
  temp_v9 = temp_v13 * temp_v3 - temp_v11 * temp_v2;
  temp_v10 = temp_v11 * temp_v4 - temp_v12 * temp_v3;
  param_2[4] = temp_v8;
  param_2[5] = temp_v9;
  param_2[6] = temp_v10;
  param_2[3] = -(temp_v7 * temp_v3 + temp_v5 * temp_v4 + temp_v6 * temp_v2);
  param_2[7] = -(temp_v7 * temp_v8 + temp_v5 * temp_v9 + temp_v6 * temp_v10);
  param_2[0xb] = -(temp_v7 * temp_v11 + temp_v5 * temp_v12 + temp_v6 * temp_v13);
  return;
}

} /* extern "C" */
