/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a1fb4` (_code @ 0x1a1fb4, 0x3d0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018aa5c(unsigned int, float *, float *, float *);
int FUN_0018af48(unsigned int, float *, float *);
int sysFatalBreak(void);
int nn_math_ARMv6_MTX44FrustumC_FAST(unsigned int);
int nn_math_ARMv6_MTX44PivotC_FAST(unsigned int, int);

/* stack frame of param_9: 17 slot(s), 68 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
} param_9_stack;

extern float DAT_0062d6d8; /* 0x62d6d8 */
extern float DAT_0062d6dc; /* 0x62d6dc */
extern float DAT_0062d6e4; /* 0x62d6e4 */
extern float fRam1ff81080; /* 0x1ff81080 */
extern signed char cRam1ff81084; /* 0x1ff81084 */

/* Supplied declaration required: FUN_0018aa5c. */
/* Supplied declaration required: FUN_0018af48. */
/* Supplied declaration required: sysFatalBreak. */
/* Supplied declaration required: nn_math_ARMv6_MTX44FrustumC_FAST. */
/* Supplied declaration required: nn_math_ARMv6_MTX44PivotC_FAST. */


void FUN_001a1fb4(float *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,float *param_6,unsigned int param_7,int param_8,int param_9,
                 float stereoParameter,float stereoScale)

{
/* The remaining body retains six native warnings pending a full matrix-builder reconstruction. */
  float temp_v0;
  float temp_v1;
  float temp_v2;
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
  float fStack_a4;
  float fStack_a0;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  float *pfStack_34;
  unsigned int uStack_30;
  unsigned int temp_v28;
  unsigned int uStack_28;
  
  temp_v11 = 0.0f;
  pfStack_34 = param_1;
  uStack_30 = param_2;
  temp_v28 = param_3;
  uStack_28 = param_4;
  if ((stereoScale < 0.0f) || ((int)stereoScale >= 0x3f800001)) {
    sysFatalBreak();
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
  temp_v4 = ((temp_v7 - temp_v1) * (stereoParameter / temp_v9)) / DAT_0062d6e4;
  if (param_8 != 0) {
    temp_v2 = DAT_0062d6dc * temp_v4;
    param_1[0x14] = temp_v2;
    temp_v5 = temp_v2 - (stereoParameter - temp_v9);
    temp_v8 = temp_v2 + (temp_v3 - stereoParameter);
    if (temp_v5 <= temp_v11) {
      temp_v5 = temp_v2 * 0.01f;
    }
    if (temp_v8 <= temp_v5) {
      temp_v8 = temp_v5 * 2.0f;
    }
    temp_v10 = temp_v10 * (stereoParameter / temp_v9) * (temp_v5 / temp_v2);
    param_1[0x17] = DAT_0062d6d8 * temp_v4;
  }
  else {
    param_1[0x14] = stereoParameter;
    temp_v8 = temp_v3;
    temp_v5 = temp_v9;
    if (temp_v3 <= stereoParameter) {
      param_1[0x17] = temp_v11;
    }
    else {
      param_1[0x17] = (temp_v3 / (temp_v3 - stereoParameter)) * param_1[0x12] * temp_v4;
    }
  }
  temp_v4 = param_1[0x17];
  param_1[0x17] = temp_v4 * stereoScale;
  if (param_9 != 0) {
    if (cRam1ff81084 == '\0') {
      temp_v11 = fRam1ff81080;
    }
    param_1[0x18] = temp_v11;
  }
  param_1[0x17] = temp_v4 * stereoScale * param_1[0x18] * 0.5f;
  nn_math_ARMv6_MTX44FrustumC_FAST(param_2);
  nn_math_ARMv6_MTX44PivotC_FAST(param_2,1);
  nn_math_ARMv6_MTX44FrustumC_FAST(param_4);
  nn_math_ARMv6_MTX44PivotC_FAST(param_4,1);
  FUN_0018af48(param_7,&temp_v12,&temp_v15);
  param_1[6] = temp_v12;
  param_1[7] = temp_v13;
  param_1[8] = temp_v14;
  param_1[9] = temp_v15;
  param_1[10] = temp_v16;
  param_1[0xb] = temp_v17;
  param_1[0xc] = temp_v18;
  param_1[0xd] = fStack_a4;
  param_1[0xe] = fStack_a0;
  temp_v11 = param_1[0x14] - stereoParameter;
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
  FUN_0018aa5c(temp_v28,&temp_v22,&temp_v18,&temp_v25);
  temp_v22 = temp_v12 + param_1[0x17] * temp_v15;
  temp_v25 = temp_v22 + temp_v19;
  temp_v23 = temp_v13 + param_1[0x17] * temp_v16;
  temp_v26 = temp_v23 + temp_v20;
  temp_v24 = temp_v14 + param_1[0x17] * temp_v17;
  temp_v27 = temp_v24 + temp_v21;
  FUN_0018aa5c(param_5,&temp_v22,&temp_v18,&temp_v25);
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
