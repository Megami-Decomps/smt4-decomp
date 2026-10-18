/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0051a7e4` (_code @ 0x51a7e4, 0x5e4 bytes) from smt4a.cxi.
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


void FUN_0051a7e4(float *param_1,int *param_2)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 6 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  unsigned int *puVar5;
  unsigned int in_fpscr;
  float in_s0;
  unsigned int temp_v3;
  float temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  
  temp_v12 = 0.0f;
  puVar3 = (unsigned int *)param_1[8];
  temp_v1 = 0;
  temp_v6 = VectorFloatToUnsigned(in_s0 / param_1[6],3);
  temp_v3 = in_fpscr & 0xfffffff;
  temp_v2 = temp_v3 | ((unsigned int)(0.0f <= in_s0) << 0x1d);
  temp_v11 = temp_v12;
  if ((romwright_subpiece_4_1_0(temp_v2 >> 0x1d,0)) && (temp_v6 < (puVar3[*(unsigned short *)((int)param_1 + 0xe) - 1] & 0xfff))) {
    param_2[1] = 0;
  }
  else {
    temp_v2 = temp_v3 | ((unsigned int)(0.0f <= in_s0) << 0x1d);
    if (!romwright_subpiece_4_1_0(temp_v2 >> 0x1d,0)) {
      temp_v0 = *(char *)(param_1 + 2);
    }
    else {
      temp_v0 = *(char *)((int)param_1 + 9);
    }
    if (temp_v0 == '\0') {
      temp_v3 = temp_v3 | ((unsigned int)(0.0f <= in_s0) << 0x1d);
      if (!romwright_subpiece_4_1_0(temp_v3 >> 0x1d,0)) {
        temp_v2 = *puVar3;
        temp_v4 = param_1[4];
        temp_v12 = param_1[5];
        *param_2 = (int)puVar3;
        param_2[1] = -1;
        temp_v11 = *param_1;
        temp_v7 = (float)VectorUnsignedToFloat(temp_v2 >> 0xc,(unsigned char)(temp_v3 >> 0x16) & 3);
        param_2[2] = -0x800001;
        param_2[3] = (int)temp_v11;
        param_2[4] = (int)(temp_v12 + temp_v7 * temp_v4);
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0;
        return;
      }
      temp_v2 = puVar3[*(unsigned short *)((int)param_1 + 0xe) - 1];
      temp_v4 = param_1[4];
      temp_v11 = (float)VectorUnsignedToFloat(temp_v2 & 0xfff,(unsigned char)(temp_v3 >> 0x16) & 3);
      temp_v8 = (float)VectorUnsignedToFloat(temp_v2 >> 0xc,(unsigned char)(temp_v3 >> 0x16) & 3);
      temp_v11 = temp_v11 * param_1[6] + *param_1;
      temp_v12 = param_1[5];
      param_2[1] = 1;
      *param_2 = 0;
      temp_v7 = param_1[1];
      param_2[4] = (int)(temp_v12 + temp_v8 * temp_v4);
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      if (temp_v7 < temp_v11) {
        temp_v11 = temp_v7;
      }
      param_2[2] = (int)temp_v11;
      param_2[3] = 0x7f7fffff;
      return;
    }
    temp_v12 = param_1[7] * in_s0;
    hardfp_floorf();
    temp_v3 = (unsigned int)temp_v12;
    param_2[1] = temp_v3;
    if ((temp_v0 == '\x02') && ((temp_v3 & 1) != 0)) {
      temp_v1 = 1;
      temp_v12 = (float)VectorSignedToFloat(temp_v3 + 1,(unsigned char)(temp_v2 >> 0x16) & 3);
      temp_v12 = (param_1[1] - *param_1) * temp_v12;
      in_s0 = temp_v12 - in_s0;
    }
    else {
      temp_v12 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(temp_v2 >> 0x16) & 3);
      temp_v12 = (param_1[1] - *param_1) * temp_v12;
      in_s0 = in_s0 - temp_v12;
    }
    temp_v6 = VectorFloatToUnsigned(in_s0 / param_1[6],3);
  }
  puVar3 = (unsigned int *)*param_2;
  if (puVar3 == (unsigned int *)0x0) {
    temp_v4 = (float)VectorSignedToFloat(*(unsigned short *)((int)param_1 + 0xe) - 1,(unsigned char)(temp_v2 >> 0x16) & 3
                                      );
    temp_v5 = VectorFloatToUnsigned(param_1[7] * temp_v4 * in_s0,3);
    puVar3 = (unsigned int *)((int)param_1[8] + temp_v5 * 4);
  }
  if (temp_v1) {
    puVar5 = puVar3;
    if ((*puVar3 & 0xfff) >= temp_v6) {
      do {
        puVar3 = puVar5;
        puVar5 = puVar3 + -1;
      } while (temp_v6 <= (puVar3[-1] & 0xfff));
    }
    else {
      do {
        puVar3 = puVar3 + 1;
      } while ((*puVar3 & 0xfff) < temp_v6);
    }
    temp_v3 = *puVar3;
    temp_v7 = param_1[6];
    temp_v8 = *param_1;
    puVar5 = puVar3 + -1;
    temp_v6 = puVar3[-1];
    *param_2 = (int)puVar5;
    temp_v4 = (float)VectorUnsignedToFloat(temp_v3 & 0xfff,(unsigned char)(temp_v2 >> 0x16) & 3);
    temp_v0 = *(char *)(param_1 + 3);
    temp_v9 = (float)VectorUnsignedToFloat(temp_v6 & 0xfff,(unsigned char)(temp_v2 >> 0x16) & 3);
    temp_v4 = (temp_v8 - temp_v4 * temp_v7) + temp_v12;
    temp_v12 = (temp_v8 - temp_v9 * temp_v7) + temp_v12;
    if (temp_v0 == '\0') {
      temp_v3 = *puVar3;
      temp_v8 = param_1[4];
      temp_v7 = param_1[5];
      param_2[5] = (int)temp_v11;
      param_2[6] = (int)temp_v11;
      param_2[7] = (int)temp_v11;
      temp_v11 = (float)VectorUnsignedToFloat(temp_v3 >> 0xc,(unsigned char)(temp_v2 >> 0x16) & 3);
      param_2[2] = (int)temp_v4;
      param_2[3] = (int)temp_v12;
      param_2[4] = (int)(temp_v7 + temp_v11 * temp_v8);
      return;
    }
    if (temp_v0 == '\x01') {
      temp_v8 = param_1[5];
      temp_v9 = param_1[4];
      temp_v7 = (float)VectorUnsignedToFloat(*puVar3 >> 0xc,(unsigned char)(temp_v2 >> 0x16) & 3);
      temp_v7 = temp_v8 + temp_v7 * temp_v9;
      temp_v10 = (float)VectorUnsignedToFloat(*puVar5 >> 0xc,(unsigned char)(temp_v2 >> 0x16) & 3);
      param_2[2] = (int)temp_v4;
      param_2[3] = (int)temp_v12;
      param_2[4] = (int)temp_v7;
      param_2[5] = (int)(((temp_v8 + temp_v10 * temp_v9) - temp_v7) / (temp_v12 - temp_v4));
      param_2[6] = (int)temp_v11;
      param_2[7] = (int)temp_v11;
      return;
    }
    if (temp_v0 == '\x02') {
      temp_v7 = param_1[5];
      temp_v8 = param_1[4];
      temp_v11 = (float)VectorUnsignedToFloat(*puVar3 >> 0xc,(unsigned char)(temp_v2 >> 0x16) & 3);
      temp_v11 = temp_v7 + temp_v11 * temp_v8;
      temp_v9 = (float)VectorUnsignedToFloat(*puVar5 >> 0xc,(unsigned char)(temp_v2 >> 0x16) & 3);
      param_2[4] = (int)temp_v11;
      param_2[2] = (int)temp_v4;
      param_2[3] = (int)temp_v12;
      temp_v12 = temp_v12 - temp_v4;
      param_2[5] = -0x80000000;
      temp_v11 = temp_v11 - (temp_v7 + temp_v9 * temp_v8);
      temp_v4 = 1.0f / temp_v12;
      param_2[6] = (int)(((temp_v12 * -2.0f * -0.0f - temp_v11 * 3.0f) - temp_v12 * -0.0f) * temp_v4 * temp_v4);
      param_2[7] = (int)((temp_v11 * 2.0f + temp_v12 * -0.0f + temp_v12 * -0.0f) * temp_v4 * temp_v4 * temp_v4);
      return;
    }
  }
  else {
    puVar5 = puVar3;
    if (temp_v6 < (*puVar3 & 0xfff)) {
      do {
        puVar3 = puVar3 + -1;
      } while (temp_v6 < (*puVar3 & 0xfff));
    }
    else {
      do {
        puVar3 = puVar5;
        puVar5 = puVar3 + 1;
      } while ((puVar3[1] & 0xfff) <= temp_v6);
    }
    temp_v4 = param_1[6];
    puVar5 = puVar3 + 1;
    temp_v8 = (float)VectorUnsignedToFloat(*puVar3 & 0xfff,(unsigned char)(temp_v2 >> 0x16) & 3);
    temp_v9 = (float)VectorUnsignedToFloat(puVar3[1] & 0xfff,(unsigned char)(temp_v2 >> 0x16) & 3);
    temp_v7 = *param_1;
    *param_2 = (int)puVar5;
    temp_v0 = *(char *)(param_1 + 3);
    temp_v8 = temp_v8 * temp_v4 + temp_v12 + temp_v7;
    temp_v7 = temp_v9 * temp_v4 + temp_v12 + temp_v7;
    if (temp_v0 == '\0') {
      temp_v3 = *puVar3;
      temp_v4 = param_1[4];
      temp_v12 = param_1[5];
      param_2[2] = (int)temp_v8;
      param_2[5] = (int)temp_v11;
      param_2[6] = (int)temp_v11;
      param_2[7] = (int)temp_v11;
      temp_v11 = (float)VectorUnsignedToFloat(temp_v3 >> 0xc,(unsigned char)(temp_v2 >> 0x16) & 3);
      param_2[3] = (int)temp_v7;
      param_2[4] = (int)(temp_v12 + temp_v11 * temp_v4);
      return;
    }
    if (temp_v0 == '\x01') {
      temp_v3 = *puVar3;
      temp_v12 = param_1[5];
      temp_v9 = param_1[4];
      temp_v6 = *puVar5;
      param_2[2] = (int)temp_v8;
      param_2[3] = (int)temp_v7;
      temp_v4 = (float)VectorUnsignedToFloat(temp_v3 >> 0xc,(unsigned char)(temp_v2 >> 0x16) & 3);
      temp_v4 = temp_v12 + temp_v4 * temp_v9;
      temp_v10 = (float)VectorUnsignedToFloat(temp_v6 >> 0xc,(unsigned char)(temp_v2 >> 0x16) & 3);
      param_2[4] = (int)temp_v4;
      param_2[5] = (int)(((temp_v12 + temp_v10 * temp_v9) - temp_v4) / (temp_v7 - temp_v8));
      param_2[6] = (int)temp_v11;
      param_2[7] = (int)temp_v11;
      return;
    }
    if (temp_v0 == '\x02') {
      temp_v3 = *puVar3;
      temp_v12 = param_1[5];
      temp_v9 = param_1[4];
      temp_v6 = *puVar5;
      param_2[2] = (int)temp_v8;
      param_2[3] = (int)temp_v7;
      temp_v7 = temp_v7 - temp_v8;
      temp_v4 = (float)VectorUnsignedToFloat(temp_v3 >> 0xc,(unsigned char)(temp_v2 >> 0x16) & 3);
      temp_v8 = 1.0f / temp_v7;
      temp_v4 = temp_v12 + temp_v4 * temp_v9;
      temp_v10 = (float)VectorUnsignedToFloat(temp_v6 >> 0xc,(unsigned char)(temp_v2 >> 0x16) & 3);
      param_2[4] = (int)temp_v4;
      param_2[5] = (int)temp_v11;
      temp_v4 = temp_v4 - (temp_v12 + temp_v10 * temp_v9);
      param_2[6] = (int)(((temp_v7 * -2.0f * temp_v11 - temp_v4 * 3.0f) - temp_v7 * temp_v11) *
                        temp_v8 * temp_v8);
      param_2[7] = (int)((temp_v4 * 2.0f + temp_v7 * temp_v11 + temp_v7 * temp_v11) *
                        temp_v8 * temp_v8 * temp_v8);
      return;
    }
  }
  return;
}
