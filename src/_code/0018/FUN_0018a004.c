/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018a004` (_code @ 0x18a004, 0x2a8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: FUN_00298fec. */
/* Supplied declaration required: FUN_002ad5a0. */
/* Supplied declaration required: FUN_002c1774. */
/* Supplied declaration required: FUN_002c1ffc. */
/* Supplied declaration required: FUN_002c20a8. */


void FUN_0018a004(int param_1)

{
/* irregular: 5 native warning(s); review required */
  float *pfVar1;
  float *pfVar2;
  float temp_v0;
  float temp_v1;
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
  int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  float temp_v17;
  float temp_v18 [6];
  
  pfVar1 = (float *)(param_1 + 0x534);
  *(unsigned int *)(param_1 + 0x548) = 0x420c0000;
  *pfVar1 = 0.0f;
  pfVar2 = (float *)(param_1 + 0x528);
  *(unsigned int *)(param_1 + 0x538) = 0;
  *(unsigned int *)(param_1 + 0x53c) = 0xbf800000;
  *pfVar2 = 0.0f;
  *(unsigned int *)(param_1 + 0x52c) = 0x40c9999a;
  *(unsigned int *)(param_1 + 0x530) = 0x42320000;
  temp_v10 = 1.0f;
  *(unsigned int *)(param_1 + 0x540) = *(unsigned int *)(param_1 + 0x530);
  *(unsigned int *)(param_1 + 0x544) = 0;
  *(unsigned int *)(param_1 + 0x54c) = 0x40a00000;
  temp_v14 = 0;
  temp_v15 = 0x3f800000;
  temp_v16 = 0;
  temp_v4 = *(float *)(param_1 + 0x53c);
  temp_v0 = *pfVar1;
  temp_v1 = *(float *)(param_1 + 0x538);
  temp_v9 = temp_v0 * 0.0f + temp_v1 * 0.0f + temp_v4 * 1.0f;
  temp_v8 = temp_v0 * -1.0f + temp_v1 * 0.0f + temp_v4 * 0.0f;
  temp_v1 = temp_v0 * 0.0f + temp_v1 * 1.0f + temp_v4 * 0.0f;
  FUN_002ad5a0(&temp_v17,temp_v18);
  temp_v5 = temp_v10 - temp_v18[0];
  temp_v10 = temp_v10 / romwright_sqrt_4(temp_v9 * temp_v9 + temp_v1 * temp_v1 + temp_v8 * temp_v8);
  temp_v1 = temp_v1 * temp_v10;
  temp_v8 = temp_v8 * temp_v10;
  temp_v9 = temp_v9 * temp_v10;
  temp_v2 = temp_v5 * temp_v1 * temp_v8;
  temp_v10 = temp_v5 * temp_v9 * temp_v8;
  temp_v3 = temp_v5 * temp_v9 * temp_v1;
  temp_v4 = *pfVar1;
  temp_v6 = *(float *)(param_1 + 0x538);
  temp_v7 = *(float *)(param_1 + 0x53c);
  temp_v0 = *(float *)(param_1 + 0x540);
  temp_v11 = ((temp_v18[0] + temp_v5 * temp_v9 * temp_v9) * temp_v4 + (temp_v3 - temp_v17 * temp_v8) * temp_v6
             + (temp_v10 + temp_v17 * temp_v1) * temp_v7) * temp_v0 + *pfVar2;
  temp_v12 = ((temp_v3 + temp_v17 * temp_v8) * temp_v4 + (temp_v18[0] + temp_v5 * temp_v1 * temp_v1) * temp_v6 +
             (temp_v2 - temp_v17 * temp_v9) * temp_v7) * temp_v0 + *(float *)(param_1 + 0x52c);
  temp_v13 = ((temp_v10 - temp_v17 * temp_v1) * temp_v4 + (temp_v2 + temp_v17 * temp_v9) * temp_v6 +
             (temp_v18[0] + temp_v5 * temp_v8 * temp_v8) * temp_v7) * temp_v0 + *(float *)(param_1 + 0x530)
  ;
  FUN_002c1774(param_1 + 0x20);
  FUN_002c20a8(param_1 + 0x20,pfVar2,&temp_v11,&temp_v14);
  FUN_002c1ffc(param_1 + 0x20,1);
  FUN_00298fec(param_1 + 0x20);
  return;
}
