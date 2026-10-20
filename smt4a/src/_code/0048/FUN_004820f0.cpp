/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004820f0` (_code @ 0x4820f0, 0x254 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00481dd8(int);
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

extern unsigned int DAT_00536d14; /* 0x536d14 */
extern unsigned int DAT_00536d18; /* 0x536d18 */
extern unsigned int DAT_00536d1c; /* 0x536d1c */
extern unsigned int DAT_00536d20; /* 0x536d20 */
extern int g_lmapScene; /* 0x581288 */

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
/* Supplied declaration required: FUN_00481dd8. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


/* WARNING: Removing unreachable block (ram,0x0048222c) */
/* WARNING: Removing unreachable block (ram,0x0048223c) */
/* WARNING: Removing unreachable block (ram,0x0048216c) */

void FUN_004820f0(int param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s2; 10 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v4;
  float in_s2;
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
  float temp_v18;
  float temp_v19;
  unsigned int temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  unsigned int temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  unsigned int temp_v28;
  
  temp_v13 = 1000.0f;
  temp_v1 = *(int *)(param_1 + 0xc);
  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= in_s0 * in_s2) << 0x1d);
  for (temp_v4 = romwright_fabs_4(in_s0 * in_s2); (int)temp_v4 >= 0x47800000; temp_v4 = temp_v4 - 65536.0f) {
  }
  temp_v5 = VectorFloatToUnsigned(0,3);
  temp_v6 = VectorFloatToUnsigned(temp_v4,3);
  temp_v7 = VectorFloatToUnsigned(0,3);
  temp_v2 = temp_v5;
  temp_v10 = (float)VectorUnsignedToFloat(temp_v5 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v5 = temp_v6 & 0xff;
  temp_v3 = temp_v7;
  temp_v9 = (float)VectorUnsignedToFloat(temp_v7 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v8 = (float)VectorUnsignedToFloat(temp_v6 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v12 = (float)(&DAT_00536d14)[temp_v2 * 4] + (0.0f - temp_v10) * (float)(&DAT_00536d1c)[temp_v2 * 4];
  temp_v11 = (float)(&DAT_00536d18)[temp_v2 * 4] + (0.0f - temp_v10) * (float)(&DAT_00536d20)[temp_v2 * 4];
  temp_v10 = (float)(&DAT_00536d14)[temp_v5 * 4] + (temp_v4 - temp_v8) * (float)(&DAT_00536d1c)[temp_v5 * 4];
  temp_v27 = (float)(&DAT_00536d18)[temp_v5 * 4] + (temp_v4 - temp_v8) * (float)(&DAT_00536d20)[temp_v5 * 4]
  ;
  temp_v4 = (float)(&DAT_00536d14)[temp_v3 * 4] + (0.0f - temp_v9) * (float)(&DAT_00536d1c)[temp_v3 * 4];
  temp_v8 = (float)(&DAT_00536d18)[temp_v3 * 4] + (0.0f - temp_v9) * (float)(&DAT_00536d20)[temp_v3 * 4];
  if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
    temp_v10 = -temp_v10;
  }
  temp_v17 = temp_v8 * temp_v27;
  temp_v25 = -temp_v10;
  temp_v21 = temp_v4 * temp_v27;
  temp_v26 = temp_v12 * temp_v27;
  temp_v27 = temp_v11 * temp_v27;
  temp_v19 = temp_v12 * temp_v4 + temp_v11 * temp_v8 * temp_v10;
  temp_v22 = temp_v11 * temp_v8 + temp_v12 * temp_v4 * temp_v10;
  temp_v18 = temp_v12 * temp_v8 * temp_v10 - temp_v11 * temp_v4;
  temp_v23 = temp_v11 * temp_v4 * temp_v10 - temp_v12 * temp_v8;
  temp_v20 = 0;
  temp_v24 = 0;
  temp_v28 = 0;
  temp_v14 = 1.0f;
  temp_v15 = 0.0f;
  temp_v16 = 0.0f;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v14,&temp_v17);
  temp_v14 = temp_v14 * temp_v13 + *(float *)(g_lmapScene + 0x1c);
  temp_v15 = temp_v15 * temp_v13 + *(float *)(g_lmapScene + 0x20);
  temp_v16 = temp_v16 * temp_v13 + *(float *)(g_lmapScene + 0x24);
  *(float *)(temp_v1 + 0x2c) = temp_v14;
  *(float *)(temp_v1 + 0x30) = temp_v15;
  *(float *)(temp_v1 + 0x34) = temp_v16;
  FUN_00481dd8(param_1);
  return;
}

} /* extern "C" */
