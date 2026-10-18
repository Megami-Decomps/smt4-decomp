/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_BillboardUpdater_CalculateLocalMatrix` (_code @ 0x503630, 0x210 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00503630_arg2 fn_00503630_arg2;
struct fn_00503630_arg2 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    unsigned char pad_0x10[0x4];
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0x4];
    undefined4 field_0x24; /* +0x24 */
    undefined4 field_0x28; /* +0x28 */
    undefined4 field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0xc];
    uint field_0x3c; /* +0x3c */
};

/* stack frame of param_4: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
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
/* Supplied declaration required: nn_math_VEC3Cross. */
/* Supplied declaration required: nn_math_VEC3SafeNormalize. */


void nw_gfx_BillboardUpdater_CalculateLocalMatrix
               (unsigned int param_1,unsigned int *param_2,fn_00503630_arg2 *param_3,int param_4)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3; 7 native warning(s); review required */
  float *pfVar1;
  unsigned int temp_v0;
  float *pfVar3;
  float *pfVar4;
  float in_s0;
  float in_s1;
  float temp_v1;
  float in_s2;
  unsigned int in_s3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int *puStack_20;
  fn_00503630_arg2 *pfStack_1c;
  int iStack_18;
  float *pfVar5;
  
  pfVar4 = &temp_v13;
  pfVar5 = &temp_v13;
  pfVar1 = (float *)&temp_v4;
  pfVar3 = (float *)&temp_v4;
  temp_v3 = 0x3f800000;
  temp_v2 = 0;
  temp_v1 = 1.0f / romwright_sqrt_4(in_s0 * in_s0 + in_s1 * in_s1 + in_s2 * in_s2);
  temp_v13 = in_s0 * temp_v1;
  temp_v14 = in_s1 * temp_v1;
  (*(unsigned long long *)&temp_v15) = CONCAT44(in_s3,in_s2 * temp_v1);
  uStack_24 = param_1;
  puStack_20 = param_2;
  pfStack_1c = param_3;
  iStack_18 = param_4;
  if ((~param_3->field_0x3c & 0x20) != 0) {
    temp_v4 = param_3->field_0x4;
    temp_v5 = param_3->field_0x14;
    temp_v6 = param_3->field_0x24;
    temp_v7 = 0x3f800000;
    temp_v8 = 0;
    temp_v9 = 0;
    nn_math_VEC3SafeNormalize(&temp_v4,&temp_v4,&temp_v7);
    temp_v2 = nn_math_VEC3Cross(&temp_v10,&temp_v4,&temp_v13);
    temp_v7 = param_3->field_0x8;
    temp_v8 = param_3->field_0x18;
    temp_v9 = param_3->field_0x28;
    nn_math_VEC3SafeNormalize(temp_v2,temp_v2,&temp_v7);
    if (param_4 == 0) {
      pfVar5 = (float *)&temp_v10;
      pfVar1 = &temp_v13;
    }
    nn_math_VEC3Cross(pfVar1,pfVar5);
    *param_2 = temp_v10;
    param_2[1] = temp_v4;
    *(float *)&param_2[2] = temp_v13;
    param_2[3] = param_3->field_0xc;
    param_2[4] = temp_v11;
    param_2[5] = temp_v5;
    *(float *)&param_2[6] = temp_v14;
    param_2[7] = param_3->field_0x1c;
    param_2[8] = temp_v12;
    param_2[9] = temp_v6;
    *(float *)&param_2[10] = temp_v15;
    param_2[0xb] = param_3->field_0x2c;
  }
  else {
    temp_v4 = 0;
    temp_v5 = 0x3f800000;
    temp_v6 = 0;
    temp_v0 = nn_math_VEC3Cross(&temp_v7,&temp_v4,&temp_v13);
    temp_v10 = temp_v3;
    temp_v11 = temp_v2;
    temp_v12 = temp_v2;
    nn_math_VEC3SafeNormalize(temp_v0,temp_v0,&temp_v10);
    if (param_4 == 0) {
      pfVar4 = (float *)&temp_v7;
      pfVar3 = &temp_v13;
    }
    nn_math_VEC3Cross(pfVar3,pfVar4);
    *param_2 = temp_v7;
    param_2[1] = temp_v4;
    param_2[3] = temp_v2;
    *(float *)&param_2[2] = temp_v13;
    param_2[4] = temp_v8;
    param_2[5] = temp_v5;
    param_2[7] = temp_v2;
    *(float *)&param_2[6] = temp_v14;
    param_2[8] = temp_v9;
    param_2[9] = temp_v6;
    param_2[0xb] = temp_v2;
    *(float *)&param_2[10] = temp_v15;
  }
  return;
}
