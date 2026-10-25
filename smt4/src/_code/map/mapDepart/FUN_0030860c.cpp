/* NON_MATCHING: mechanical split of the romwright decompile of the merged function, not yet rewritten (named locals and raw offsets remain). */
#include "common.h"
extern "C" {

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif

int FUN_002c5be8(void);
int entryOwnerSetPosition(...);
int VectorFloatToUnsigned(...);
int VectorUnsignedToFloat(unsigned int, int);
int nn_math_ARMv6_VEC3TransformAsm_2AD44C(...);

/* stack frame of void: 24 slot(s), 96 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp98; /* 0x98: local_98 */
} void_stack;

extern unsigned int DAT_00407ed0; /* 0x407ed0 */
extern unsigned int DAT_00407ed4; /* 0x407ed4 */
extern unsigned int DAT_00407ed8; /* 0x407ed8 */
extern unsigned int DAT_00407edc; /* 0x407edc */
extern int *DAT_004474f4; /* 0x4474f4 */
extern int g_deferredMapModels; /* 0x447e58 */
extern int g_lmapScene; /* 0x447e88 */
extern float g_fixedCameraPosition; /* 0x49f8f8 */
extern float DAT_0049f8fc; /* 0x49f8fc */
extern float DAT_0049f900; /* 0x49f900 */

/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001f87d4. */
/* Supplied declaration required: FUN_00208504. */
/* Supplied declaration required: FUN_0021b0f0. */
/* Supplied declaration required: FUN_0021b2ec. */
/* Supplied declaration required: FUN_00282228. */
/* Supplied declaration required: calcHeadingRoundedToCardinalDirection. */
/* Supplied declaration required: FUN_00282390. */
/* Supplied declaration required: FUN_0028250c. */
/* Supplied declaration required: mathGetShortestAngleDelta. */
/* Supplied declaration required: FUN_002c5be8. */
extern unsigned int asdModelGetStatic38(void);
/* Supplied declaration required: FUN_002d1e4c. */
/* Supplied declaration required: entryOwnerSetPosition. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */



void FUN_0030860c(void)
{
/* irregular: irregular input(s): in_d10, in_d8, in_d9, in_fpscr; 24 native warning(s); review required */
  unsigned int temp_v0;
  char temp_v1;
  int temp_v6;
  float *pfVar9;
  unsigned int temp_v7;
  int temp_v11;
  unsigned char temp_v12;
  unsigned char temp_v13;
  unsigned int in_fpscr;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v28;
  float temp_v29;
  float temp_v30;
  float temp_v34;
  float temp_v35;
  float temp_v36;
  float temp_v39;
  float temp_v40;
  float temp_v41;
  float temp_v42;
  float temp_v43;
  float temp_v44;
  unsigned int temp_v45;
  float temp_v46;
  float temp_v47;
  float fStack_48;
  unsigned int temp_v48;
  float temp_v49;
  float temp_v50;
  float temp_v51;
  unsigned int temp_v52;
  temp_v25 = 1.0f;
  temp_v29 = *(float *)(g_lmapScene + 0x20) - 20.0f;
  temp_v24 = 0.0f;
  temp_v26 = *(float *)(g_lmapScene + 0x1c);
  temp_v28 = *(float *)(g_lmapScene + 0x24);
  if ((int)romwright_sqrt_4(((float)DAT_004474f4[0x16] - (float)DAT_004474f4[0x13]) *
                ((float)DAT_004474f4[0x16] - (float)DAT_004474f4[0x13]) +
                ((float)DAT_004474f4[0x17] - (float)DAT_004474f4[0x14]) *
                ((float)DAT_004474f4[0x17] - (float)DAT_004474f4[0x14]) +
                ((float)DAT_004474f4[0x18] - (float)DAT_004474f4[0x15]) *
                ((float)DAT_004474f4[0x18] - (float)DAT_004474f4[0x15])) < 0x43480000) {
    temp_v30 = 200.0f;
  }
  else {
    temp_v6 = 0;
    temp_v30 = temp_v25;
    do {
      temp_v11 = g_deferredMapModels + temp_v6 * 0x38;
      temp_v13 = *(char *)(temp_v11 + 0xc) != '\0';
      temp_v1 = '\0';
      if (temp_v13) {
        temp_v1 = *(char *)(temp_v11 + 0xd);
      }
      if (temp_v13 && temp_v1 != '\0') {
        temp_v14 = *(float *)(g_lmapScene + 0x20) - *(float *)(temp_v11 + 0x20);
        if ((((unsigned int)temp_v14 < 0xc2c80001) && ((int)temp_v14 < 0x42c80001)) &&
           (temp_v16 = *(float *)(temp_v11 + 0x1c) - *(float *)(g_lmapScene + 0x1c),
           temp_v15 = *(float *)(temp_v11 + 0x20) - *(float *)(g_lmapScene + 0x20),
           temp_v14 = *(float *)(temp_v11 + 0x24) - *(float *)(g_lmapScene + 0x24),
           (int)romwright_sqrt_4(temp_v16 * temp_v16 + temp_v15 * temp_v15 + temp_v14 * temp_v14) < 0x44898001)) {
          temp_v30 = temp_v30 + 1.0f;
          temp_v26 = temp_v26 + *(float *)(temp_v11 + 0x1c);
          temp_v29 = temp_v29 + *(float *)(temp_v11 + 0x20);
          temp_v28 = temp_v28 + *(float *)(temp_v11 + 0x24);
        }
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 0x40);
    if ((int)temp_v30 < 0x40000000) {
      temp_v30 = 300.0f;
    }
    else {
      temp_v30 = 1.0f / temp_v30;
      temp_v26 = temp_v26 * temp_v30;
      temp_v28 = temp_v28 * temp_v30;
      temp_v29 = temp_v29 * temp_v30;
      temp_v20 = temp_v26 - *(float *)(g_lmapScene + 0x1c);
      temp_v16 = temp_v28 - *(float *)(g_lmapScene + 0x24);
      temp_v15 = temp_v29 - *(float *)(g_lmapScene + 0x20);
      temp_v14 = romwright_sqrt_4(temp_v20 * temp_v20 + temp_v15 * temp_v15 + temp_v16 * temp_v16);
      in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v14) << 0x1d);
      temp_v30 = temp_v14;
      if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
        temp_v30 = -temp_v14;
      }
      if ((int)temp_v30 >= 0x43c80001) {
        temp_v14 = 1.0f / temp_v14;
        temp_v30 = 400.0f;
        temp_v26 = *(float *)(g_lmapScene + 0x1c) + temp_v20 * temp_v14 * 400.0f;
        temp_v29 = *(float *)(g_lmapScene + 0x20) + temp_v15 * temp_v14 * 400.0f;
        temp_v28 = *(float *)(g_lmapScene + 0x24) + temp_v16 * temp_v14 * 400.0f;
      }
      temp_v30 = temp_v30 + 450.0f;
    }
  }
  pfVar9 = (float *)asdModelGetStatic38();
  *pfVar9 = temp_v30;
  if ((*DAT_004474f4 == 0xc) && (DAT_004474f4[1] >= 100)) {
    temp_v14 = (*(float *)(g_lmapScene + 0x4c) + 180.0f) * 0.7111111f;
    temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v24 <= temp_v14) << 0x1d);
    for (temp_v14 = romwright_fabs_4(temp_v14); temp_v15 = temp_v24, (int)temp_v14 >= 0x47800000; temp_v14 = temp_v14 - 65536.0f)
    {
    }
    for (; (int)temp_v15 >= 0x47800000; temp_v15 = temp_v15 - 65536.0f) {
    }
    temp_v17 = VectorFloatToUnsigned(0x4338e38f,3);
    temp_v18 = VectorFloatToUnsigned(temp_v14,3);
    temp_v19 = VectorFloatToUnsigned(temp_v15,3);
    temp_v12 = temp_v17;
    temp_v20 = (float)VectorUnsignedToFloat(temp_v17 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v17 = temp_v18 & 0xff;
    temp_v21 = (float)VectorUnsignedToFloat(temp_v18 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v18 = temp_v19 & 0xff;
    temp_v16 = (float)VectorUnsignedToFloat(temp_v19 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v23 = (float)(&DAT_00407ed0)[temp_v12 * 4] +
             (184.8889f - temp_v20) * (float)(&DAT_00407ed8)[temp_v12 * 4];
    temp_v20 = (float)(&DAT_00407ed4)[temp_v12 * 4] +
             (184.8889f - temp_v20) * (float)(&DAT_00407edc)[temp_v12 * 4];
    temp_v49 = (float)(&DAT_00407ed0)[temp_v17 * 4] +
               (temp_v14 - temp_v21) * (float)(&DAT_00407ed8)[temp_v17 * 4];
    temp_v51 = (float)(&DAT_00407ed4)[temp_v17 * 4] +
               (temp_v14 - temp_v21) * (float)(&DAT_00407edc)[temp_v17 * 4];
    temp_v14 = (float)(&DAT_00407ed0)[temp_v18 * 4] +
             (temp_v15 - temp_v16) * (float)(&DAT_00407ed8)[temp_v18 * 4];
    temp_v15 = (float)(&DAT_00407ed4)[temp_v18 * 4] +
             (temp_v15 - temp_v16) * (float)(&DAT_00407edc)[temp_v18 * 4];
    if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
      temp_v49 = -temp_v49;
    }
    temp_v42 = temp_v15 * temp_v51;
    temp_v46 = temp_v14 * temp_v51;
    temp_v50 = temp_v23 * temp_v51;
    temp_v51 = temp_v20 * temp_v51;
    temp_v43 = temp_v23 * temp_v15 * temp_v49 - temp_v20 * temp_v14;
    temp_v44 = temp_v23 * temp_v14 + temp_v20 * temp_v15 * temp_v49;
    fStack_48 = temp_v20 * temp_v14 * temp_v49 - temp_v23 * temp_v15;
    temp_v47 = temp_v20 * temp_v15 + temp_v23 * temp_v14 * temp_v49;
  }
  else {
    temp_v15 = romwright_fabs_4(DAT_0049f8fc * 0.7111111f);
    temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v24 <= DAT_0049f900 * 0.7111111f) << 0x1d);
    temp_v16 = romwright_fabs_4(DAT_0049f900 * 0.7111111f);
    for (temp_v14 = romwright_fabs_4(g_fixedCameraPosition * 0.7111111f); (int)temp_v14 >= 0x47800000; temp_v14 = temp_v14 - 65536.0f
        ) {
    }
    for (; (int)temp_v15 >= 0x47800000; temp_v15 = temp_v15 - 65536.0f) {
    }
    for (; (int)temp_v16 >= 0x47800000; temp_v16 = temp_v16 - 65536.0f) {
    }
    temp_v17 = VectorFloatToUnsigned(temp_v14,3);
    temp_v18 = VectorFloatToUnsigned(temp_v15,3);
    temp_v19 = VectorFloatToUnsigned(temp_v16,3);
    temp_v12 = temp_v17;
    temp_v22 = (float)VectorUnsignedToFloat(temp_v17 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v17 = temp_v18 & 0xff;
    temp_v21 = (float)VectorUnsignedToFloat(temp_v18 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v18 = temp_v19 & 0xff;
    temp_v20 = (float)VectorUnsignedToFloat(temp_v19 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v23 = (float)(&DAT_00407ed0)[temp_v12 * 4] +
             (temp_v14 - temp_v22) * (float)(&DAT_00407ed8)[temp_v12 * 4];
    temp_v22 = (float)(&DAT_00407ed4)[temp_v12 * 4] +
             (temp_v14 - temp_v22) * (float)(&DAT_00407edc)[temp_v12 * 4];
    temp_v49 = (float)(&DAT_00407ed0)[temp_v17 * 4] +
               (temp_v15 - temp_v21) * (float)(&DAT_00407ed8)[temp_v17 * 4];
    temp_v51 = (float)(&DAT_00407ed4)[temp_v17 * 4] +
               (temp_v15 - temp_v21) * (float)(&DAT_00407edc)[temp_v17 * 4];
    temp_v14 = (float)(&DAT_00407ed0)[temp_v18 * 4] +
             (temp_v16 - temp_v20) * (float)(&DAT_00407ed8)[temp_v18 * 4];
    temp_v15 = (float)(&DAT_00407ed4)[temp_v18 * 4] +
             (temp_v16 - temp_v20) * (float)(&DAT_00407edc)[temp_v18 * 4];
    if (g_fixedCameraPosition * 0.7111111f < temp_v24) {
      temp_v23 = -temp_v23;
    }
    if (DAT_0049f8fc * 0.7111111f < temp_v24) {
      temp_v49 = -temp_v49;
    }
    if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
      temp_v14 = -temp_v14;
    }
    temp_v50 = temp_v23 * temp_v51;
    temp_v42 = temp_v15 * temp_v51;
    temp_v46 = temp_v14 * temp_v51;
    temp_v51 = temp_v22 * temp_v51;
    temp_v44 = temp_v23 * temp_v14 + temp_v22 * temp_v15 * temp_v49;
    temp_v47 = temp_v22 * temp_v15 + temp_v23 * temp_v14 * temp_v49;
    temp_v43 = temp_v23 * temp_v15 * temp_v49 - temp_v22 * temp_v14;
    fStack_48 = temp_v22 * temp_v14 * temp_v49 - temp_v23 * temp_v15;
  }
  temp_v49 = -temp_v49;
  temp_v45 = 0;
  temp_v48 = 0;
  temp_v52 = 0;
  temp_v39 = temp_v24;
  temp_v40 = temp_v24;
  temp_v41 = temp_v25;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v39,&temp_v42);
  temp_v39 = temp_v39 * temp_v30;
  temp_v40 = temp_v40 * temp_v30;
  temp_v41 = temp_v41 * temp_v30;
  temp_v34 = temp_v26;
  temp_v35 = temp_v29;
  temp_v36 = temp_v28;
  temp_v7 = FUN_002c5be8();
  entryOwnerSetPosition(temp_v7,&temp_v34);
  temp_v25 = temp_v34 + temp_v39;
  temp_v24 = temp_v35 + temp_v40;
  temp_v26 = temp_v36 + temp_v41;
  temp_v6 = FUN_002c5be8();
  *(float *)(temp_v6 + 0x58) = temp_v25;
  *(float *)(temp_v6 + 0x68) = temp_v24;
  *(float *)(temp_v6 + 0x78) = temp_v26;
  *(unsigned int *)(temp_v6 + 0x88) = *(unsigned int *)(temp_v6 + 0x88) | 0x800;
  return;
}

} /* extern "C" */
