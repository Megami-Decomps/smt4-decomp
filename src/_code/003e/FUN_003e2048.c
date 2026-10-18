/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e2048` (_code @ 0x3e2048, 0x220 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003e2048_arg2 fn_003e2048_arg2;
struct fn_003e2048_arg2 {
    unsigned char pad_0x0[0xc];
    undefined4 field_0xc; /* +0xc */
    unsigned char pad_0x10[0xc];
    undefined4 field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0xc];
    undefined4 field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0xc];
    uint field_0x3c; /* +0x3c */
};

/* stack frame of param_5: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_5_stack;

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: FUN_002263a0. */
/* Supplied declaration required: FUN_0022651c. */


void FUN_003e2048(unsigned int param_1,unsigned int *param_2,fn_003e2048_arg2 *param_3,
                 unsigned int param_4,unsigned int *param_5)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3; 7 native warning(s); review required */
  float *pfVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  float in_s0;
  float in_s1;
  float temp_v2;
  float temp_v3;
  float in_s2;
  unsigned int in_s3;
  float temp_v4;
  float temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  float temp_v12;
  float temp_v13;
  unsigned long long temp_v14;
  unsigned int uStack_28;
  unsigned int *puStack_24;
  fn_003e2048_arg2 *pfStack_20;
  unsigned int uStack_1c;
  
  temp_v14 = CONCAT44(in_s3,in_s2);
  temp_v5 = 1.0f;
  uStack_28 = param_1;
  puStack_24 = param_2;
  pfStack_20 = param_3;
  uStack_1c = param_4;
  if ((~param_3->field_0x3c & 0x20) != 0) {
    temp_v2 = 1.0f / romwright_sqrt_4(in_s0 * in_s0 + in_s1 * in_s1 + in_s2 * in_s2);
    temp_v12 = in_s0 * temp_v2;
    temp_v13 = in_s1 * temp_v2;
    temp_v14 = CONCAT44(in_s3,in_s2 * temp_v2);
    pfVar1 = (float *)FUN_002263a0(&temp_v6,&temp_v12,param_5);
    temp_v4 = *pfVar1;
    temp_v2 = pfVar1[1];
    temp_v3 = pfVar1[2];
    temp_v5 = temp_v5 / romwright_sqrt_4(temp_v4 * temp_v4 + temp_v2 * temp_v2 + temp_v3 * temp_v3);
    *pfVar1 = temp_v4 * temp_v5;
    pfVar1[1] = temp_v2 * temp_v5;
    pfVar1[2] = temp_v3 * temp_v5;
    FUN_002263a0(&temp_v12,param_5,&temp_v6);
    *param_2 = temp_v6;
    *(float *)&param_2[1] = temp_v12;
    param_2[2] = *param_5;
    param_2[3] = param_3->field_0xc;
    param_2[4] = temp_v7;
    *(float *)&param_2[5] = temp_v13;
    param_2[6] = param_5[1];
    param_2[7] = param_3->field_0x1c;
    param_2[8] = temp_v8;
    param_2[9] = (unsigned int)temp_v14;
    param_2[10] = param_5[2];
    param_2[0xb] = param_3->field_0x2c;
  }
  else {
    temp_v0 = 0;
    temp_v6 = 0;
    temp_v7 = 0x3f800000;
    temp_v8 = 0;
    temp_v12 = in_s0;
    temp_v13 = in_s1;
    pfVar1 = (float *)FUN_002263a0(&temp_v9,&temp_v6,param_5);
    temp_v4 = *pfVar1;
    temp_v3 = pfVar1[1];
    temp_v2 = pfVar1[2];
    temp_v5 = temp_v5 / romwright_sqrt_4(temp_v4 * temp_v4 + temp_v3 * temp_v3 + temp_v2 * temp_v2);
    *pfVar1 = temp_v4 * temp_v5;
    pfVar1[1] = temp_v3 * temp_v5;
    pfVar1[2] = temp_v2 * temp_v5;
    FUN_002263a0(&temp_v6,param_5,&temp_v9);
    *param_2 = temp_v9;
    param_2[1] = temp_v6;
    param_2[2] = *param_5;
    param_2[3] = temp_v0;
    param_2[4] = temp_v10;
    param_2[5] = temp_v7;
    param_2[6] = param_5[1];
    param_2[7] = temp_v0;
    param_2[8] = temp_v11;
    param_2[9] = temp_v8;
    param_2[10] = param_5[2];
    param_2[0xb] = temp_v0;
  }
  FUN_0022651c(param_2,param_4,param_2);
  temp_v0 = param_3->field_0x1c;
  temp_v1 = param_3->field_0x2c;
  param_2[3] = param_3->field_0xc;
  param_2[7] = temp_v0;
  param_2[0xb] = temp_v1;
  return;
}
