/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f9f90` (_code @ 0x2f9f90, 0xe30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030f3e8(void);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_3: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} param_3_stack;

extern float DAT_00472530; /* 0x472530 */
extern float DAT_00472534; /* 0x472534 */
extern float DAT_00472538; /* 0x472538 */
extern unsigned int DAT_0047253c; /* 0x47253c */
extern float DAT_00472550; /* 0x472550 */
extern float DAT_00472554; /* 0x472554 */
extern float DAT_00472558; /* 0x472558 */
extern float DAT_0047255c; /* 0x47255c */
extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern float DAT_004ea92c; /* 0x4ea92c */
extern float DAT_004ea930; /* 0x4ea930 */
extern float DAT_004ea934; /* 0x4ea934 */
extern float DAT_004ea938; /* 0x4ea938 */
extern float DAT_004ea93c; /* 0x4ea93c */
extern float DAT_004ea940; /* 0x4ea940 */
extern float DAT_004ea944; /* 0x4ea944 */
extern float DAT_004ea948; /* 0x4ea948 */
extern float DAT_004ea95c; /* 0x4ea95c */
extern float DAT_004ea960; /* 0x4ea960 */
extern float DAT_004ea964; /* 0x4ea964 */
extern float DAT_004ea968; /* 0x4ea968 */
extern float DAT_004ea96c; /* 0x4ea96c */
extern float DAT_004ea970; /* 0x4ea970 */
extern float DAT_004ea974; /* 0x4ea974 */
extern float DAT_004ea978; /* 0x4ea978 */
extern float DAT_004ea97c; /* 0x4ea97c */
extern float DAT_004ea980; /* 0x4ea980 */
extern float DAT_004ea984; /* 0x4ea984 */
extern float DAT_004ea988; /* 0x4ea988 */
extern float DAT_004ea99c; /* 0x4ea99c */
extern float DAT_004ea9a0; /* 0x4ea9a0 */
extern float DAT_004ea9a4; /* 0x4ea9a4 */
extern unsigned int DAT_004ea9a8; /* 0x4ea9a8 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: FUN_0030f3e8. */


void FUN_002f9f90(unsigned int *param_1,int param_2,float *param_3)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 4 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned short *puVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  unsigned int temp_v2;
  float temp_v3;
  float temp_v4;
  unsigned short temp_v5;
  unsigned int temp_v6;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v7;
  float temp_v8;
  unsigned long long temp_v9;
  unsigned long long temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  
  temp_v2 = 3;
  piVar1 = (int *)param_1[4];
  temp_v6 = (unsigned int)*(unsigned short *)((int)piVar1 + 10);
  temp_v1 = *(int *)(*piVar1 + 0x30);
  piVar1[0x16] = piVar1[0x16] | 1;
  pfVar7 = (float *)(temp_v1 + temp_v6 * param_2 * 0xc);
  pfVar6 = pfVar7 + (temp_v6 * 3 - 0xf);
  pfVar5 = pfVar7 + (temp_v6 * 3 - 6);
  if (temp_v6 >= 4) {
    do {
      temp_v3 = pfVar6[1];
      temp_v4 = pfVar6[2];
      temp_v2 = (temp_v2 + 3) & 0xffff;
      *pfVar5 = *pfVar6;
      pfVar5[1] = temp_v3;
      pfVar5[2] = temp_v4;
      pfVar6 = pfVar6 + -9;
      pfVar5 = pfVar5 + -9;
    } while (temp_v2 < temp_v6);
  }
  temp_v3 = param_3[1];
  temp_v4 = param_3[2];
  pfVar7[3] = *param_3;
  pfVar7[4] = temp_v3;
  pfVar7[5] = temp_v4;
  temp_v6 = (temp_v6 / 3 - 1) & 0xffff;
  puVar4 = (unsigned short *)(param_1[6] + param_2 * 2);
  temp_v2 = (unsigned int)*puVar4;
  if (temp_v2 <= temp_v6) {
    temp_v0 = temp_v2 + 1;
    temp_v2 = temp_v0 & 0xffff;
    *puVar4 = (unsigned short)temp_v0;
  }
  temp_v4 = 1.0f;
  temp_v9 = 0;
  temp_v12 = 0.0f;
  temp_v0 = 0;
  temp_v16 = 0.0f;
  temp_v15 = 0.0f;
  temp_v14 = 0.0f;
  temp_v11 = 0.0f;
  temp_v13 = 0.0f;
  pfVar5 = pfVar7;
  temp_v3 = temp_v4;
  if (temp_v2 >= 2) {
    temp_v5 = temp_v2 - 1;
    temp_v8 = (float)VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v3 = (float)VectorUnsignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = (float)VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_004ea99c = DAT_00472530;
    temp_v8 = temp_v8 / temp_v3;
    DAT_004ea9a0 = DAT_00472534;
    DAT_004ea9a4 = DAT_00472538;
    temp_v9 = (unsigned long long)(unsigned int)(in_s0 * temp_v8);
    DAT_004ea9a8 = DAT_0047253c;
    DAT_004ea92c = (float)*param_1;
    DAT_004ea930 = (float)param_1[1];
    DAT_004ea934 = (float)param_1[2];
    DAT_004ea938 = (float)param_1[3];
    temp_v7 = temp_v8 / temp_v7;
    DAT_004ea93c = pfVar7[3];
    DAT_004ea940 = pfVar7[4];
    DAT_004ea944 = pfVar7[5];
    DAT_004ea948 = DAT_0047255c;
    DAT_00472550 = pfVar7[0xc];
    DAT_00472554 = pfVar7[0xd];
    DAT_00472558 = pfVar7[0xe];
    DAT_004ea91c = DAT_00472550 - DAT_004ea93c;
    DAT_004ea920 = DAT_00472554 - DAT_004ea940;
    DAT_004ea924 = DAT_00472558 - DAT_004ea944;
    DAT_004ea928 = DAT_0047255c - DAT_0047255c;
    temp_v3 = romwright_sqrt_4(DAT_004ea91c * DAT_004ea91c + DAT_004ea920 * DAT_004ea920 +
                 DAT_004ea924 * DAT_004ea924);
    if (0.0f < temp_v3) {
      DAT_004ea91c = DAT_004ea91c / temp_v3;
      DAT_004ea920 = DAT_004ea920 / temp_v3;
      DAT_004ea924 = DAT_004ea924 / temp_v3;
    }
    temp_v16 = DAT_004ea91c;
    temp_v12 = DAT_004ea920;
    temp_v15 = DAT_004ea924;
    temp_v10 = (unsigned long long)(unsigned int)DAT_004ea928;
    FUN_0030f3e8();
    temp_v4 = (float)temp_v10;
    temp_v14 = DAT_004ea99c * DAT_004ea95c + DAT_004ea9a0 * DAT_004ea96c +
               DAT_004ea9a4 * DAT_004ea97c;
    temp_v11 = DAT_004ea99c * DAT_004ea960 + DAT_004ea9a0 * DAT_004ea970 +
               DAT_004ea9a4 * DAT_004ea980;
    temp_v13 = DAT_004ea99c * DAT_004ea964 + DAT_004ea9a0 * DAT_004ea974 +
               DAT_004ea9a4 * DAT_004ea984;
    temp_v3 = DAT_004ea99c * DAT_004ea968 + DAT_004ea9a0 * DAT_004ea978 + DAT_004ea9a4 * DAT_004ea988;
    DAT_004ea924 = (float)temp_v9;
    DAT_004ea928 = temp_v3 * DAT_004ea924;
    DAT_004ea91c = temp_v14 * DAT_004ea924;
    DAT_004ea920 = temp_v11 * DAT_004ea924;
    DAT_004ea924 = temp_v13 * DAT_004ea924;
    DAT_004ea93c = DAT_004ea93c + DAT_004ea91c;
    DAT_00472554 = DAT_004ea940 + DAT_004ea920;
    DAT_00472558 = DAT_004ea944 + DAT_004ea924;
    DAT_004ea948 = DAT_004ea948 + DAT_004ea928;
    DAT_004ea940 = DAT_00472554;
    DAT_004ea944 = DAT_00472558;
    *pfVar7 = DAT_004ea93c;
    pfVar7[1] = DAT_00472554;
    pfVar7[2] = DAT_00472558;
    temp_v8 = temp_v8 - temp_v7;
    temp_v0 = 1;
    DAT_00472554 = (DAT_004ea940 - DAT_004ea920) - DAT_004ea920;
    DAT_00472558 = (DAT_004ea944 - DAT_004ea924) - DAT_004ea924;
    DAT_0047255c = (DAT_004ea948 - DAT_004ea928) - DAT_004ea928;
    pfVar7[6] = (DAT_004ea93c - DAT_004ea91c) - DAT_004ea91c;
    pfVar7[7] = DAT_00472554;
    pfVar7[8] = DAT_00472558;
    pfVar5 = pfVar7 + 9;
    if (temp_v5 >= 2) {
      do {
        DAT_004ea93c = pfVar5[3];
        DAT_004ea940 = pfVar5[4];
        DAT_004ea944 = pfVar5[5];
        DAT_004ea948 = DAT_0047255c;
        DAT_00472550 = pfVar5[0xc];
        DAT_00472554 = pfVar5[0xd];
        DAT_00472558 = pfVar5[0xe];
        DAT_004ea91c = DAT_00472550 - DAT_004ea93c;
        DAT_004ea920 = DAT_00472554 - DAT_004ea940;
        DAT_004ea924 = DAT_00472558 - DAT_004ea944;
        DAT_004ea928 = DAT_0047255c - DAT_0047255c;
        temp_v4 = romwright_sqrt_4(DAT_004ea91c * DAT_004ea91c + DAT_004ea920 * DAT_004ea920 +
                      DAT_004ea924 * DAT_004ea924);
        if ((float)(temp_v9 >> 0x20) < temp_v4) {
          DAT_004ea91c = DAT_004ea91c / temp_v4;
          DAT_004ea920 = DAT_004ea920 / temp_v4;
          DAT_004ea924 = DAT_004ea924 / temp_v4;
        }
        FUN_0030f3e8();
        temp_v4 = (float)temp_v10;
        DAT_004ea928 = in_s0 * temp_v8;
        temp_v8 = temp_v8 - temp_v7;
        DAT_004ea91c = (DAT_004ea99c * DAT_004ea95c + DAT_004ea9a0 * DAT_004ea96c +
                       DAT_004ea9a4 * DAT_004ea97c) * DAT_004ea928;
        DAT_004ea920 = (DAT_004ea99c * DAT_004ea960 + DAT_004ea9a0 * DAT_004ea970 +
                       DAT_004ea9a4 * DAT_004ea980) * DAT_004ea928;
        DAT_004ea924 = (DAT_004ea99c * DAT_004ea964 + DAT_004ea9a0 * DAT_004ea974 +
                       DAT_004ea9a4 * DAT_004ea984) * DAT_004ea928;
        DAT_004ea928 = (DAT_004ea99c * DAT_004ea968 + DAT_004ea9a0 * DAT_004ea978 +
                       DAT_004ea9a4 * DAT_004ea988) * DAT_004ea928;
        DAT_004ea93c = DAT_004ea93c + DAT_004ea91c;
        DAT_00472554 = DAT_004ea940 + DAT_004ea920;
        DAT_00472558 = DAT_004ea944 + DAT_004ea924;
        DAT_004ea948 = DAT_004ea948 + DAT_004ea928;
        DAT_004ea940 = DAT_00472554;
        DAT_004ea944 = DAT_00472558;
        *pfVar5 = DAT_004ea93c;
        pfVar5[1] = DAT_00472554;
        pfVar5[2] = DAT_00472558;
        DAT_00472554 = (DAT_004ea940 - DAT_004ea920) - DAT_004ea920;
        DAT_00472558 = (DAT_004ea944 - DAT_004ea924) - DAT_004ea924;
        DAT_0047255c = (DAT_004ea948 - DAT_004ea928) - DAT_004ea928;
        pfVar5[6] = (DAT_004ea93c - DAT_004ea91c) - DAT_004ea91c;
        pfVar5[7] = DAT_00472554;
        pfVar5[8] = DAT_00472558;
        temp_v0 = (temp_v0 + 1) & 0xffff;
        pfVar5 = pfVar5 + 9;
      } while (temp_v0 < temp_v5);
    }
  }
  *pfVar5 = pfVar5[3];
  pfVar5[1] = pfVar5[4];
  pfVar5[2] = pfVar5[5];
  pfVar5[6] = pfVar5[3];
  pfVar5[7] = pfVar5[4];
  pfVar5[8] = pfVar5[5];
  if (0 < (int)(temp_v6 - temp_v0)) {
    temp_v2 = (temp_v6 - temp_v0) & 0xffff;
    pfVar6 = pfVar5;
    do {
      temp_v7 = pfVar5[1];
      temp_v8 = pfVar5[2];
      pfVar6[9] = *pfVar5;
      pfVar6[10] = temp_v7;
      pfVar6[0xb] = temp_v8;
      temp_v7 = pfVar5[4];
      temp_v8 = pfVar5[5];
      temp_v2 = (temp_v2 - 1) & 0xffff;
      pfVar6[0xc] = pfVar5[3];
      pfVar6[0xd] = temp_v7;
      pfVar6[0xe] = temp_v8;
      temp_v7 = pfVar5[7];
      temp_v8 = pfVar5[8];
      pfVar6[0xf] = pfVar5[6];
      pfVar6[0x10] = temp_v7;
      pfVar6[0x11] = temp_v8;
      pfVar6 = pfVar6 + 9;
    } while (temp_v2 != 0);
  }
  piVar1 = (int *)param_1[5];
  temp_v1 = *(int *)(*piVar1 + 0x30);
  piVar1[0x16] = piVar1[0x16] | 1;
  temp_v7 = pfVar7[4];
  temp_v8 = pfVar7[5];
  pfVar5 = (float *)(temp_v1 + (unsigned int)*(unsigned short *)((int)piVar1 + 10) * param_2 * 0xc);
  *pfVar5 = pfVar7[3];
  pfVar5[1] = temp_v7;
  pfVar5[2] = temp_v8;
  temp_v7 = pfVar7[1];
  temp_v8 = pfVar7[2];
  pfVar5[3] = *pfVar7;
  pfVar5[4] = temp_v7;
  pfVar5[5] = temp_v8;
  temp_v7 = pfVar7[7];
  temp_v8 = pfVar7[8];
  pfVar5[0x15] = pfVar7[6];
  pfVar5[0x16] = temp_v7;
  pfVar5[0x17] = temp_v8;
  temp_v7 = (float)temp_v9;
  DAT_004ea938 = temp_v7 * 2.0f;
  DAT_004ea92c = -temp_v16 * DAT_004ea938;
  DAT_004ea930 = -temp_v12 * DAT_004ea938;
  DAT_004ea934 = -temp_v15 * DAT_004ea938;
  DAT_004ea938 = temp_v4 * DAT_004ea938;
  DAT_004ea93c = pfVar7[3];
  DAT_004ea940 = pfVar7[4];
  DAT_004ea944 = pfVar7[5];
  DAT_004ea948 = DAT_0047255c;
  temp_v4 = temp_v7 * 1.3f;
  DAT_00472554 = temp_v11 * temp_v4 * 0.6666666f + DAT_004ea930 * 0.33333334f + DAT_004ea940;
  DAT_00472558 = temp_v13 * temp_v4 * 0.6666666f + DAT_004ea934 * 0.33333334f + DAT_004ea944;
  pfVar5[6] = temp_v14 * temp_v4 * 0.6666666f + DAT_004ea92c * 0.33333334f + DAT_004ea93c;
  pfVar5[7] = DAT_00472554;
  pfVar5[8] = DAT_00472558;
  temp_v7 = temp_v7 * 1.7f;
  DAT_00472554 = temp_v11 * temp_v7 * 0.3333333f + DAT_004ea930 * 0.6666667f + DAT_004ea940;
  DAT_00472558 = temp_v13 * temp_v7 * 0.3333333f + DAT_004ea934 * 0.6666667f + DAT_004ea944;
  pfVar5[9] = temp_v14 * temp_v7 * 0.3333333f + DAT_004ea92c * 0.6666667f + DAT_004ea93c;
  pfVar5[10] = DAT_00472554;
  pfVar5[0xb] = DAT_00472558;
  DAT_00472554 = -(temp_v11 * temp_v4) * 0.6666666f + DAT_004ea930 * 0.33333334f + DAT_004ea940;
  DAT_00472558 = -(temp_v13 * temp_v4) * 0.6666666f + DAT_004ea934 * 0.33333334f + DAT_004ea944;
  pfVar5[0x12] = -(temp_v14 * temp_v4) * 0.6666666f + DAT_004ea92c * 0.33333334f + DAT_004ea93c;
  pfVar5[0x13] = DAT_00472554;
  pfVar5[0x14] = DAT_00472558;
  DAT_004ea91c = -(temp_v14 * temp_v7) * 0.3333333f + DAT_004ea92c * 0.6666667f + DAT_004ea93c;
  DAT_00472554 = -(temp_v11 * temp_v7) * 0.3333333f + DAT_004ea930 * 0.6666667f + DAT_004ea940;
  DAT_00472558 = -(temp_v13 * temp_v7) * 0.3333333f + DAT_004ea934 * 0.6666667f + DAT_004ea944;
  DAT_004ea928 = temp_v3 * temp_v7 * 0.3333333f + DAT_004ea938 * 0.6666667f + DAT_004ea948;
  DAT_004ea920 = DAT_00472554;
  DAT_004ea924 = DAT_00472558;
  pfVar5[0xf] = DAT_004ea91c;
  pfVar5[0x10] = DAT_00472554;
  pfVar5[0x11] = DAT_00472558;
  DAT_00472550 = DAT_004ea92c * 0.85f + DAT_004ea93c;
  DAT_00472554 = DAT_004ea930 * 0.85f + DAT_004ea940;
  DAT_00472558 = DAT_004ea934 * 0.85f + DAT_004ea944;
  DAT_0047255c = DAT_004ea938 * 0.85f + DAT_004ea948;
  DAT_004ea92c = DAT_00472550;
  DAT_004ea930 = DAT_00472554;
  DAT_004ea934 = DAT_00472558;
  DAT_004ea938 = DAT_0047255c;
  pfVar5[0xc] = DAT_00472550;
  pfVar5[0xd] = DAT_00472554;
  pfVar5[0xe] = DAT_00472558;
  return;
}

} /* extern "C" */
