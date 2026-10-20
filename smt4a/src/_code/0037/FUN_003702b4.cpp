/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003702b4` (_code @ 0x3702b4, 0x2b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00303460(int);
int FUN_00313648(int);
int FUN_003a2278(int);
int VectorFloatToUnsigned(...);
int VectorSignedToFloat(unsigned int, int);
int VectorUnsignedToFloat(unsigned int, int);
int nn_math_ARMv6_VEC3TransformAsm_2AD44C(float *, float *);

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

extern unsigned int DAT_00536d14; /* 0x536d14 */
extern unsigned int DAT_00536d18; /* 0x536d18 */
extern unsigned int DAT_00536d1c; /* 0x536d1c */
extern unsigned int DAT_00536d20; /* 0x536d20 */
extern int *DAT_005806a4; /* 0x5806a4 */
extern float DAT_005f16f0; /* 0x5f16f0 */
extern float DAT_005f16f4; /* 0x5f16f4 */
extern float DAT_005f16f8; /* 0x5f16f8 */
extern float DAT_005f16fc; /* 0x5f16fc */
extern float DAT_005f1700; /* 0x5f1700 */
extern float DAT_005f1704; /* 0x5f1704 */
extern unsigned int DAT_005f1708; /* 0x5f1708 */

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
extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_00303460. */
/* Supplied declaration required: FUN_00313648. */
/* Supplied declaration required: FUN_003a2278. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


/* WARNING: Removing unreachable block (ram,0x00370428) */
/* WARNING: Removing unreachable block (ram,0x00370448) */
/* WARNING: Removing unreachable block (ram,0x00370378) */

unsigned int FUN_003702b4(void)

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
  
  temp_v1 = FUN_00236038(0);
  temp_v15 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = FUN_00236038(1);
  temp_v16 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = FUN_00236038(2);
  temp_v17 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = FUN_00236038(3);
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
  temp_v10 = (float)(&DAT_00536d14)[temp_v2 * 4] + (0.0f - temp_v9) * (float)(&DAT_00536d1c)[temp_v2 * 4];
  temp_v13 = (float)(&DAT_00536d18)[temp_v2 * 4] + (0.0f - temp_v9) * (float)(&DAT_00536d20)[temp_v2 * 4];
  temp_v12 = (float)(&DAT_00536d14)[temp_v3 * 4] + (0.0f - temp_v8) * (float)(&DAT_00536d1c)[temp_v3 * 4];
  temp_v9 = (float)(&DAT_00536d14)[temp_v5 * 4] + (temp_v4 - temp_v11) * (float)(&DAT_00536d1c)[temp_v5 * 4];
  temp_v8 = (float)(&DAT_00536d18)[temp_v3 * 4] + (0.0f - temp_v8) * (float)(&DAT_00536d20)[temp_v3 * 4];
  temp_v32 = (float)(&DAT_00536d18)[temp_v5 * 4] +
             (temp_v4 - temp_v11) * (float)(&DAT_00536d20)[temp_v5 * 4];
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
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v19,&temp_v22);
  temp_v19 = temp_v15 - temp_v19 * temp_v14;
  temp_v20 = temp_v16 - temp_v20 * temp_v14;
  temp_v21 = temp_v17 - temp_v21 * temp_v14;
  DAT_005f16f0 = temp_v19;
  DAT_005f16f4 = temp_v20;
  DAT_005f16f8 = temp_v21;
  DAT_005f16fc = temp_v15;
  DAT_005f1700 = temp_v16;
  DAT_005f1704 = temp_v17;
  DAT_005f1708 = temp_v18;
  if (*DAT_005806a4 != 3) {
    *(unsigned char *)(DAT_005806a4 + 0x2a) = 1;
    FUN_00303460(3);
    FUN_00313648(0x1d);
  }
  FUN_003a2278(1);
  return 1;
}

} /* extern "C" */
