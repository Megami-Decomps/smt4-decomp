/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fe590` (_code @ 0x2fe590, 0x38c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014f0dc(unsigned char *, float *, float *, unsigned int *);
int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(unsigned int, int);
int nn_math_ARMv6_VEC3TransformAsm_2AD44C(float *, float *);

/* stack frame of void: 25 slot(s), 100 byte(s) */
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
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
} void_stack;

extern unsigned int DAT_00536d14; /* 0x536d14 */
extern unsigned int DAT_00536d18; /* 0x536d18 */
extern unsigned int DAT_00536d1c; /* 0x536d1c */
extern unsigned int DAT_00536d20; /* 0x536d20 */
extern unsigned char DAT_00634da0; /* 0x634da0 */
extern float DAT_006352ac; /* 0x6352ac */
extern float DAT_006352b0; /* 0x6352b0 */
extern float DAT_006352b4; /* 0x6352b4 */
extern unsigned int DAT_006352b8; /* 0x6352b8 */
extern float DAT_006352c4; /* 0x6352c4 */
extern float DAT_006352c8; /* 0x6352c8 */
extern float DAT_006352cc; /* 0x6352cc */
extern float DAT_006352d0; /* 0x6352d0 */
extern float DAT_006352d4; /* 0x6352d4 */
extern float DAT_006352d8; /* 0x6352d8 */
extern float DAT_006352dc; /* 0x6352dc */
extern float DAT_006352e0; /* 0x6352e0 */
extern float DAT_006352e4; /* 0x6352e4 */

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0014f0dc. */
extern int FUN_00163fd4(unsigned int);
extern int FUN_001656a0(unsigned int, float *, float *, float *, unsigned int);
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


void FUN_002fe590(void)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
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
  float temp_v21;
  float temp_v22;
  unsigned int temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  unsigned int temp_v27;
  float temp_v28;
  float temp_v29;
  float fStack_58;
  unsigned int temp_v30;
  float temp_v31;
  float temp_v32;
  float temp_v33;
  float temp_v34;
  float temp_v35;
  float temp_v36;
  float temp_v37;
  float temp_v38;
  float temp_v39;
  float temp_v40 [4];
  
  temp_v1 = FUN_001656a0(0x1b,&temp_v38,&temp_v39,temp_v40,0);
  temp_v15 = 0.0f;
  if (temp_v1 != 0) {
    DAT_006352d0 = 0.0f;
    DAT_006352d4 = 0.0f;
    DAT_006352d8 = 0.0f;
    DAT_006352dc = 0.0f;
    DAT_006352e0 = 0.0f;
    DAT_006352e4 = 0.0f;
  }
  DAT_006352e0 = DAT_006352e0 + temp_v39 * 3.2f;
  DAT_006352dc = DAT_006352dc - temp_v40[0] * 3.2f;
  temp_v1 = FUN_00163fd4(0x1c);
  if (temp_v1 == 0) {
    DAT_006352d0 = DAT_006352d0 + temp_v37 * 10.0f;
    DAT_006352d8 = DAT_006352d8 - temp_v38 * 10.0f;
  }
  temp_v1 = FUN_00163fd4(0x17);
  temp_v16 = 5.0f;
  if (temp_v1 != 0) {
    DAT_006352d4 = DAT_006352d4 - 5.0f;
  }
  temp_v1 = FUN_00163fd4(0x12);
  if (temp_v1 != 0) {
    DAT_006352d4 = DAT_006352d4 + temp_v16;
  }
  temp_v17 = DAT_006352ac - DAT_006352c4;
  temp_v18 = DAT_006352b0 - DAT_006352c8;
  temp_v19 = DAT_006352b4 - DAT_006352cc;
  temp_v5 = romwright_fabs_4(DAT_006352e0 * 0.7111111f);
  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v15 <= DAT_006352e4 * 0.7111111f) << 0x1d);
  temp_v6 = romwright_fabs_4(DAT_006352e4 * 0.7111111f);
  for (temp_v16 = romwright_fabs_4(DAT_006352dc * 0.7111111f); (int)temp_v16 >= 0x47800000; temp_v16 = temp_v16 - 65536.0f)
  {
  }
  for (; (int)temp_v5 >= 0x47800000; temp_v5 = temp_v5 - 65536.0f) {
  }
  for (; (int)temp_v6 >= 0x47800000; temp_v6 = temp_v6 - 65536.0f) {
  }
  temp_v7 = VectorFloatToUnsigned(temp_v16,3);
  temp_v8 = VectorFloatToUnsigned(temp_v5,3);
  temp_v9 = VectorFloatToUnsigned(temp_v6,3);
  temp_v3 = temp_v8;
  temp_v2 = temp_v7;
  temp_v4 = temp_v9;
  temp_v11 = (float)VectorUnsignedToFloat(temp_v7 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v13 = (float)VectorUnsignedToFloat(temp_v8 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v10 = (float)VectorUnsignedToFloat(temp_v9 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v14 = (float)(&DAT_00536d14)[temp_v2 * 4] + (temp_v16 - temp_v11) * (float)(&DAT_00536d1c)[temp_v2 * 4]
  ;
  temp_v12 = (float)(&DAT_00536d14)[temp_v3 * 4] + (temp_v5 - temp_v13) * (float)(&DAT_00536d1c)[temp_v3 * 4];
  temp_v16 = (float)(&DAT_00536d18)[temp_v2 * 4] + (temp_v16 - temp_v11) * (float)(&DAT_00536d20)[temp_v2 * 4]
  ;
  fStack_58 = (float)(&DAT_00536d18)[temp_v3 * 4] +
              (temp_v5 - temp_v13) * (float)(&DAT_00536d20)[temp_v3 * 4];
  if (DAT_006352dc * 0.7111111f < temp_v15) {
    temp_v14 = -temp_v14;
  }
  temp_v11 = (float)(&DAT_00536d14)[temp_v4 * 4] + (temp_v6 - temp_v10) * (float)(&DAT_00536d1c)[temp_v4 * 4];
  temp_v5 = (float)(&DAT_00536d18)[temp_v4 * 4] + (temp_v6 - temp_v10) * (float)(&DAT_00536d20)[temp_v4 * 4];
  if (DAT_006352e0 * 0.7111111f < temp_v15) {
    temp_v12 = -temp_v12;
  }
  temp_v28 = -temp_v12;
  if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
    temp_v11 = -temp_v11;
  }
  temp_v20 = temp_v5 * fStack_58;
  temp_v24 = temp_v11 * fStack_58;
  temp_v29 = temp_v14 * fStack_58;
  fStack_58 = temp_v16 * fStack_58;
  temp_v21 = temp_v14 * temp_v5 * temp_v12 - temp_v16 * temp_v11;
  temp_v26 = temp_v16 * temp_v11 * temp_v12 - temp_v14 * temp_v5;
  temp_v22 = temp_v14 * temp_v11 + temp_v16 * temp_v5 * temp_v12;
  temp_v25 = temp_v16 * temp_v5 + temp_v14 * temp_v11 * temp_v12;
  temp_v23 = 0;
  temp_v27 = 0;
  temp_v30 = 0;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v17,&temp_v20);
  temp_v31 = DAT_006352c4 + DAT_006352d0;
  temp_v32 = DAT_006352c8 + DAT_006352d4;
  temp_v33 = DAT_006352cc + DAT_006352d8;
  temp_v34 = temp_v31 + temp_v17;
  temp_v35 = temp_v32 + temp_v18;
  temp_v36 = temp_v33 + temp_v19;
  FUN_0014f0dc(&DAT_00634da0,&temp_v34,&temp_v31,&DAT_006352b8);
  return;
}

} /* extern "C" */
