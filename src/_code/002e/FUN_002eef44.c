/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eef44` (_code @ 0x2eef44, 0x2b0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 15 slot(s), 60 byte(s) */
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
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} void_stack;

extern unsigned int DAT_00407fc0; /* 0x407fc0 */
extern unsigned int DAT_00407fc4; /* 0x407fc4 */
extern unsigned int DAT_00407fc8; /* 0x407fc8 */
extern unsigned int DAT_00407fcc; /* 0x407fcc */
extern int *DAT_004474f4; /* 0x4474f4 */
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
/* Supplied declaration required: FUN_00273ab0. */
/* Supplied declaration required: FUN_0027fd08. */
/* Supplied declaration required: FUN_0027fe84. */
extern unsigned int FUN_00296f60(unsigned int);
/* Supplied declaration required: FUN_002ad6d8. */


/* WARNING: Removing unreachable block (ram,0x002ef0b8) */
/* WARNING: Removing unreachable block (ram,0x002ef0d8) */
/* WARNING: Removing unreachable block (ram,0x002ef008) */

unsigned int FUN_002eef44(void)

{
/* irregular: irregular input(s): in_fpscr; 10 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
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
  unsigned int temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  unsigned int temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  unsigned int temp_v29;
  float temp_v30;
  float temp_v31;
  float temp_v32;
  unsigned int temp_v33;
  
  temp_v1 = FUN_00296f60(0);
  temp_v15 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = FUN_00296f60(1);
  temp_v16 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = FUN_00296f60(2);
  temp_v17 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = FUN_00296f60(3);
  temp_v18 = 0x42200000;
  temp_v14 = 500.0f;
  temp_v4 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v19 = 0.0f;
  temp_v20 = 0.0f;
  temp_v21 = -1.0f;
  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v4 * 0.7111111f) << 0x1d);
  for (temp_v4 = romwright_fabs_4(temp_v4 * 0.7111111f); (int)temp_v4 >= 0x47800000; temp_v4 = temp_v4 - 65536.0f) {
  }
  temp_v5 = VectorFloatToUnsigned(0,3);
  temp_v6 = VectorFloatToUnsigned(temp_v4,3);
  temp_v7 = VectorFloatToUnsigned(0,3);
  temp_v2 = temp_v5;
  temp_v3 = temp_v7;
  temp_v9 = (float)VectorUnsignedToFloat(temp_v5 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v5 = temp_v6 & 0xff;
  temp_v11 = (float)VectorUnsignedToFloat(temp_v6 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v8 = (float)VectorUnsignedToFloat(temp_v7 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v10 = (float)(&DAT_00407fc0)[temp_v2 * 4] + (0.0f - temp_v9) * (float)(&DAT_00407fc8)[temp_v2 * 4];
  temp_v13 = (float)(&DAT_00407fc4)[temp_v2 * 4] + (0.0f - temp_v9) * (float)(&DAT_00407fcc)[temp_v2 * 4];
  temp_v12 = (float)(&DAT_00407fc0)[temp_v3 * 4] + (0.0f - temp_v8) * (float)(&DAT_00407fc8)[temp_v3 * 4];
  temp_v9 = (float)(&DAT_00407fc0)[temp_v5 * 4] + (temp_v4 - temp_v11) * (float)(&DAT_00407fc8)[temp_v5 * 4];
  temp_v8 = (float)(&DAT_00407fc4)[temp_v3 * 4] + (0.0f - temp_v8) * (float)(&DAT_00407fcc)[temp_v3 * 4];
  temp_v32 = (float)(&DAT_00407fc4)[temp_v5 * 4] +
             (temp_v4 - temp_v11) * (float)(&DAT_00407fcc)[temp_v5 * 4];
  if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
    temp_v9 = -temp_v9;
  }
  temp_v22 = temp_v8 * temp_v32;
  temp_v30 = -temp_v9;
  temp_v26 = temp_v12 * temp_v32;
  temp_v31 = temp_v10 * temp_v32;
  temp_v32 = temp_v13 * temp_v32;
  temp_v24 = temp_v10 * temp_v12 + temp_v13 * temp_v8 * temp_v9;
  temp_v27 = temp_v13 * temp_v8 + temp_v10 * temp_v12 * temp_v9;
  temp_v23 = temp_v10 * temp_v8 * temp_v9 - temp_v13 * temp_v12;
  temp_v28 = temp_v13 * temp_v12 * temp_v9 - temp_v10 * temp_v8;
  temp_v25 = 0;
  temp_v29 = 0;
  temp_v33 = 0;
  FUN_002ad6d8(&temp_v19,&temp_v22);
  temp_v19 = temp_v15 - temp_v19 * temp_v14;
  temp_v20 = temp_v16 - temp_v20 * temp_v14;
  temp_v21 = temp_v17 - temp_v21 * temp_v14;
  DAT_0049f9e0 = temp_v19;
  DAT_0049f9e4 = temp_v20;
  DAT_0049f9e8 = temp_v21;
  DAT_0049f9ec = temp_v15;
  DAT_0049f9f0 = temp_v16;
  DAT_0049f9f4 = temp_v17;
  DAT_0049f9f8 = temp_v18;
  if (*DAT_004474f4 != 3) {
    *(unsigned char *)(DAT_004474f4 + 0x29) = 1;
    FUN_0027fe84(3);
    FUN_0027fd08(0x1d);
  }
  FUN_00273ab0(1);
  return 1;
}
