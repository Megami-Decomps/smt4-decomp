/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cfb18` (_code @ 0x2cfb18, 0x4e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019e3d0(...);
int FUN_002b5cb4(void);
int FUN_002d8ac4(void);
int FUN_0050d8e4(void);
int VectorFloatToUnsigned(...);
int VectorUnsignedToFloat(unsigned int, int);
int nn_math_ARMv6_VEC3TransformAsm_2AD44C(float *, float *, float *);

/* stack frame of void: 30 slot(s), 120 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
} void_stack;

extern unsigned int DAT_00536d14; /* 0x536d14 */
extern unsigned int DAT_00536d18; /* 0x536d18 */
extern unsigned int DAT_00536d1c; /* 0x536d1c */
extern unsigned int DAT_00536d20; /* 0x536d20 */
extern int DAT_005806a4; /* 0x5806a4 */
extern int g_lmapScene; /* 0x581288 */
extern float DAT_005f0c94; /* 0x5f0c94 */
extern float DAT_005f0c98; /* 0x5f0c98 */
extern float DAT_005f0c9c; /* 0x5f0c9c */
extern int DAT_005f0ca8; /* 0x5f0ca8 */
extern int DAT_005f0d2c; /* 0x5f0d2c */
extern signed char DAT_005f161c; /* 0x5f161c */
extern signed char DAT_005f161d; /* 0x5f161d */

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
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_0019e3d0. */
/* Supplied declaration required: FUN_002b5cb4. */
/* Supplied declaration required: FUN_002d8ac4. */
/* Supplied declaration required: FUN_0050d8e4. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


/* WARNING: Removing unreachable block (ram,0x002cfcf0) */
/* WARNING: Removing unreachable block (ram,0x002cfd00) */
/* WARNING: Removing unreachable block (ram,0x002cfc2c) */

void FUN_002cfb18(void)

{
/* irregular: irregular input(s): in_fpscr; 10 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  unsigned int in_fpscr;
  float temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  unsigned int temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  float temp_v29;
  float temp_v30;
  float temp_v31;
  float temp_v32;
  float temp_v33;
  float temp_v34;
  float temp_v35;
  float temp_v36;
  float temp_v37;
  float fStack_68;
  unsigned int temp_v38;
  float temp_v39;
  float temp_v40;
  float temp_v41;
  unsigned int temp_v42;
  float temp_v43;
  float temp_v44;
  float temp_v45;
  unsigned int temp_v46;
  
  temp_v1 = FUN_0018719c(0x4d0);
  if ((((temp_v1 != 0) && (DAT_005f161c == '\0')) && (DAT_005f161d == '\0')) &&
     ((DAT_005f0ca8 == 8 || (DAT_005f0ca8 == 9)))) {
    temp_v20 = DAT_005f0c98 + 220.0f;
    temp_v1 = *(int *)(g_lmapScene + 0x1c);
    temp_v17 = 20.0f;
    temp_v15 = DAT_005f0c94;
    temp_v16 = DAT_005f0c9c;
    FUN_002b5cb4();
    temp_v6 = *(float *)(DAT_005806a4 + 0x50) - temp_v15;
    FUN_0050d8e4();
    temp_v6 = temp_v6 * 57.32484f * 0.7111111f;
    temp_v7 = 0;
    temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v6) << 0x1d);
    for (temp_v6 = romwright_fabs_4(temp_v6); (int)temp_v6 >= 0x47800000; temp_v6 = temp_v6 - 65536.0f) {
    }
    temp_v8 = VectorFloatToUnsigned(0,3);
    temp_v9 = VectorFloatToUnsigned(temp_v6,3);
    temp_v10 = VectorFloatToUnsigned(0,3);
    temp_v2 = temp_v8;
    temp_v5 = temp_v10;
    temp_v14 = (float)VectorUnsignedToFloat(temp_v8 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v8 = temp_v9 & 0xff;
    temp_v12 = (float)VectorUnsignedToFloat(temp_v9 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v11 = (float)VectorUnsignedToFloat(temp_v10 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v13 = (float)(&DAT_00536d14)[temp_v8 * 4] +
             (temp_v6 - temp_v12) * (float)(&DAT_00536d1c)[temp_v8 * 4];
    temp_v45 = (float)(&DAT_00536d18)[temp_v8 * 4] +
               (temp_v6 - temp_v12) * (float)(&DAT_00536d20)[temp_v8 * 4];
    temp_v6 = (float)(&DAT_00536d14)[temp_v2 * 4] + (0.0f - temp_v14) * (float)(&DAT_00536d1c)[temp_v2 * 4];
    temp_v14 = (float)(&DAT_00536d18)[temp_v2 * 4] + (0.0f - temp_v14) * (float)(&DAT_00536d20)[temp_v2 * 4];
    temp_v12 = (float)(&DAT_00536d14)[temp_v5 * 4] + (0.0f - temp_v11) * (float)(&DAT_00536d1c)[temp_v5 * 4];
    temp_v11 = (float)(&DAT_00536d18)[temp_v5 * 4] + (0.0f - temp_v11) * (float)(&DAT_00536d20)[temp_v5 * 4];
    if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
      temp_v13 = -temp_v13;
    }
    temp_v36 = temp_v11 * temp_v45;
    temp_v43 = -temp_v13;
    temp_v39 = temp_v12 * temp_v45;
    temp_v44 = temp_v6 * temp_v45;
    temp_v45 = temp_v14 * temp_v45;
    temp_v37 = temp_v6 * temp_v11 * temp_v13 - temp_v14 * temp_v12;
    fStack_68 = temp_v6 * temp_v12 + temp_v14 * temp_v11 * temp_v13;
    temp_v41 = temp_v14 * temp_v12 * temp_v13 - temp_v6 * temp_v11;
    temp_v40 = temp_v14 * temp_v11 + temp_v6 * temp_v12 * temp_v13;
    temp_v38 = 0;
    temp_v42 = 0;
    temp_v6 = -temp_v17;
    temp_v46 = 0;
    temp_v23 = 0;
    temp_v21 = temp_v6;
    temp_v22 = temp_v17;
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v24,&temp_v36,&temp_v21);
    temp_v21 = temp_v6;
    temp_v22 = temp_v6;
    temp_v23 = temp_v7;
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v27,&temp_v36,&temp_v21);
    temp_v21 = temp_v17;
    temp_v22 = temp_v17;
    temp_v23 = temp_v7;
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v30,&temp_v36,&temp_v21);
    temp_v21 = temp_v17;
    temp_v22 = temp_v6;
    temp_v23 = temp_v7;
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v33,&temp_v36,&temp_v21);
    temp_v18 = 0x3f280000;
    temp_v19 = 0x3f280000;
    temp_v24 = temp_v24 + temp_v15;
    temp_v25 = temp_v25 + temp_v20;
    temp_v26 = temp_v26 + temp_v16;
    temp_v27 = temp_v27 + temp_v15;
    temp_v28 = temp_v28 + temp_v20;
    temp_v29 = temp_v29 + temp_v16;
    temp_v30 = temp_v30 + temp_v15;
    temp_v31 = temp_v31 + temp_v20;
    temp_v32 = temp_v32 + temp_v16;
    temp_v33 = temp_v33 + temp_v15;
    temp_v34 = temp_v34 + temp_v20;
    temp_v35 = temp_v35 + temp_v16;
    DAT_005f0d2c = DAT_005f0d2c + 1;
    if (DAT_005f0d2c % 0x14 < 10) {
      temp_v18 = 0x3ea80000;
    }
    if (temp_v1 < 0x43c80000) {
      temp_v3 = 0xef6c3eff;
      temp_v4 = 0xfe0b22ff;
    }
    else if (temp_v1 < 0x44480000) {
      temp_v3 = 0xfbc30dff;
      temp_v4 = 0xff6c2bff;
    }
    else if (temp_v1 < 0x44960000) {
      temp_v3 = 0xfff2c0ff;
      temp_v4 = 0xffd52dff;
    }
    else {
      temp_v4 = 0x2db5ffff;
      temp_v3 = 0xffffffff;
    }
    FUN_002d8ac4();
    FUN_0019e3d0(temp_v3,temp_v4,temp_v3,temp_v4,temp_v18,temp_v7,temp_v18,temp_v19);
    FUN_0019e3d0(0xff,0xff,0xff,0xff,0x3f7c0000,temp_v7,0x3f7c0000,temp_v19);
  }
  return;
}

} /* extern "C" */
