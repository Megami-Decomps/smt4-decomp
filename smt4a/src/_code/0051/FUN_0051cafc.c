/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0051cafc` (_code @ 0x51cafc, 0x624 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: hardfp_floorf. */


void FUN_0051cafc(float *param_1,int *param_2)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 6 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  unsigned char temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  unsigned int *puVar6;
  unsigned int temp_v4;
  unsigned int in_fpscr;
  float in_s0;
  unsigned int temp_v5;
  float temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  
  temp_v15 = 0.0f;
  puVar4 = (unsigned int *)param_1[8];
  temp_v2 = 0;
  temp_v8 = VectorFloatToUnsigned(in_s0 / param_1[6],3);
  temp_v5 = in_fpscr & 0xfffffff;
  temp_v3 = temp_v5 | ((unsigned int)(0.0f <= in_s0) << 0x1d);
  temp_v12 = temp_v15;
  if ((romwright_subpiece_4_1_0(temp_v3 >> 0x1d,0)) &&
     (temp_v8 < (puVar4[(unsigned int)*(unsigned short *)((int)param_1 + 0xe) * 2 - 2] & 0xfff))) {
    param_2[1] = 0;
  }
  else {
    temp_v3 = temp_v5 | ((unsigned int)(0.0f <= in_s0) << 0x1d);
    if (!romwright_subpiece_4_1_0(temp_v3 >> 0x1d,0)) {
      temp_v0 = *(char *)(param_1 + 2);
    }
    else {
      temp_v0 = *(char *)((int)param_1 + 9);
    }
    if (temp_v0 == '\0') {
      temp_v5 = temp_v5 | ((unsigned int)(0.0f <= in_s0) << 0x1d);
      if (!romwright_subpiece_4_1_0(temp_v5 >> 0x1d,0)) {
        temp_v3 = *puVar4;
        temp_v6 = param_1[4];
        temp_v15 = param_1[5];
        *param_2 = (int)puVar4;
        param_2[1] = -1;
        temp_v12 = *param_1;
        temp_v9 = (float)VectorUnsignedToFloat(temp_v3 >> 0xc,(unsigned char)(temp_v5 >> 0x16) & 3);
        param_2[2] = -0x800001;
        param_2[3] = (int)temp_v12;
        param_2[4] = (int)(temp_v15 + temp_v9 * temp_v6);
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0;
        return;
      }
      temp_v3 = puVar4[(unsigned int)*(unsigned short *)((int)param_1 + 0xe) * 2 - 2];
      temp_v6 = param_1[4];
      temp_v12 = (float)VectorUnsignedToFloat(temp_v3 & 0xfff,(unsigned char)(temp_v5 >> 0x16) & 3);
      temp_v9 = (float)VectorUnsignedToFloat(temp_v3 >> 0xc,(unsigned char)(temp_v5 >> 0x16) & 3);
      temp_v12 = temp_v12 * param_1[6] + *param_1;
      temp_v15 = param_1[5];
      param_2[1] = 1;
      *param_2 = 0;
      if (param_1[1] < temp_v12) {
        temp_v12 = param_1[1];
      }
      param_2[2] = (int)temp_v12;
      param_2[4] = (int)(temp_v15 + temp_v9 * temp_v6);
      param_2[3] = 0x7f7fffff;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      return;
    }
    temp_v15 = param_1[7] * in_s0;
    hardfp_floorf();
    temp_v5 = (unsigned int)temp_v15;
    param_2[1] = temp_v5;
    if ((temp_v0 == '\x02') && ((temp_v5 & 1) != 0)) {
      temp_v2 = 1;
      temp_v15 = (float)VectorSignedToFloat(temp_v5 + 1,(unsigned char)(temp_v3 >> 0x16) & 3);
      temp_v15 = (param_1[1] - *param_1) * temp_v15;
      in_s0 = temp_v15 - in_s0;
    }
    else {
      temp_v15 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(temp_v3 >> 0x16) & 3);
      temp_v15 = (param_1[1] - *param_1) * temp_v15;
      in_s0 = in_s0 - temp_v15;
    }
    temp_v8 = VectorFloatToUnsigned(in_s0 / param_1[6],3);
  }
  puVar4 = (unsigned int *)*param_2;
  if (puVar4 == (unsigned int *)0x0) {
    temp_v6 = (float)VectorSignedToFloat(*(unsigned short *)((int)param_1 + 0xe) - 1,(unsigned char)(temp_v3 >> 0x16) & 3
                                      );
    temp_v7 = VectorFloatToUnsigned(param_1[7] * temp_v6 * in_s0,3);
    puVar4 = (unsigned int *)((int)param_1[8] + temp_v7 * 8);
  }
  if (temp_v2) {
    puVar6 = puVar4;
    if ((*puVar4 & 0xfff) >= temp_v8) {
      do {
        puVar4 = puVar6;
        puVar6 = puVar4 + -2;
      } while (temp_v8 <= (puVar4[-2] & 0xfff));
    }
    else {
      do {
        puVar4 = puVar4 + 2;
      } while ((*puVar4 & 0xfff) < temp_v8);
    }
    temp_v5 = *puVar4;
    temp_v9 = param_1[6];
    temp_v10 = *param_1;
    puVar6 = puVar4 + -2;
    temp_v8 = puVar4[-2];
    *param_2 = (int)puVar6;
    temp_v6 = (float)VectorUnsignedToFloat(temp_v5 & 0xfff,(unsigned char)(temp_v3 >> 0x16) & 3);
    temp_v0 = *(char *)(param_1 + 3);
    temp_v11 = (float)VectorUnsignedToFloat(temp_v8 & 0xfff,(unsigned char)(temp_v3 >> 0x16) & 3);
    temp_v6 = (temp_v10 - temp_v6 * temp_v9) + temp_v15;
    temp_v15 = (temp_v10 - temp_v11 * temp_v9) + temp_v15;
    if (temp_v0 == '\0') {
      temp_v5 = *puVar4;
      temp_v10 = param_1[4];
      temp_v9 = param_1[5];
      param_2[5] = (int)temp_v12;
      param_2[6] = (int)temp_v12;
      param_2[7] = (int)temp_v12;
      temp_v12 = (float)VectorUnsignedToFloat(temp_v5 >> 0xc,(unsigned char)(temp_v3 >> 0x16) & 3);
      param_2[2] = (int)temp_v6;
      param_2[3] = (int)temp_v15;
      param_2[4] = (int)(temp_v9 + temp_v12 * temp_v10);
      return;
    }
    if (temp_v0 == '\x01') {
      temp_v10 = param_1[5];
      temp_v11 = param_1[4];
      temp_v9 = (float)VectorUnsignedToFloat(*puVar4 >> 0xc,(unsigned char)(temp_v3 >> 0x16) & 3);
      temp_v9 = temp_v10 + temp_v9 * temp_v11;
      temp_v13 = (float)VectorUnsignedToFloat(*puVar6 >> 0xc,(unsigned char)(temp_v3 >> 0x16) & 3);
      param_2[2] = (int)temp_v6;
      param_2[3] = (int)temp_v15;
      param_2[4] = (int)temp_v9;
      param_2[5] = (int)(((temp_v10 + temp_v13 * temp_v11) - temp_v9) / (temp_v15 - temp_v6));
      param_2[6] = (int)temp_v12;
      param_2[7] = (int)temp_v12;
      return;
    }
    if (temp_v0 == '\x02') {
      temp_v10 = param_1[5];
      temp_v11 = param_1[4];
      temp_v1 = *(short *)((int)puVar4 + 6);
      temp_v12 = (float)VectorUnsignedToFloat(*puVar4 >> 0xc,(unsigned char)(temp_v3 >> 0x16) & 3);
      temp_v14 = (float)VectorSignedToFloat((int)(short)puVar4[-1],(unsigned char)(temp_v3 >> 0x16) & 3);
      temp_v9 = temp_v10 + temp_v12 * temp_v11;
      temp_v13 = (float)VectorUnsignedToFloat(*puVar6 >> 0xc,(unsigned char)(temp_v3 >> 0x16) & 3);
      param_2[2] = (int)temp_v6;
      param_2[3] = (int)temp_v15;
      param_2[4] = (int)temp_v9;
      temp_v15 = temp_v15 - temp_v6;
      temp_v12 = 1.0f / temp_v15;
      temp_v6 = (float)VectorSignedToFloat((int)temp_v1,(unsigned char)(temp_v3 >> 0x16) & 3);
      temp_v9 = temp_v9 - (temp_v10 + temp_v13 * temp_v11);
      temp_v6 = temp_v6 * -0.00390625f;
      param_2[5] = (int)temp_v6;
      param_2[6] = (int)(((temp_v15 * -2.0f * temp_v6 - temp_v9 * 3.0f) - temp_v15 * temp_v14 * -0.00390625f) *
                        temp_v12 * temp_v12);
      param_2[7] = (int)((temp_v9 * 2.0f + temp_v15 * temp_v6 + temp_v15 * temp_v14 * -0.00390625f) *
                        temp_v12 * temp_v12 * temp_v12);
      return;
    }
  }
  else {
    puVar6 = puVar4;
    if (temp_v8 < (*puVar4 & 0xfff)) {
      do {
        puVar4 = puVar4 + -2;
      } while (temp_v8 < (*puVar4 & 0xfff));
    }
    else {
      do {
        puVar4 = puVar6;
        puVar6 = puVar4 + 2;
      } while ((puVar4[2] & 0xfff) <= temp_v8);
    }
    temp_v6 = param_1[6];
    temp_v5 = *puVar4;
    temp_v9 = *param_1;
    puVar6 = puVar4 + 2;
    temp_v8 = puVar4[2];
    *param_2 = (int)puVar6;
    temp_v10 = (float)VectorUnsignedToFloat(temp_v5 & 0xfff,(unsigned char)(temp_v3 >> 0x16) & 3);
    temp_v0 = *(char *)(param_1 + 3);
    temp_v11 = (float)VectorUnsignedToFloat(temp_v8 & 0xfff,(unsigned char)(temp_v3 >> 0x16) & 3);
    temp_v10 = temp_v10 * temp_v6 + temp_v15 + temp_v9;
    temp_v9 = temp_v11 * temp_v6 + temp_v15 + temp_v9;
    if (temp_v0 == '\0') {
      temp_v5 = *puVar4;
      temp_v6 = param_1[4];
      temp_v15 = param_1[5];
      param_2[2] = (int)temp_v10;
      param_2[3] = (int)temp_v9;
      temp_v9 = (float)VectorUnsignedToFloat(temp_v5 >> 0xc,(unsigned char)(temp_v3 >> 0x16) & 3);
      param_2[4] = (int)(temp_v15 + temp_v9 * temp_v6);
      param_2[5] = (int)temp_v12;
      param_2[6] = (int)temp_v12;
      param_2[7] = (int)temp_v12;
      return;
    }
    if (temp_v0 == '\x01') {
      temp_v5 = *puVar4;
      temp_v6 = param_1[5];
      temp_v11 = param_1[4];
      temp_v8 = *puVar6;
      param_2[2] = (int)temp_v10;
      param_2[3] = (int)temp_v9;
      temp_v15 = (float)VectorUnsignedToFloat(temp_v5 >> 0xc,(unsigned char)(temp_v3 >> 0x16) & 3);
      temp_v15 = temp_v6 + temp_v15 * temp_v11;
      temp_v13 = (float)VectorUnsignedToFloat(temp_v8 >> 0xc,(unsigned char)(temp_v3 >> 0x16) & 3);
      param_2[4] = (int)temp_v15;
      param_2[5] = (int)(((temp_v6 + temp_v13 * temp_v11) - temp_v15) / (temp_v9 - temp_v10));
      param_2[6] = (int)temp_v12;
      param_2[7] = (int)temp_v12;
      return;
    }
    if (temp_v0 == '\x02') {
      temp_v8 = *puVar4;
      temp_v11 = param_1[5];
      temp_v15 = param_1[4];
      temp_v1 = *(short *)((int)puVar4 + 6);
      temp_v4 = *puVar6;
      temp_v5 = puVar4[3];
      param_2[2] = (int)temp_v10;
      param_2[3] = (int)temp_v9;
      temp_v12 = (float)VectorUnsignedToFloat(temp_v8 >> 0xc,(unsigned char)(temp_v3 >> 0x16) & 3);
      temp_v9 = temp_v9 - temp_v10;
      temp_v13 = (float)VectorSignedToFloat((int)(short)temp_v5,(unsigned char)(temp_v3 >> 0x16) & 3);
      temp_v12 = temp_v11 + temp_v12 * temp_v15;
      temp_v10 = (float)VectorUnsignedToFloat(temp_v4 >> 0xc,(unsigned char)(temp_v3 >> 0x16) & 3);
      param_2[4] = (int)temp_v12;
      temp_v6 = (float)VectorSignedToFloat((int)temp_v1,(unsigned char)(temp_v3 >> 0x16) & 3);
      temp_v12 = temp_v12 - (temp_v11 + temp_v10 * temp_v15);
      temp_v15 = 1.0f / temp_v9;
      temp_v6 = temp_v6 * 0.00390625f;
      param_2[5] = (int)temp_v6;
      param_2[6] = (int)(((temp_v9 * -2.0f * temp_v6 - temp_v12 * 3.0f) - temp_v9 * temp_v13 * 0.00390625f) *
                        temp_v15 * temp_v15);
      param_2[7] = (int)((temp_v12 * 2.0f + temp_v9 * temp_v6 + temp_v9 * temp_v13 * 0.00390625f) *
                        temp_v15 * temp_v15 * temp_v15);
      return;
    }
  }
  return;
}
