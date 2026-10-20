/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00310cb4` (_code @ 0x310cb4, 0x274 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorFloatToUnsigned(...);
int VectorSignedToFloat(unsigned int, int);
int VectorUnsignedToFloat(unsigned int, int);
int nn_math_ARMv6_VEC3TransformAsm_2AD44C(float *, float *);

/* stack frame of void: 14 slot(s), 56 byte(s) */
typedef struct {
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
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} void_stack;

extern unsigned int DAT_00407ed0; /* 0x407ed0 */
extern unsigned int DAT_00407ed4; /* 0x407ed4 */
extern unsigned int DAT_00407ed8; /* 0x407ed8 */
extern unsigned int DAT_00407edc; /* 0x407edc */
extern float DAT_0049f9e0; /* 0x49f9e0 */
extern float DAT_0049f9e4; /* 0x49f9e4 */
extern float DAT_0049f9e8; /* 0x49f9e8 */
extern float DAT_0049f9ec; /* 0x49f9ec */
extern float DAT_0049f9f0; /* 0x49f9f0 */
extern float DAT_0049f9f4; /* 0x49f9f4 */
extern unsigned int DAT_0049f9f8; /* 0x49f9f8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
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
extern unsigned int FUN_00296cc8(unsigned int);
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


/* WARNING: Removing unreachable block (ram,0x00310e4c) */
/* WARNING: Removing unreachable block (ram,0x00310e5c) */
/* WARNING: Removing unreachable block (ram,0x00310d90) */

unsigned int FUN_00310cb4(void)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned int in_fpscr;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
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
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float fStack_60;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  unsigned int temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  unsigned int temp_v27;
  float temp_v28;
  float temp_v29;
  float temp_v30;
  unsigned int temp_v31;
  
  temp_v1 = FUN_00296cc8(0);
  temp_v14 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = FUN_00296cc8(1);
  temp_v15 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = FUN_00296cc8(2);
  temp_v16 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = FUN_00296cc8(3);
  temp_v17 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = FUN_00296cc8(4);
  temp_v13 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = FUN_00296cc8(5);
  temp_v1 = VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v18 = 0.0f;
  temp_v19 = 0.0f;
  fStack_60 = -1.0f;
  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v17 * 0.7111111f) << 0x1d);
  for (temp_v17 = romwright_fabs_4(temp_v17 * 0.7111111f); (int)temp_v17 >= 0x47800000; temp_v17 = temp_v17 - 65536.0f) {
  }
  temp_v4 = VectorFloatToUnsigned(0,3);
  temp_v5 = VectorFloatToUnsigned(temp_v17,3);
  temp_v6 = VectorFloatToUnsigned(0,3);
  temp_v2 = temp_v4;
  temp_v3 = temp_v6;
  temp_v8 = (float)VectorUnsignedToFloat(temp_v4 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v4 = temp_v5 & 0xff;
  temp_v10 = (float)VectorUnsignedToFloat(temp_v5 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v7 = (float)VectorUnsignedToFloat(temp_v6 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v9 = (float)(&DAT_00407ed0)[temp_v2 * 4] + (0.0f - temp_v8) * (float)(&DAT_00407ed8)[temp_v2 * 4];
  temp_v12 = (float)(&DAT_00407ed4)[temp_v2 * 4] + (0.0f - temp_v8) * (float)(&DAT_00407edc)[temp_v2 * 4];
  temp_v8 = (float)(&DAT_00407ed0)[temp_v4 * 4] + (temp_v17 - temp_v10) * (float)(&DAT_00407ed8)[temp_v4 * 4];
  temp_v11 = (float)(&DAT_00407ed0)[temp_v3 * 4] + (0.0f - temp_v7) * (float)(&DAT_00407ed8)[temp_v3 * 4];
  temp_v7 = (float)(&DAT_00407ed4)[temp_v3 * 4] + (0.0f - temp_v7) * (float)(&DAT_00407edc)[temp_v3 * 4];
  temp_v30 = (float)(&DAT_00407ed4)[temp_v4 * 4] +
             (temp_v17 - temp_v10) * (float)(&DAT_00407edc)[temp_v4 * 4];
  if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
    temp_v8 = -temp_v8;
  }
  temp_v20 = temp_v7 * temp_v30;
  temp_v28 = -temp_v8;
  temp_v24 = temp_v11 * temp_v30;
  temp_v29 = temp_v9 * temp_v30;
  temp_v30 = temp_v12 * temp_v30;
  temp_v21 = temp_v9 * temp_v7 * temp_v8 - temp_v12 * temp_v11;
  temp_v26 = temp_v12 * temp_v11 * temp_v8 - temp_v9 * temp_v7;
  temp_v22 = temp_v9 * temp_v11 + temp_v12 * temp_v7 * temp_v8;
  temp_v25 = temp_v12 * temp_v7 + temp_v9 * temp_v11 * temp_v8;
  temp_v23 = 0;
  temp_v27 = 0;
  temp_v31 = 0;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v18,&temp_v20);
  DAT_0049f9e0 = temp_v14 - temp_v18 * temp_v13;
  DAT_0049f9e4 = temp_v15 - temp_v19 * temp_v13;
  DAT_0049f9e8 = temp_v16 - fStack_60 * temp_v13;
  DAT_0049f9ec = temp_v14;
  DAT_0049f9f0 = temp_v15;
  DAT_0049f9f4 = temp_v16;
  DAT_0049f9f8 = temp_v1;
  return 1;
}

} /* extern "C" */
