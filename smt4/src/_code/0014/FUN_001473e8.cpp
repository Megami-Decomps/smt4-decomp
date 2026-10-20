/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001473e8` (_code @ 0x1473e8, 0x3bc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013afbc(unsigned int, float *, float *);
int FUN_002c52f8(void);
int nn_math_ARMv6_MTX34LookAtC_FAST(unsigned int, float *, float *, float *);
int nn_math_ARMv6_MTX44FrustumC_FAST(unsigned int);
int nn_math_ARMv6_MTX44PivotC_FAST(unsigned int, int);

/* stack frame of param_8: 16 slot(s), 64 byte(s) */
typedef struct {
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_8_stack;

extern float DAT_004d4638; /* 0x4d4638 */
extern float DAT_004d463c; /* 0x4d463c */
extern float DAT_004d4644; /* 0x4d4644 */
extern float fRam1ff81080; /* 0x1ff81080 */
extern signed char cRam1ff81084; /* 0x1ff81084 */

/* Supplied declaration required: FUN_0013afbc. */
/* Supplied declaration required: FUN_002c52f8. */
/* Supplied declaration required: nn_math_ARMv6_MTX34LookAtC_FAST. */
/* Supplied declaration required: nn_math_ARMv6_MTX44FrustumC_FAST. */
/* Supplied declaration required: nn_math_ARMv6_MTX44PivotC_FAST. */


void FUN_001473e8(float *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,float *param_6,unsigned int param_7,int param_8)

{
/* irregular: irregular input(s): in_s0, in_s1; 6 native warning(s); review required */
  float in_s0;
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float in_s1;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
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
  float fStack_8c;
  float fStack_88;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  
  temp_v11 = 0.0f;
  if ((in_s1 < 0.0f) || ((int)in_s1 >= 0x3f800001)) {
    FUN_002c52f8();
  }
  temp_v4 = param_6[10];
  temp_v3 = param_6[0xb];
  temp_v9 = temp_v3 / temp_v4;
  temp_v0 = temp_v3 / (*param_6 * temp_v4);
  temp_v6 = (param_6[2] - 1.0f) * temp_v0;
  temp_v0 = (param_6[2] + 1.0f) * temp_v0;
  temp_v1 = temp_v3 / (param_6[5] * temp_v4);
  temp_v10 = temp_v0 - temp_v6;
  temp_v7 = (param_6[6] + 1.0f) * temp_v1;
  temp_v1 = (param_6[6] - 1.0f) * temp_v1;
  temp_v3 = temp_v3 / (temp_v4 - 1.0f);
  temp_v4 = ((temp_v7 - temp_v1) * (in_s0 / temp_v9)) / DAT_004d4644;
  if (param_8 != 0) {
    temp_v2 = DAT_004d463c * temp_v4;
    param_1[0x14] = temp_v2;
    temp_v5 = temp_v2 - (in_s0 - temp_v9);
    temp_v8 = temp_v2 + (temp_v3 - in_s0);
    if (temp_v5 <= temp_v11) {
      temp_v5 = temp_v2 * 0.01f;
    }
    if (temp_v8 <= temp_v5) {
      temp_v8 = temp_v5 * 2.0f;
    }
    temp_v10 = temp_v10 * (in_s0 / temp_v9) * (temp_v5 / temp_v2);
    param_1[0x17] = DAT_004d4638 * temp_v4;
  }
  else {
    param_1[0x14] = in_s0;
    temp_v8 = temp_v3;
    temp_v5 = temp_v9;
    if (temp_v3 <= in_s0) {
      param_1[0x17] = temp_v11;
    }
    else {
      param_1[0x17] = (temp_v3 / (temp_v3 - in_s0)) * param_1[0x12] * temp_v4;
    }
  }
  temp_v4 = param_1[0x17];
  param_1[0x17] = temp_v4 * in_s1;
  if (cRam1ff81084 == '\0') {
    temp_v11 = fRam1ff81080;
  }
  param_1[0x17] = temp_v11 * temp_v4 * in_s1 * 0.5f;
  nn_math_ARMv6_MTX44FrustumC_FAST(param_2);
  nn_math_ARMv6_MTX44PivotC_FAST(param_2,1);
  nn_math_ARMv6_MTX44FrustumC_FAST(param_4);
  nn_math_ARMv6_MTX44PivotC_FAST(param_4,1);
  FUN_0013afbc(param_7,&temp_v12,&temp_v15);
  param_1[6] = temp_v12;
  param_1[7] = temp_v13;
  param_1[8] = temp_v14;
  param_1[9] = temp_v15;
  param_1[10] = temp_v16;
  param_1[0xb] = temp_v17;
  param_1[0xc] = temp_v18;
  param_1[0xd] = fStack_8c;
  param_1[0xe] = fStack_88;
  temp_v11 = param_1[0x14] - in_s0;
  param_1[0xf] = temp_v19;
  param_1[0x10] = temp_v20;
  param_1[0x11] = temp_v21;
  temp_v12 = temp_v12 - temp_v11 * temp_v19;
  temp_v13 = temp_v13 - temp_v11 * temp_v20;
  temp_v14 = temp_v14 - temp_v11 * temp_v21;
  temp_v22 = temp_v12 - param_1[0x17] * temp_v15;
  temp_v25 = temp_v22 + temp_v19;
  temp_v23 = temp_v13 - param_1[0x17] * temp_v16;
  temp_v26 = temp_v23 + temp_v20;
  temp_v24 = temp_v14 - param_1[0x17] * temp_v17;
  temp_v27 = temp_v24 + temp_v21;
  nn_math_ARMv6_MTX34LookAtC_FAST(param_3,&temp_v22,&temp_v18,&temp_v25);
  temp_v22 = temp_v12 + param_1[0x17] * temp_v15;
  temp_v25 = temp_v22 + temp_v19;
  temp_v23 = temp_v13 + param_1[0x17] * temp_v16;
  temp_v26 = temp_v23 + temp_v20;
  temp_v24 = temp_v14 + param_1[0x17] * temp_v17;
  temp_v27 = temp_v24 + temp_v21;
  nn_math_ARMv6_MTX34LookAtC_FAST(param_5,&temp_v22,&temp_v18,&temp_v25);
  param_1[0x15] = temp_v5;
  param_1[0x16] = temp_v8;
  param_1[2] = temp_v1;
  param_1[3] = temp_v7;
  param_1[4] = temp_v9;
  param_1[5] = temp_v3;
  *param_1 = temp_v6;
  param_1[1] = temp_v0;
  param_1[0x13] = (param_1[0x14] / temp_v5) * temp_v10;
  return;
}

} /* extern "C" */
