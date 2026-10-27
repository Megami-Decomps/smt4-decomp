/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00383568` (_code @ 0x383568, 0xe30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
extern "C" {

int FUN_003a215c(void);
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

extern float DAT_005c1110; /* 0x5c1110 */
extern float DAT_005c1114; /* 0x5c1114 */
extern float DAT_005c1118; /* 0x5c1118 */
extern unsigned int DAT_005c111c; /* 0x5c111c */
extern float g_effectRingScratchColor; /* 0x5c1120 */
extern float DAT_005c1124; /* 0x5c1124 */
extern float DAT_005c1128; /* 0x5c1128 */
extern float DAT_005c112c; /* 0x5c112c */
extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern float DAT_006472ec; /* 0x6472ec */
extern float DAT_006472f0; /* 0x6472f0 */
extern float DAT_006472f4; /* 0x6472f4 */
extern float DAT_006472f8; /* 0x6472f8 */
extern float DAT_006472fc; /* 0x6472fc */
extern float DAT_00647300; /* 0x647300 */
extern float DAT_00647304; /* 0x647304 */
extern float DAT_00647308; /* 0x647308 */
extern float DAT_0064731c; /* 0x64731c */
extern float DAT_00647320; /* 0x647320 */
extern float DAT_00647324; /* 0x647324 */
extern float DAT_00647328; /* 0x647328 */
extern float DAT_0064732c; /* 0x64732c */
extern float DAT_00647330; /* 0x647330 */
extern float DAT_00647334; /* 0x647334 */
extern float DAT_00647338; /* 0x647338 */
extern float DAT_0064733c; /* 0x64733c */
extern float DAT_00647340; /* 0x647340 */
extern float DAT_00647344; /* 0x647344 */
extern float DAT_00647348; /* 0x647348 */
extern float DAT_0064735c; /* 0x64735c */
extern float DAT_00647360; /* 0x647360 */
extern float DAT_00647364; /* 0x647364 */
extern unsigned int DAT_00647368; /* 0x647368 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: FUN_003a215c. */


void FUN_00383568(unsigned int *param_1,int param_2,float *param_3)

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
    DAT_0064735c = DAT_005c1110;
    temp_v8 = temp_v8 / temp_v3;
    DAT_00647360 = DAT_005c1114;
    DAT_00647364 = DAT_005c1118;
    temp_v9 = (unsigned long long)(unsigned int)(in_s0 * temp_v8);
    DAT_00647368 = DAT_005c111c;
    DAT_006472ec = (float)*param_1;
    DAT_006472f0 = (float)param_1[1];
    DAT_006472f4 = (float)param_1[2];
    DAT_006472f8 = (float)param_1[3];
    temp_v7 = temp_v8 / temp_v7;
    DAT_006472fc = pfVar7[3];
    DAT_00647300 = pfVar7[4];
    DAT_00647304 = pfVar7[5];
    DAT_00647308 = DAT_005c112c;
    g_effectRingScratchColor = pfVar7[0xc];
    DAT_005c1124 = pfVar7[0xd];
    DAT_005c1128 = pfVar7[0xe];
    DAT_006472dc = g_effectRingScratchColor - DAT_006472fc;
    DAT_006472e0 = DAT_005c1124 - DAT_00647300;
    DAT_006472e4 = DAT_005c1128 - DAT_00647304;
    DAT_006472e8 = DAT_005c112c - DAT_005c112c;
    temp_v3 = romwright_sqrt_4(DAT_006472dc * DAT_006472dc + DAT_006472e0 * DAT_006472e0 +
                 DAT_006472e4 * DAT_006472e4);
    if (0.0f < temp_v3) {
      DAT_006472dc = DAT_006472dc / temp_v3;
      DAT_006472e0 = DAT_006472e0 / temp_v3;
      DAT_006472e4 = DAT_006472e4 / temp_v3;
    }
    temp_v16 = DAT_006472dc;
    temp_v12 = DAT_006472e0;
    temp_v15 = DAT_006472e4;
    temp_v10 = (unsigned long long)(unsigned int)DAT_006472e8;
    FUN_003a215c();
    temp_v4 = (float)temp_v10;
    temp_v14 = DAT_0064735c * DAT_0064731c + DAT_00647360 * DAT_0064732c +
               DAT_00647364 * DAT_0064733c;
    temp_v11 = DAT_0064735c * DAT_00647320 + DAT_00647360 * DAT_00647330 +
               DAT_00647364 * DAT_00647340;
    temp_v13 = DAT_0064735c * DAT_00647324 + DAT_00647360 * DAT_00647334 +
               DAT_00647364 * DAT_00647344;
    temp_v3 = DAT_0064735c * DAT_00647328 + DAT_00647360 * DAT_00647338 + DAT_00647364 * DAT_00647348;
    DAT_006472e4 = (float)temp_v9;
    DAT_006472e8 = temp_v3 * DAT_006472e4;
    DAT_006472dc = temp_v14 * DAT_006472e4;
    DAT_006472e0 = temp_v11 * DAT_006472e4;
    DAT_006472e4 = temp_v13 * DAT_006472e4;
    DAT_006472fc = DAT_006472fc + DAT_006472dc;
    DAT_005c1124 = DAT_00647300 + DAT_006472e0;
    DAT_005c1128 = DAT_00647304 + DAT_006472e4;
    DAT_00647308 = DAT_00647308 + DAT_006472e8;
    DAT_00647300 = DAT_005c1124;
    DAT_00647304 = DAT_005c1128;
    *pfVar7 = DAT_006472fc;
    pfVar7[1] = DAT_005c1124;
    pfVar7[2] = DAT_005c1128;
    temp_v8 = temp_v8 - temp_v7;
    temp_v0 = 1;
    DAT_005c1124 = (DAT_00647300 - DAT_006472e0) - DAT_006472e0;
    DAT_005c1128 = (DAT_00647304 - DAT_006472e4) - DAT_006472e4;
    DAT_005c112c = (DAT_00647308 - DAT_006472e8) - DAT_006472e8;
    pfVar7[6] = (DAT_006472fc - DAT_006472dc) - DAT_006472dc;
    pfVar7[7] = DAT_005c1124;
    pfVar7[8] = DAT_005c1128;
    pfVar5 = pfVar7 + 9;
    if (temp_v5 >= 2) {
      do {
        DAT_006472fc = pfVar5[3];
        DAT_00647300 = pfVar5[4];
        DAT_00647304 = pfVar5[5];
        DAT_00647308 = DAT_005c112c;
        g_effectRingScratchColor = pfVar5[0xc];
        DAT_005c1124 = pfVar5[0xd];
        DAT_005c1128 = pfVar5[0xe];
        DAT_006472dc = g_effectRingScratchColor - DAT_006472fc;
        DAT_006472e0 = DAT_005c1124 - DAT_00647300;
        DAT_006472e4 = DAT_005c1128 - DAT_00647304;
        DAT_006472e8 = DAT_005c112c - DAT_005c112c;
        temp_v4 = romwright_sqrt_4(DAT_006472dc * DAT_006472dc + DAT_006472e0 * DAT_006472e0 +
                      DAT_006472e4 * DAT_006472e4);
        if ((float)(temp_v9 >> 0x20) < temp_v4) {
          DAT_006472dc = DAT_006472dc / temp_v4;
          DAT_006472e0 = DAT_006472e0 / temp_v4;
          DAT_006472e4 = DAT_006472e4 / temp_v4;
        }
        FUN_003a215c();
        temp_v4 = (float)temp_v10;
        DAT_006472e8 = in_s0 * temp_v8;
        temp_v8 = temp_v8 - temp_v7;
        DAT_006472dc = (DAT_0064735c * DAT_0064731c + DAT_00647360 * DAT_0064732c +
                       DAT_00647364 * DAT_0064733c) * DAT_006472e8;
        DAT_006472e0 = (DAT_0064735c * DAT_00647320 + DAT_00647360 * DAT_00647330 +
                       DAT_00647364 * DAT_00647340) * DAT_006472e8;
        DAT_006472e4 = (DAT_0064735c * DAT_00647324 + DAT_00647360 * DAT_00647334 +
                       DAT_00647364 * DAT_00647344) * DAT_006472e8;
        DAT_006472e8 = (DAT_0064735c * DAT_00647328 + DAT_00647360 * DAT_00647338 +
                       DAT_00647364 * DAT_00647348) * DAT_006472e8;
        DAT_006472fc = DAT_006472fc + DAT_006472dc;
        DAT_005c1124 = DAT_00647300 + DAT_006472e0;
        DAT_005c1128 = DAT_00647304 + DAT_006472e4;
        DAT_00647308 = DAT_00647308 + DAT_006472e8;
        DAT_00647300 = DAT_005c1124;
        DAT_00647304 = DAT_005c1128;
        *pfVar5 = DAT_006472fc;
        pfVar5[1] = DAT_005c1124;
        pfVar5[2] = DAT_005c1128;
        DAT_005c1124 = (DAT_00647300 - DAT_006472e0) - DAT_006472e0;
        DAT_005c1128 = (DAT_00647304 - DAT_006472e4) - DAT_006472e4;
        DAT_005c112c = (DAT_00647308 - DAT_006472e8) - DAT_006472e8;
        pfVar5[6] = (DAT_006472fc - DAT_006472dc) - DAT_006472dc;
        pfVar5[7] = DAT_005c1124;
        pfVar5[8] = DAT_005c1128;
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
  DAT_006472f8 = temp_v7 * 2.0f;
  DAT_006472ec = -temp_v16 * DAT_006472f8;
  DAT_006472f0 = -temp_v12 * DAT_006472f8;
  DAT_006472f4 = -temp_v15 * DAT_006472f8;
  DAT_006472f8 = temp_v4 * DAT_006472f8;
  DAT_006472fc = pfVar7[3];
  DAT_00647300 = pfVar7[4];
  DAT_00647304 = pfVar7[5];
  DAT_00647308 = DAT_005c112c;
  temp_v4 = temp_v7 * 1.3f;
  DAT_005c1124 = temp_v11 * temp_v4 * 0.6666666f + DAT_006472f0 * 0.33333334f + DAT_00647300;
  DAT_005c1128 = temp_v13 * temp_v4 * 0.6666666f + DAT_006472f4 * 0.33333334f + DAT_00647304;
  pfVar5[6] = temp_v14 * temp_v4 * 0.6666666f + DAT_006472ec * 0.33333334f + DAT_006472fc;
  pfVar5[7] = DAT_005c1124;
  pfVar5[8] = DAT_005c1128;
  temp_v7 = temp_v7 * 1.7f;
  DAT_005c1124 = temp_v11 * temp_v7 * 0.3333333f + DAT_006472f0 * 0.6666667f + DAT_00647300;
  DAT_005c1128 = temp_v13 * temp_v7 * 0.3333333f + DAT_006472f4 * 0.6666667f + DAT_00647304;
  pfVar5[9] = temp_v14 * temp_v7 * 0.3333333f + DAT_006472ec * 0.6666667f + DAT_006472fc;
  pfVar5[10] = DAT_005c1124;
  pfVar5[0xb] = DAT_005c1128;
  DAT_005c1124 = -(temp_v11 * temp_v4) * 0.6666666f + DAT_006472f0 * 0.33333334f + DAT_00647300;
  DAT_005c1128 = -(temp_v13 * temp_v4) * 0.6666666f + DAT_006472f4 * 0.33333334f + DAT_00647304;
  pfVar5[0x12] = -(temp_v14 * temp_v4) * 0.6666666f + DAT_006472ec * 0.33333334f + DAT_006472fc;
  pfVar5[0x13] = DAT_005c1124;
  pfVar5[0x14] = DAT_005c1128;
  DAT_006472dc = -(temp_v14 * temp_v7) * 0.3333333f + DAT_006472ec * 0.6666667f + DAT_006472fc;
  DAT_005c1124 = -(temp_v11 * temp_v7) * 0.3333333f + DAT_006472f0 * 0.6666667f + DAT_00647300;
  DAT_005c1128 = -(temp_v13 * temp_v7) * 0.3333333f + DAT_006472f4 * 0.6666667f + DAT_00647304;
  DAT_006472e8 = temp_v3 * temp_v7 * 0.3333333f + DAT_006472f8 * 0.6666667f + DAT_00647308;
  DAT_006472e0 = DAT_005c1124;
  DAT_006472e4 = DAT_005c1128;
  pfVar5[0xf] = DAT_006472dc;
  pfVar5[0x10] = DAT_005c1124;
  pfVar5[0x11] = DAT_005c1128;
  g_effectRingScratchColor = DAT_006472ec * 0.85f + DAT_006472fc;
  DAT_005c1124 = DAT_006472f0 * 0.85f + DAT_00647300;
  DAT_005c1128 = DAT_006472f4 * 0.85f + DAT_00647304;
  DAT_005c112c = DAT_006472f8 * 0.85f + DAT_00647308;
  DAT_006472ec = g_effectRingScratchColor;
  DAT_006472f0 = DAT_005c1124;
  DAT_006472f4 = DAT_005c1128;
  DAT_006472f8 = DAT_005c112c;
  pfVar5[0xc] = g_effectRingScratchColor;
  pfVar5[0xd] = DAT_005c1124;
  pfVar5[0xe] = DAT_005c1128;
  return;
}

} /* extern "C" */
