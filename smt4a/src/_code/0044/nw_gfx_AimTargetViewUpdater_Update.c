/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_AimTargetViewUpdater_Update` (_code @ 0x44c148, 0x2c4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} param_4_stack;

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Supplied declaration required: FUN_0018a924. */
/* Supplied declaration required: FUN_00467be4. */
/* Supplied declaration required: nn_math_ARMv6_MTX34ToMTX33Asm. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2A87B4. */


void nw_gfx_AimTargetViewUpdater_Update
               (int param_1,float *param_2,unsigned int param_3,float *param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  unsigned long long temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  unsigned char temp_v18 [36];
  float temp_v19;
  float temp_v20 [9];
  
  temp_v0 = *(int *)(param_1 + 0xc);
  temp_v1 = *(unsigned int *)(temp_v0 + 4);
  if ((temp_v1 & 3) != 0) {
    temp_v7 = *param_4 - *(float *)(temp_v0 + 8);
    temp_v10 = 0.0f;
    temp_v8 = param_4[1] - *(float *)(temp_v0 + 0xc);
    temp_v5 = param_4[2] - *(float *)(temp_v0 + 0x10);
    if (temp_v7 != 0.0f || temp_v5 != 0.0f) {
      nn_math_ARMv6_MTX34ToMTX33Asm(temp_v18,param_3);
      temp_v2 = -temp_v7;
      temp_v3 = 1.0f / romwright_sqrt_4(temp_v7 * temp_v7 + temp_v8 * temp_v8 + temp_v5 * temp_v5);
      temp_v4 = 1.0f / romwright_sqrt_4(temp_v5 * temp_v5 + temp_v10 * temp_v10 + temp_v2 * temp_v2);
      temp_v6 = temp_v5 * temp_v4;
      temp_v2 = temp_v2 * temp_v4;
      temp_v11 = temp_v5 * temp_v3 * temp_v6 - temp_v7 * temp_v3 * temp_v2;
      temp_v7 = temp_v7 * temp_v3 * temp_v10 * temp_v4 - temp_v8 * temp_v3 * temp_v6;
      temp_v9 = CONCAT44(0x3f800000,temp_v8 * temp_v3 * temp_v2 - temp_v5 * temp_v3 * temp_v10 * temp_v4);
      FUN_0018a924(&temp_v19,temp_v20);
      temp_v16 = temp_v11 * temp_v20[0];
      temp_v15 = (float)temp_v9 * temp_v20[0] - temp_v19 * temp_v6;
      temp_v17 = temp_v7 * temp_v20[0] - temp_v19 * temp_v2;
      temp_v0 = *(int *)(param_1 + 0xc);
      temp_v12 = *(float *)(temp_v0 + 8);
      temp_v13 = *(float *)(temp_v0 + 0xc);
      temp_v14 = *(float *)(temp_v0 + 0x10);
      if ((~temp_v1 & 1) == 0) {
        nn_math_ARMv6_VEC3TransformAsm_2A87B4(&temp_v12,temp_v18);
        nn_math_ARMv6_VEC3TransformAsm_2A87B4(&temp_v15,temp_v18);
      }
      if ((~temp_v1 & 2) == 0) {
        temp_v12 = temp_v12 + *param_4;
        temp_v13 = temp_v13 + param_4[1];
        temp_v14 = temp_v14 + param_4[2];
      }
      temp_v3 = *param_4;
      temp_v10 = param_4[1];
      temp_v2 = param_4[2];
      temp_v12 = temp_v3 - temp_v12;
      temp_v13 = temp_v10 - temp_v13;
      temp_v14 = temp_v2 - temp_v14;
      temp_v4 = (float)((unsigned long long)temp_v9 >> 0x20);
      temp_v5 = temp_v4 / romwright_sqrt_4(temp_v12 * temp_v12 + temp_v13 * temp_v13 + temp_v14 * temp_v14);
      temp_v14 = temp_v14 * temp_v5;
      temp_v13 = temp_v13 * temp_v5;
      temp_v12 = temp_v12 * temp_v5;
      temp_v8 = temp_v16 * temp_v14 - temp_v17 * temp_v13;
      temp_v7 = temp_v15 * temp_v13 - temp_v16 * temp_v12;
      temp_v5 = temp_v17 * temp_v12 - temp_v15 * temp_v14;
      temp_v4 = temp_v4 / romwright_sqrt_4(temp_v8 * temp_v8 + temp_v5 * temp_v5 + temp_v7 * temp_v7);
      temp_v7 = temp_v7 * temp_v4;
      temp_v5 = temp_v5 * temp_v4;
      temp_v8 = temp_v8 * temp_v4;
      *param_2 = temp_v8;
      param_2[1] = temp_v5;
      param_2[2] = temp_v7;
      temp_v11 = temp_v13 * temp_v7 - temp_v14 * temp_v5;
      temp_v6 = temp_v12 * temp_v5 - temp_v13 * temp_v8;
      temp_v4 = temp_v14 * temp_v8 - temp_v12 * temp_v7;
      param_2[4] = temp_v11;
      param_2[8] = temp_v12;
      param_2[5] = temp_v4;
      param_2[6] = temp_v6;
      param_2[9] = temp_v13;
      param_2[10] = temp_v14;
      param_2[3] = -(temp_v3 * temp_v8 + temp_v10 * temp_v5 + temp_v2 * temp_v7);
      param_2[7] = -(temp_v3 * temp_v11 + temp_v10 * temp_v4 + temp_v2 * temp_v6);
      param_2[0xb] = -(temp_v3 * temp_v12 + temp_v10 * temp_v13 + temp_v2 * temp_v14);
      return;
    }
    temp_v0 = *(int *)(param_1 + 0xc);
  }
  FUN_00467be4(param_2,param_4,temp_v0 + 8);
  return;
}
