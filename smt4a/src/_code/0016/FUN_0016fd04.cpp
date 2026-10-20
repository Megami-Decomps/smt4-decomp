/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016fd04` (_code @ 0x16fd04, 0x33c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018aa5c(unsigned int, float *, float *, float *);
int sysFatalBreak(void);
int nn_math_ARMv6_MTX44FrustumC_FAST(unsigned int);
int nn_math_ARMv6_MTX44PivotC_FAST(unsigned int, unsigned int);

/* stack frame of param_7: 28 slot(s), 112 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp50; /* 0x50: local_50 */
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
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
} param_7_stack;

extern float DAT_0062d6e4; /* 0x62d6e4 */
extern float fRam1ff81080; /* 0x1ff81080 */
extern signed char cRam1ff81084; /* 0x1ff81084 */

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Supplied declaration required: FUN_0018aa5c. */
/* Supplied declaration required: sysFatalBreak. */
/* Supplied declaration required: nn_math_ARMv6_MTX44FrustumC_FAST. */
/* Supplied declaration required: nn_math_ARMv6_MTX44PivotC_FAST. */


void FUN_0016fd04(float *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6,int param_7)

{
/* irregular: irregular input(s): in_s0, in_s1; 5 native warning(s); review required */
  float in_s0;
  float temp_v0;
  float temp_v1;
  float in_s1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float fStack_a0;
  float fStack_9c;
  float temp_v8;
  float fStack_94;
  float fStack_90;
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
  float temp_v21;
  float fStack_58;
  float fStack_54;
  float temp_v22;
  float fStack_4c;
  float fStack_48;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  
  temp_v3 = 0.0f;
  if ((in_s1 < 0.0f) || ((int)in_s1 >= 0x3f800001)) {
    sysFatalBreak();
  }
  param_1[0x14] = in_s0;
  temp_v2 = param_1[4] * DAT_0062d6e4;
  temp_v0 = param_1[5];
  temp_v1 = temp_v0;
  if (temp_v0 <= in_s0) {
    param_1[0x17] = temp_v3;
    temp_v1 = temp_v3;
  }
  if (in_s0 < temp_v0) {
    temp_v1 = (temp_v1 / (temp_v1 - in_s0)) *
            ((romwright_fabs_4(param_1[3] - param_1[2]) * in_s0) / temp_v2) * param_1[0x12];
    param_1[0x17] = temp_v1;
  }
  param_1[0x17] = temp_v1 * in_s1;
  if (param_7 != 0) {
    if (cRam1ff81084 == '\0') {
      temp_v3 = fRam1ff81080;
    }
    param_1[0x18] = temp_v3;
  }
  temp_v3 = temp_v1 * in_s1 * param_1[0x18] * 0.5f;
  param_1[0x17] = temp_v3;
  temp_v12 = (temp_v3 * param_1[4]) / in_s0 + *param_1;
  temp_v13 = (temp_v3 * param_1[4]) / in_s0 + param_1[1];
  temp_v14 = param_1[2];
  temp_v15 = param_1[3];
  temp_v16 = param_1[4];
  temp_v17 = param_1[5];
  temp_v3 = param_1[0x17];
  temp_v18 = param_1[6] - param_1[9] * temp_v3;
  temp_v19 = param_1[7] - param_1[10] * temp_v3;
  temp_v20 = param_1[8] - param_1[0xb] * temp_v3;
  temp_v23 = temp_v18 + param_1[0xf];
  temp_v24 = temp_v19 + param_1[0x10];
  temp_v25 = temp_v20 + param_1[0x11];
  temp_v21 = param_1[9];
  fStack_58 = param_1[10];
  fStack_54 = param_1[0xb];
  temp_v22 = param_1[0xc];
  fStack_4c = param_1[0xd];
  fStack_48 = param_1[0xe];
  temp_v3 = param_1[0x17];
  temp_v4 = param_1[6] + param_1[9] * temp_v3;
  temp_v5 = param_1[7] + param_1[10] * temp_v3;
  temp_v6 = param_1[8] + param_1[0xb] * temp_v3;
  temp_v9 = temp_v4 + param_1[0xf];
  temp_v10 = temp_v5 + param_1[0x10];
  temp_v11 = temp_v6 + param_1[0x11];
  temp_v7 = param_1[9];
  fStack_a0 = param_1[10];
  fStack_9c = param_1[0xb];
  temp_v8 = param_1[0xc];
  fStack_94 = param_1[0xd];
  fStack_90 = param_1[0xe];
  param_1[0x15] = param_1[4];
  param_1[0x16] = param_1[5];
  param_1[0x13] = romwright_fabs_4(param_1[1] - *param_1) * (param_1[0x14] / param_1[4]);
  nn_math_ARMv6_MTX44FrustumC_FAST(param_2);
  nn_math_ARMv6_MTX44PivotC_FAST(param_2,param_6);
  nn_math_ARMv6_MTX44FrustumC_FAST(param_4);
  nn_math_ARMv6_MTX44PivotC_FAST(param_4,param_6);
  FUN_0018aa5c(param_3,&temp_v18,&temp_v22,&temp_v23);
  FUN_0018aa5c(param_5,&temp_v4,&temp_v8,&temp_v9);
  return;
}

} /* extern "C" */
