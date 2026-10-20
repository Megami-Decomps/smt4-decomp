/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020e738` (_code @ 0x20e738, 0x398 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0025247c(int);
int VectorFloatToUnsigned(...);
int VectorUnsignedToFloat(unsigned int, int);
int nn_math_ARMv6_VEC3TransformAsm_2AD44C(float *, float *, int *);

/* stack frame of param_2: 23 slot(s), 92 byte(s) */
typedef struct {
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
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int sp108; /* 0x108: local_108 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp110; /* 0x110: local_110 */
} param_2_stack;

extern unsigned int DAT_00407ed0; /* 0x407ed0 */
extern unsigned int DAT_00407ed4; /* 0x407ed4 */
extern unsigned int DAT_00407ed8; /* 0x407ed8 */
extern unsigned int DAT_00407edc; /* 0x407edc */
extern unsigned char DAT_004c14a0; /* 0x4c14a0 */
extern int DAT_004c2420; /* 0x4c2420 */

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
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0025247c. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


/* WARNING: Removing unreachable block (ram,0x0020e8ac) */
/* WARNING: Removing unreachable block (ram,0x0020e8bc) */
/* WARNING: Removing unreachable block (ram,0x0020e7f4) */

void FUN_0020e738(unsigned short param_1,unsigned short param_2)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s1, in_s2, in_s3, in_s4; 13 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned int in_fpscr;
  float in_s0;
  float in_s1;
  float temp_v4;
  float in_s2;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  float temp_v8;
  float temp_v9;
  float in_s3;
  float temp_v10;
  float in_s4;
  float temp_v11;
  float temp_v12;
  unsigned int temp_v13;
  float temp_v14;
  int temp_v15;
  unsigned int temp_v16;
  float temp_v17;
  float temp_v18;
  unsigned int uStack_f0;
  float temp_v19;
  float temp_v20;
  unsigned int uStack_b4;
  float temp_v21;
  float temp_v22;
  unsigned int uStack_a8;
  float temp_v23;
  float temp_v24;
  unsigned int uStack_94;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  unsigned int temp_v29;
  float temp_v30;
  float temp_v31;
  float temp_v32;
  unsigned int temp_v33;
  float temp_v34;
  float temp_v35;
  float temp_v36;
  unsigned int temp_v37;
  
  temp_v13 = 0;
  temp_v0 = DAT_004c2420 * 0x7c;
  *(float *)(&DAT_004c14a0 + temp_v0) = in_s0;
  *(unsigned int *)(temp_v0 + 0x4c14a4) = 0;
  *(float *)(temp_v0 + 0x4c14a8) = in_s1;
  temp_v14 = -in_s3;
  *(float *)(temp_v0 + 0x4c14ac) = in_s0 + in_s2;
  *(unsigned int *)(temp_v0 + 0x4c14b0) = 0;
  *(float *)(temp_v0 + 0x4c14b4) = in_s1 + in_s3;
  *(unsigned short *)(temp_v0 + 0x4c14b8) = param_1;
  *(unsigned short *)(temp_v0 + 0x4c14ba) = param_2;
  temp_v1 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= in_s4 * 0.7111111f) << 0x1d);
  for (temp_v4 = romwright_fabs_4(in_s4 * 0.7111111f); (int)temp_v4 >= 0x47800000; temp_v4 = temp_v4 - 65536.0f) {
  }
  temp_v5 = VectorFloatToUnsigned(0,3);
  temp_v6 = VectorFloatToUnsigned(temp_v4,3);
  temp_v7 = VectorFloatToUnsigned(0,3);
  temp_v2 = temp_v6;
  temp_v10 = (float)VectorUnsignedToFloat(temp_v6 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v6 = temp_v5 & 0xff;
  temp_v3 = temp_v7;
  temp_v8 = (float)VectorUnsignedToFloat(temp_v5 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v11 = (float)VectorUnsignedToFloat(temp_v7 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v9 = (float)(&DAT_00407ed0)[temp_v6 * 4] + (0.0f - temp_v8) * (float)(&DAT_00407ed8)[temp_v6 * 4];
  temp_v12 = (float)(&DAT_00407ed0)[temp_v2 * 4] + (temp_v4 - temp_v10) * (float)(&DAT_00407ed8)[temp_v2 * 4];
  temp_v8 = (float)(&DAT_00407ed4)[temp_v6 * 4] + (0.0f - temp_v8) * (float)(&DAT_00407edc)[temp_v6 * 4];
  temp_v36 = (float)(&DAT_00407ed4)[temp_v2 * 4] +
             (temp_v4 - temp_v10) * (float)(&DAT_00407edc)[temp_v2 * 4];
  temp_v4 = (float)(&DAT_00407ed0)[temp_v3 * 4] + (0.0f - temp_v11) * (float)(&DAT_00407ed8)[temp_v3 * 4];
  temp_v10 = (float)(&DAT_00407ed4)[temp_v3 * 4] + (0.0f - temp_v11) * (float)(&DAT_00407edc)[temp_v3 * 4];
  if (!romwright_subpiece_4_1_0(temp_v1 >> 0x1d,0)) {
    temp_v12 = -temp_v12;
  }
  temp_v26 = temp_v10 * temp_v36;
  temp_v34 = -temp_v12;
  temp_v30 = temp_v4 * temp_v36;
  temp_v35 = temp_v9 * temp_v36;
  temp_v36 = temp_v8 * temp_v36;
  temp_v28 = temp_v9 * temp_v4 + temp_v8 * temp_v10 * temp_v12;
  temp_v31 = temp_v8 * temp_v10 + temp_v9 * temp_v4 * temp_v12;
  temp_v27 = temp_v9 * temp_v10 * temp_v12 - temp_v8 * temp_v4;
  temp_v32 = temp_v8 * temp_v4 * temp_v12 - temp_v9 * temp_v10;
  temp_v29 = 0;
  temp_v33 = 0;
  temp_v37 = 0;
  temp_v15 = 0;
  temp_v16 = 0;
  temp_v17 = 0.0f;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v18,&temp_v26,&temp_v15);
  temp_v16 = temp_v13;
  temp_v17 = (float)temp_v13;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v24,&temp_v26,&temp_v15);
  temp_v16 = temp_v13;
  temp_v17 = temp_v14;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v20,&temp_v26,&temp_v15);
  temp_v15 = temp_v13;
  temp_v16 = temp_v13;
  temp_v17 = temp_v14;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v22,&temp_v26,&temp_v15);
  temp_v18 = temp_v18 + in_s0;
  temp_v19 = temp_v19 + in_s1;
  temp_v24 = temp_v24 + in_s0;
  temp_v25 = temp_v25 + in_s1;
  temp_v20 = temp_v20 + in_s0;
  temp_v21 = temp_v21 + in_s1;
  temp_v22 = temp_v22 + in_s0;
  temp_v23 = temp_v23 + in_s1;
  *(float *)(temp_v0 + 0x4c14bc) = temp_v22;
  *(unsigned int *)(temp_v0 + 0x4c14c0) = uStack_a8;
  *(float *)(temp_v0 + 0x4c14c4) = temp_v23;
  *(float *)(temp_v0 + 0x4c14d4) = temp_v18;
  *(unsigned int *)(temp_v0 + 0x4c14d8) = uStack_f0;
  *(float *)(temp_v0 + 0x4c14dc) = temp_v19;
  *(float *)(temp_v0 + 0x4c14ec) = temp_v20;
  *(unsigned int *)(temp_v0 + 0x4c14f0) = uStack_b4;
  *(float *)(temp_v0 + 0x4c14f4) = temp_v21;
  *(float *)(temp_v0 + 0x4c1504) = temp_v24;
  *(unsigned int *)(temp_v0 + 0x4c1508) = uStack_94;
  *(float *)(temp_v0 + 0x4c150c) = temp_v25;
  FUN_0025247c(temp_v0 + 0x4c14c8);
  FUN_0025247c(temp_v0 + 0x4c14e0);
  FUN_0025247c(temp_v0 + 0x4c14f8);
  FUN_0025247c(temp_v0 + 0x4c1510);
  DAT_004c2420 = DAT_004c2420 + 1;
  return;
}

} /* extern "C" */
