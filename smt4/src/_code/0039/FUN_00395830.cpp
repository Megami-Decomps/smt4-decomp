/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00395830` (_code @ 0x395830, 0x2f0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int randNextInRange(...);
int VectorFloatToUnsigned(...);
int VectorUnsignedToFloat(unsigned int, int);
int nn_math_ARMv6_VEC3TransformAsm_2AD44C(float *, float *);

/* stack frame of param_1: 15 slot(s), 60 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_1_stack;

extern unsigned int DAT_00407ed0; /* 0x407ed0 */
extern unsigned int DAT_00407ed4; /* 0x407ed4 */
extern unsigned int DAT_00407ed8; /* 0x407ed8 */
extern unsigned int DAT_00407edc; /* 0x407edc */
extern int g_lmapScene; /* 0x447e88 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: randNextInRange. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


/* WARNING: Removing unreachable block (ram,0x003959a8) */
/* WARNING: Removing unreachable block (ram,0x003959b8) */
/* WARNING: Removing unreachable block (ram,0x003958e8) */

void FUN_00395830(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  unsigned int temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  unsigned int temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  unsigned int temp_v29;
  
  temp_v0 = *(int *)(param_1 + 0xc);
  temp_v14 = 40.0f;
  temp_v1 = randNextInRange(99);
  temp_v15 = 1.0f;
  if (temp_v1 % 10 == 0) {
    temp_v10 = *(float *)(g_lmapScene + 0x1c) - *(float *)(temp_v0 + 0x28);
    temp_v5 = *(float *)(g_lmapScene + 0x20) - *(float *)(temp_v0 + 0x2c);
    temp_v9 = *(float *)(g_lmapScene + 0x24) - *(float *)(temp_v0 + 0x30);
    temp_v11 = 1.0f / romwright_sqrt_4(temp_v10 * temp_v10 + temp_v5 * temp_v5 + temp_v9 * temp_v9);
    *(float *)(param_1 + 0x10) = temp_v10 * temp_v11 * temp_v14;
    *(float *)(param_1 + 0x14) = temp_v5 * temp_v11 * temp_v14;
    *(float *)(param_1 + 0x18) = temp_v9 * temp_v11 * temp_v14;
    return;
  }
  temp_v2 = randNextInRange(0x168,(temp_v1 / 10) * -5,temp_v1 * -0x33333333);
  temp_v5 = (float)VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v5 * 0.7111111f) << 0x1d);
  for (temp_v5 = romwright_fabs_4(temp_v5 * 0.7111111f); (int)temp_v5 >= 0x47800000; temp_v5 = temp_v5 - 65536.0f) {
  }
  temp_v6 = VectorFloatToUnsigned(0,3);
  temp_v7 = VectorFloatToUnsigned(temp_v5,3);
  temp_v8 = VectorFloatToUnsigned(0,3);
  temp_v4 = temp_v7;
  temp_v3 = temp_v6;
  temp_v10 = (float)VectorUnsignedToFloat(temp_v6 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v11 = (float)VectorUnsignedToFloat(temp_v7 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v6 = temp_v8 & 0xff;
  temp_v9 = (float)VectorUnsignedToFloat(temp_v8 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v12 = (float)(&DAT_00407ed0)[temp_v4 * 4] + (temp_v5 - temp_v11) * (float)(&DAT_00407ed8)[temp_v4 * 4];
  temp_v13 = (float)(&DAT_00407ed0)[temp_v3 * 4] + (0.0f - temp_v10) * (float)(&DAT_00407ed8)[temp_v3 * 4];
  temp_v10 = (float)(&DAT_00407ed4)[temp_v3 * 4] + (0.0f - temp_v10) * (float)(&DAT_00407edc)[temp_v3 * 4];
  temp_v28 = (float)(&DAT_00407ed4)[temp_v4 * 4] +
             (temp_v5 - temp_v11) * (float)(&DAT_00407edc)[temp_v4 * 4];
  temp_v5 = (float)(&DAT_00407ed0)[temp_v6 * 4] + (0.0f - temp_v9) * (float)(&DAT_00407ed8)[temp_v6 * 4];
  temp_v9 = (float)(&DAT_00407ed4)[temp_v6 * 4] + (0.0f - temp_v9) * (float)(&DAT_00407edc)[temp_v6 * 4];
  if (!romwright_subpiece_4_1_0(temp_v1 >> 0x1d,0)) {
    temp_v12 = -temp_v12;
  }
  temp_v18 = temp_v9 * temp_v28;
  temp_v26 = -temp_v12;
  temp_v22 = temp_v5 * temp_v28;
  temp_v27 = temp_v13 * temp_v28;
  temp_v28 = temp_v10 * temp_v28;
  temp_v19 = temp_v13 * temp_v9 * temp_v12 - temp_v10 * temp_v5;
  temp_v24 = temp_v10 * temp_v5 * temp_v12 - temp_v13 * temp_v9;
  temp_v20 = temp_v13 * temp_v5 + temp_v10 * temp_v9 * temp_v12;
  temp_v23 = temp_v10 * temp_v9 + temp_v13 * temp_v5 * temp_v12;
  temp_v21 = 0;
  temp_v25 = 0;
  temp_v29 = 0;
  temp_v16 = 0.0f;
  temp_v17 = 0.0f;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v15,&temp_v18);
  *(float *)(param_1 + 0x10) = temp_v15 * temp_v14;
  *(float *)(param_1 + 0x14) = temp_v16 * temp_v14;
  *(float *)(param_1 + 0x18) = temp_v17 * temp_v14;
  return;
}

} /* extern "C" */
