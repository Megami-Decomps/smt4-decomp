/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0051c3e4` (_code @ 0x51c3e4, 0x648 bytes) from smt4a.cxi.
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


void FUN_0051c3e4(float *param_1,float *param_2)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 6 native warning(s); review required */
  unsigned int temp_v0;
  char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned char *pbVar10;
  unsigned char *pbVar11;
  float temp_v9;
  unsigned char temp_v10;
  unsigned char temp_v11;
  unsigned int in_fpscr;
  unsigned int temp_v12;
  float in_s0;
  int temp_v13;
  unsigned int temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  
  temp_v8 = 0;
  temp_v21 = 0.0f;
  temp_v9 = param_1[8];
  temp_v0 = in_fpscr & 0xfffffff;
  temp_v12 = temp_v0 | ((unsigned int)(in_s0 == 0.0f) << 0x1e) | ((unsigned int)(0.0f <= in_s0) << 0x1d);
  temp_v14 = VectorFloatToUnsigned(in_s0 / param_1[6],3);
  pbVar11 = (unsigned char *)(((unsigned int)*(unsigned short *)((int)param_1 + 0xe) * 6 - 6) + (int)temp_v9);
  temp_v2 = (unsigned char)(temp_v12 >> 0x18);
  temp_v10 = (unsigned char)(temp_v2 >> 6);
  temp_v11 = 0;
  if ((unsigned char)((temp_v2 >> 5) & 1)) {
    temp_v11 = temp_v14 <= *pbVar11;
    temp_v10 = *pbVar11 == temp_v14;
  }
  temp_v18 = temp_v21;
  if (temp_v11 && !temp_v10) {
    param_2[1] = 0.0f;
  }
  else {
    temp_v12 = temp_v0 | ((unsigned int)(0.0f <= in_s0) << 0x1d);
    if (!romwright_subpiece_4_1_0(temp_v12 >> 0x1d,0)) {
      temp_v1 = *(char *)(param_1 + 2);
    }
    else {
      temp_v1 = *(char *)((int)param_1 + 9);
    }
    if (temp_v1 == '\0') {
      temp_v0 = temp_v0 | ((unsigned int)(0.0f <= in_s0) << 0x1d);
      if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
        temp_v2 = *(unsigned char *)((int)temp_v9 + 2);
        temp_v3 = *(unsigned char *)((int)temp_v9 + 1);
        temp_v18 = param_1[4];
        temp_v21 = param_1[5];
        param_2[1] = -NAN;
        *param_2 = temp_v9;
        temp_v9 = (float)VectorUnsignedToFloat
                                  ((unsigned int)temp_v3 + (unsigned int)temp_v2 * 0x100,(unsigned char)(temp_v0 >> 0x16) & 3);
        temp_v15 = *param_1;
        param_2[4] = temp_v21 + temp_v9 * temp_v18;
        param_2[5] = 0.0f;
        param_2[6] = 0.0f;
        param_2[7] = 0.0f;
        param_2[2] = -3.4028235e+38f;
        param_2[3] = temp_v15;
        return;
      }
      temp_v18 = param_1[4];
      temp_v9 = (float)VectorUnsignedToFloat((unsigned int)*pbVar11,(unsigned char)(temp_v0 >> 0x16) & 3);
      temp_v16 = (float)VectorUnsignedToFloat
                                ((unsigned int)pbVar11[1] + (unsigned int)pbVar11[2] * 0x100,
                                 (unsigned char)(temp_v0 >> 0x16) & 3);
      temp_v9 = temp_v9 * param_1[6] + *param_1;
      temp_v21 = param_1[5];
      param_2[1] = 1.4013e-45f;
      *param_2 = 0.0f;
      temp_v15 = param_1[1];
      param_2[4] = temp_v21 + temp_v16 * temp_v18;
      param_2[5] = 0.0f;
      param_2[6] = 0.0f;
      param_2[7] = 0.0f;
      if (temp_v15 < temp_v9) {
        temp_v9 = temp_v15;
      }
      param_2[2] = temp_v9;
      param_2[3] = 3.4028235e+38f;
      return;
    }
    temp_v9 = param_1[7] * in_s0;
    hardfp_floorf();
    temp_v9 = (float)(int)temp_v9;
    param_2[1] = temp_v9;
    if ((temp_v1 == '\x02') && (((unsigned int)temp_v9 & 1) != 0)) {
      temp_v8 = 1;
      temp_v21 = (float)VectorSignedToFloat((int)temp_v9 + 1,(unsigned char)(temp_v12 >> 0x16) & 3);
      temp_v21 = (param_1[1] - *param_1) * temp_v21;
      in_s0 = temp_v21 - in_s0;
    }
    else {
      temp_v21 = (float)VectorSignedToFloat(temp_v9,(unsigned char)(temp_v12 >> 0x16) & 3);
      temp_v21 = (param_1[1] - *param_1) * temp_v21;
      in_s0 = in_s0 - temp_v21;
    }
    temp_v14 = VectorFloatToUnsigned(in_s0 / param_1[6],3);
  }
  pbVar11 = (unsigned char *)*param_2;
  if (pbVar11 == (unsigned char *)0x0) {
    temp_v9 = (float)VectorSignedToFloat(*(unsigned short *)((int)param_1 + 0xe) - 1,
                                        (unsigned char)(temp_v12 >> 0x16) & 3);
    temp_v13 = VectorFloatToUnsigned(param_1[7] * temp_v9 * in_s0,3);
    pbVar11 = (unsigned char *)((int)param_1[8] + temp_v13 * 6);
  }
  if (temp_v8) {
    pbVar10 = pbVar11;
    if (*pbVar11 >= temp_v14) {
      do {
        pbVar11 = pbVar10;
        pbVar10 = pbVar11 + -6;
      } while (temp_v14 <= pbVar11[-6]);
    }
    else {
      do {
        pbVar11 = pbVar11 + 6;
      } while (*pbVar11 < temp_v14);
    }
    temp_v9 = param_1[6];
    temp_v15 = (float)VectorUnsignedToFloat((unsigned int)*pbVar11,(unsigned char)(temp_v12 >> 0x16) & 3);
    temp_v17 = (float)VectorUnsignedToFloat((unsigned int)pbVar11[-6],(unsigned char)(temp_v12 >> 0x16) & 3);
    temp_v16 = *param_1;
    *param_2 = (float)(pbVar11 + -6);
    temp_v1 = *(char *)(param_1 + 3);
    temp_v15 = (temp_v16 - temp_v15 * temp_v9) + temp_v21;
    temp_v21 = (temp_v16 - temp_v17 * temp_v9) + temp_v21;
    if (temp_v1 == '\0') {
      temp_v2 = pbVar11[1];
      temp_v3 = pbVar11[2];
      temp_v16 = param_1[4];
      temp_v9 = param_1[5];
      param_2[2] = temp_v15;
      param_2[5] = temp_v18;
      param_2[6] = temp_v18;
      param_2[7] = temp_v18;
      temp_v18 = (float)VectorUnsignedToFloat
                                ((unsigned int)temp_v2 + (unsigned int)temp_v3 * 0x100,(unsigned char)(temp_v12 >> 0x16) & 3);
      param_2[3] = temp_v21;
      param_2[4] = temp_v9 + temp_v18 * temp_v16;
      return;
    }
    if (temp_v1 == '\x01') {
      temp_v2 = pbVar11[1];
      temp_v3 = pbVar11[2];
      temp_v9 = param_1[5];
      temp_v17 = param_1[4];
      temp_v4 = pbVar11[-5];
      temp_v5 = pbVar11[-4];
      param_2[2] = temp_v15;
      param_2[3] = temp_v21;
      temp_v16 = (float)VectorUnsignedToFloat
                                ((unsigned int)temp_v2 + (unsigned int)temp_v3 * 0x100,(unsigned char)(temp_v12 >> 0x16) & 3);
      temp_v16 = temp_v9 + temp_v16 * temp_v17;
      temp_v19 = (float)VectorUnsignedToFloat
                                ((unsigned int)temp_v4 + (unsigned int)temp_v5 * 0x100,(unsigned char)(temp_v12 >> 0x16) & 3);
      param_2[4] = temp_v16;
      param_2[5] = ((temp_v9 + temp_v19 * temp_v17) - temp_v16) / (temp_v21 - temp_v15);
      param_2[6] = temp_v18;
      param_2[7] = temp_v18;
      return;
    }
    if (temp_v1 == '\x02') {
      temp_v19 = param_1[5];
      temp_v9 = param_1[4];
      temp_v2 = pbVar11[-4];
      temp_v3 = pbVar11[-5];
      temp_v4 = pbVar11[-2];
      temp_v18 = (float)VectorUnsignedToFloat
                                ((unsigned int)pbVar11[1] + (unsigned int)pbVar11[2] * 0x100,
                                 (unsigned char)(temp_v12 >> 0x16) & 3);
      temp_v5 = pbVar11[-3];
      temp_v20 = temp_v19 + temp_v18 * temp_v9;
      temp_v7 = pbVar11[5];
      temp_v6 = pbVar11[4];
      param_2[2] = temp_v15;
      param_2[3] = temp_v21;
      temp_v16 = (float)VectorUnsignedToFloat
                                ((unsigned int)temp_v3 + (unsigned int)temp_v2 * 0x100,(unsigned char)(temp_v12 >> 0x16) & 3);
      param_2[4] = temp_v20;
      temp_v17 = (float)VectorSignedToFloat((unsigned int)temp_v5 + (char)(temp_v4 << 4) * 0x10,
                                          (unsigned char)(temp_v12 >> 0x16) & 3);
      temp_v18 = (float)VectorSignedToFloat((char)temp_v7 * 0x10 + (unsigned int)(temp_v6 >> 4),
                                          (unsigned char)(temp_v12 >> 0x16) & 3);
      temp_v20 = temp_v20 - (temp_v19 + temp_v16 * temp_v9);
      temp_v18 = temp_v18 * -0.03125f;
      temp_v21 = temp_v21 - temp_v15;
      param_2[5] = temp_v18;
      temp_v9 = 1.0f / temp_v21;
      param_2[6] = ((temp_v21 * -2.0f * temp_v18 - temp_v20 * 3.0f) - temp_v21 * temp_v17 * -0.03125f) *
                   temp_v9 * temp_v9;
      param_2[7] = (temp_v20 * 2.0f + temp_v21 * temp_v18 + temp_v21 * temp_v17 * -0.03125f) *
                   temp_v9 * temp_v9 * temp_v9;
      return;
    }
  }
  else {
    pbVar10 = pbVar11;
    if (temp_v14 < *pbVar11) {
      do {
        pbVar11 = pbVar11 + -6;
      } while (temp_v14 < *pbVar11);
    }
    else {
      do {
        pbVar11 = pbVar10;
        pbVar10 = pbVar11 + 6;
      } while (pbVar11[6] <= temp_v14);
    }
    temp_v9 = param_1[6];
    temp_v2 = *pbVar11;
    temp_v16 = *param_1;
    temp_v3 = pbVar11[6];
    *param_2 = (float)(pbVar11 + 6);
    temp_v1 = *(char *)(param_1 + 3);
    temp_v15 = (float)VectorUnsignedToFloat((unsigned int)temp_v2,(unsigned char)(temp_v12 >> 0x16) & 3);
    temp_v17 = (float)VectorUnsignedToFloat((unsigned int)temp_v3,(unsigned char)(temp_v12 >> 0x16) & 3);
    temp_v15 = temp_v15 * temp_v9 + temp_v21 + temp_v16;
    temp_v16 = temp_v17 * temp_v9 + temp_v21 + temp_v16;
    if (temp_v1 == '\0') {
      temp_v9 = (float)VectorUnsignedToFloat
                                ((unsigned int)pbVar11[1] + (unsigned int)pbVar11[2] * 0x100,
                                 (unsigned char)(temp_v12 >> 0x16) & 3);
      param_2[4] = param_1[5] + temp_v9 * param_1[4];
      param_2[5] = temp_v18;
      param_2[6] = temp_v18;
      param_2[7] = temp_v18;
      param_2[2] = temp_v15;
      param_2[3] = temp_v16;
      return;
    }
    if (temp_v1 == '\x01') {
      temp_v9 = (float)VectorUnsignedToFloat
                                ((unsigned int)pbVar11[1] + (unsigned int)pbVar11[2] * 0x100,
                                 (unsigned char)(temp_v12 >> 0x16) & 3);
      temp_v9 = param_1[5] + temp_v9 * param_1[4];
      temp_v21 = (float)VectorUnsignedToFloat
                                ((unsigned int)pbVar11[7] + (unsigned int)pbVar11[8] * 0x100,
                                 (unsigned char)(temp_v12 >> 0x16) & 3);
      param_2[5] = ((param_1[5] + temp_v21 * param_1[4]) - temp_v9) / (temp_v16 - temp_v15);
      param_2[6] = temp_v18;
      param_2[7] = temp_v18;
      param_2[2] = temp_v15;
      param_2[3] = temp_v16;
      param_2[4] = temp_v9;
      return;
    }
    if (temp_v1 == '\x02') {
      temp_v9 = param_1[5];
      temp_v21 = param_1[4];
      temp_v2 = pbVar11[10];
      temp_v18 = (float)VectorUnsignedToFloat
                                ((unsigned int)pbVar11[1] + (unsigned int)pbVar11[2] * 0x100,
                                 (unsigned char)(temp_v12 >> 0x16) & 3);
      temp_v3 = pbVar11[9];
      temp_v19 = temp_v9 + temp_v18 * temp_v21;
      temp_v5 = pbVar11[5];
      temp_v4 = pbVar11[4];
      temp_v17 = (float)VectorUnsignedToFloat
                                ((unsigned int)pbVar11[7] + (unsigned int)pbVar11[8] * 0x100,
                                 (unsigned char)(temp_v12 >> 0x16) & 3);
      param_2[4] = temp_v19;
      temp_v20 = (float)VectorSignedToFloat((unsigned int)temp_v3 + (char)(temp_v2 << 4) * 0x10,
                                          (unsigned char)(temp_v12 >> 0x16) & 3);
      temp_v18 = (float)VectorSignedToFloat((char)temp_v5 * 0x10 + (unsigned int)(temp_v4 >> 4),
                                          (unsigned char)(temp_v12 >> 0x16) & 3);
      temp_v19 = temp_v19 - (temp_v9 + temp_v17 * temp_v21);
      temp_v18 = temp_v18 * 0.03125f;
      temp_v21 = temp_v16 - temp_v15;
      param_2[5] = temp_v18;
      temp_v9 = 1.0f / temp_v21;
      param_2[6] = ((temp_v21 * -2.0f * temp_v18 - temp_v19 * 3.0f) - temp_v21 * temp_v20 * 0.03125f) *
                   temp_v9 * temp_v9;
      param_2[7] = (temp_v19 * 2.0f + temp_v21 * temp_v18 + temp_v21 * temp_v20 * 0.03125f) *
                   temp_v9 * temp_v9 * temp_v9;
      param_2[2] = temp_v15;
      param_2[3] = temp_v16;
      return;
    }
  }
  return;
}
