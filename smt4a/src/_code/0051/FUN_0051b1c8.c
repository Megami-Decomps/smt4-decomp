/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0051b1c8` (_code @ 0x51b1c8, 0x664 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_FLOAT_BITS_DEFINED
#define ROMWRIGHT_FLOAT_BITS_DEFINED
static unsigned int romwright_f2u(float value)
{
    union { float f; unsigned int u; } bits;
    bits.f = value;
    return bits.u;
}
static float romwright_u2f(unsigned int value)
{
    union { float f; unsigned int u; } bits;
    bits.u = value;
    return bits.f;
}
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: hardfp_floorf. */


void FUN_0051b1c8(float *param_1,float *param_2)

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
  unsigned char *pbVar9;
  unsigned char *pbVar10;
  float temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  unsigned int in_fpscr;
  unsigned int temp_v11;
  float in_s0;
  unsigned int temp_v12;
  float temp_v13;
  int temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  
  temp_v20 = 0.0f;
  temp_v8 = param_1[8];
  temp_v0 = in_fpscr & 0xfffffff;
  temp_v11 = temp_v0 | ((unsigned int)(in_s0 == 0.0f) << 0x1e) | ((unsigned int)(0.0f <= in_s0) << 0x1d);
  pbVar10 = (unsigned char *)(((unsigned int)*(unsigned short *)((int)param_1 + 0xe) * 4 - 4) + (int)temp_v8);
  temp_v7 = 0;
  temp_v12 = VectorFloatToUnsigned(in_s0 / param_1[6],3);
  temp_v2 = (unsigned char)(temp_v11 >> 0x18);
  temp_v9 = (unsigned char)(temp_v2 >> 6);
  temp_v10 = 0;
  if ((unsigned char)((temp_v2 >> 5) & 1)) {
    temp_v10 = temp_v12 <= *pbVar10;
    temp_v9 = *pbVar10 == temp_v12;
  }
  temp_v13 = temp_v20;
  if (temp_v10 && !temp_v9) {
    param_2[1] = 0.0f;
  }
  else {
    temp_v11 = temp_v0 | ((unsigned int)(0.0f <= in_s0) << 0x1d);
    if (!romwright_subpiece_4_1_0(temp_v11 >> 0x1d,0)) {
      temp_v1 = *(char *)(param_1 + 2);
    }
    else {
      temp_v1 = *(char *)((int)param_1 + 9);
    }
    if (temp_v1 == '\0') {
      temp_v0 = temp_v0 | ((unsigned int)(0.0f <= in_s0) << 0x1d);
      if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
        temp_v2 = *(unsigned char *)((int)temp_v8 + 2);
        temp_v3 = *(unsigned char *)((int)temp_v8 + 1);
        temp_v13 = param_1[4];
        temp_v20 = param_1[5];
        param_2[1] = -NAN;
        *param_2 = temp_v8;
        temp_v8 = *param_1;
        temp_v15 = (float)VectorUnsignedToFloat
                                  ((unsigned int)temp_v3 + (temp_v2 & 0xf) * 0x100,(unsigned char)(temp_v0 >> 0x16) & 3);
        param_2[2] = -3.4028235e+38f;
        param_2[3] = temp_v8;
        param_2[4] = temp_v20 + temp_v15 * temp_v13;
        param_2[5] = 0.0f;
        param_2[6] = 0.0f;
        param_2[7] = 0.0f;
        return;
      }
      temp_v13 = param_1[4];
      temp_v8 = (float)VectorUnsignedToFloat((unsigned int)*pbVar10,(unsigned char)(temp_v0 >> 0x16) & 3);
      temp_v15 = (float)VectorUnsignedToFloat
                                ((unsigned int)pbVar10[1] + (pbVar10[2] & 0xf) * 0x100,
                                 (unsigned char)(temp_v0 >> 0x16) & 3);
      temp_v8 = temp_v8 * param_1[6] + *param_1;
      temp_v20 = param_1[5];
      param_2[1] = 1.4013e-45f;
      *param_2 = 0.0f;
      if (param_1[1] < temp_v8) {
        temp_v8 = param_1[1];
      }
      param_2[2] = temp_v8;
      param_2[4] = temp_v20 + temp_v15 * temp_v13;
      param_2[3] = 3.4028235e+38f;
      param_2[5] = 0.0f;
      param_2[6] = 0.0f;
      param_2[7] = 0.0f;
      return;
    }
    temp_v8 = param_1[7] * in_s0;
    hardfp_floorf();
    temp_v8 = (float)(int)temp_v8;
    param_2[1] = temp_v8;
    if ((temp_v1 == '\x02') && (((unsigned int)temp_v8 & 1) != 0)) {
      temp_v7 = 1;
      temp_v20 = (float)VectorSignedToFloat((int)temp_v8 + 1,(unsigned char)(temp_v11 >> 0x16) & 3);
      temp_v20 = (param_1[1] - *param_1) * temp_v20;
      in_s0 = temp_v20 - in_s0;
    }
    else {
      temp_v20 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(temp_v11 >> 0x16) & 3);
      temp_v20 = (param_1[1] - *param_1) * temp_v20;
      in_s0 = in_s0 - temp_v20;
    }
    temp_v12 = VectorFloatToUnsigned(in_s0 / param_1[6],3);
  }
  pbVar10 = (unsigned char *)romwright_f2u((float)(*param_2));
  if (pbVar10 == (unsigned char *)0x0) {
    temp_v8 = (float)VectorSignedToFloat(*(unsigned short *)((int)param_1 + 0xe) - 1,
                                        (unsigned char)(temp_v11 >> 0x16) & 3);
    temp_v14 = VectorFloatToUnsigned(param_1[7] * temp_v8 * in_s0,3);
    pbVar10 = (unsigned char *)((int)param_1[8] + temp_v14 * 4);
  }
  if (temp_v7) {
    pbVar9 = pbVar10;
    if (*pbVar10 >= temp_v12) {
      do {
        pbVar10 = pbVar9;
        pbVar9 = pbVar10 + -4;
      } while (temp_v12 <= pbVar10[-4]);
    }
    else {
      do {
        pbVar10 = pbVar10 + 4;
      } while (*pbVar10 < temp_v12);
    }
    temp_v2 = *pbVar10;
    temp_v15 = param_1[6];
    temp_v16 = *param_1;
    temp_v3 = pbVar10[-4];
    *param_2 = romwright_u2f((unsigned int)((pbVar10 + -4)));
    temp_v1 = *(char *)(param_1 + 3);
    temp_v8 = (float)VectorUnsignedToFloat((unsigned int)temp_v2,(unsigned char)(temp_v11 >> 0x16) & 3);
    temp_v17 = (float)VectorUnsignedToFloat((unsigned int)temp_v3,(unsigned char)(temp_v11 >> 0x16) & 3);
    temp_v8 = (temp_v16 - temp_v8 * temp_v15) + temp_v20;
    temp_v20 = (temp_v16 - temp_v17 * temp_v15) + temp_v20;
    if (temp_v1 == '\0') {
      temp_v15 = (float)VectorUnsignedToFloat
                                ((unsigned int)pbVar10[1] + (pbVar10[2] & 0xf) * 0x100,
                                 (unsigned char)(temp_v11 >> 0x16) & 3);
      param_2[4] = param_1[5] + temp_v15 * param_1[4];
      param_2[5] = temp_v13;
      param_2[6] = temp_v13;
      param_2[7] = temp_v13;
      param_2[2] = temp_v8;
      param_2[3] = temp_v20;
      return;
    }
    if (temp_v1 == '\x01') {
      temp_v15 = param_1[5];
      temp_v18 = param_1[4];
      temp_v16 = (float)VectorUnsignedToFloat
                                ((unsigned int)pbVar10[1] + (pbVar10[2] & 0xf) * 0x100,
                                 (unsigned char)(temp_v11 >> 0x16) & 3);
      temp_v16 = temp_v15 + temp_v16 * temp_v18;
      temp_v17 = (float)VectorUnsignedToFloat
                                ((unsigned int)pbVar10[-3] + (pbVar10[-2] & 0xf) * 0x100,
                                 (unsigned char)(temp_v11 >> 0x16) & 3);
      param_2[4] = temp_v16;
      param_2[2] = temp_v8;
      param_2[3] = temp_v20;
      param_2[5] = ((temp_v15 + temp_v17 * temp_v18) - temp_v16) / (temp_v20 - temp_v8);
      param_2[6] = temp_v13;
      param_2[7] = temp_v13;
      return;
    }
    if (temp_v1 == '\x02') {
      temp_v2 = pbVar10[2];
      temp_v13 = param_1[5];
      temp_v16 = param_1[4];
      temp_v3 = pbVar10[3];
      temp_v15 = (float)VectorUnsignedToFloat
                                ((unsigned int)pbVar10[1] + (temp_v2 & 0xf) * 0x100,(unsigned char)(temp_v11 >> 0x16) & 3
                                );
      temp_v15 = temp_v13 + temp_v15 * temp_v16;
      temp_v19 = (float)VectorSignedToFloat((char)pbVar10[-1] * 0x10 + (unsigned int)(pbVar10[-2] >> 4),
                                          (unsigned char)(temp_v11 >> 0x16) & 3);
      temp_v17 = (float)VectorUnsignedToFloat
                                ((unsigned int)pbVar10[-3] + (pbVar10[-2] & 0xf) * 0x100,
                                 (unsigned char)(temp_v11 >> 0x16) & 3);
      param_2[4] = temp_v15;
      param_2[2] = temp_v8;
      param_2[3] = temp_v20;
      temp_v20 = temp_v20 - temp_v8;
      temp_v8 = 1.0f / temp_v20;
      temp_v18 = (float)VectorSignedToFloat((char)temp_v3 * 0x10 + (unsigned int)(temp_v2 >> 4),
                                          (unsigned char)(temp_v11 >> 0x16) & 3);
      temp_v15 = temp_v15 - (temp_v13 + temp_v17 * temp_v16);
      temp_v18 = temp_v18 * -0.03125f;
      param_2[5] = temp_v18;
      param_2[6] = ((temp_v20 * -2.0f * temp_v18 - temp_v15 * 3.0f) - temp_v20 * temp_v19 * -0.03125f) *
                   temp_v8 * temp_v8;
      param_2[7] = (temp_v15 * 2.0f + temp_v20 * temp_v18 + temp_v20 * temp_v19 * -0.03125f) *
                   temp_v8 * temp_v8 * temp_v8;
      return;
    }
  }
  else {
    pbVar9 = pbVar10;
    if (temp_v12 < *pbVar10) {
      do {
        pbVar10 = pbVar10 + -4;
      } while (temp_v12 < *pbVar10);
    }
    else {
      do {
        pbVar10 = pbVar9;
        pbVar9 = pbVar10 + 4;
      } while (pbVar10[4] <= temp_v12);
    }
    temp_v16 = param_1[6];
    temp_v2 = *pbVar10;
    temp_v8 = *param_1;
    temp_v3 = pbVar10[4];
    *param_2 = romwright_u2f((unsigned int)((pbVar10 + 4)));
    temp_v1 = *(char *)(param_1 + 3);
    temp_v15 = (float)VectorUnsignedToFloat((unsigned int)temp_v2,(unsigned char)(temp_v11 >> 0x16) & 3);
    temp_v17 = (float)VectorUnsignedToFloat((unsigned int)temp_v3,(unsigned char)(temp_v11 >> 0x16) & 3);
    temp_v15 = temp_v15 * temp_v16 + temp_v20 + temp_v8;
    temp_v8 = temp_v17 * temp_v16 + temp_v20 + temp_v8;
    if (temp_v1 == '\0') {
      temp_v2 = pbVar10[2];
      temp_v3 = pbVar10[1];
      temp_v16 = param_1[4];
      temp_v20 = param_1[5];
      param_2[2] = temp_v15;
      param_2[3] = temp_v8;
      temp_v8 = (float)VectorUnsignedToFloat
                                ((unsigned int)temp_v3 + (temp_v2 & 0xf) * 0x100,(unsigned char)(temp_v11 >> 0x16) & 3);
      param_2[4] = temp_v20 + temp_v8 * temp_v16;
      param_2[5] = temp_v13;
      param_2[6] = temp_v13;
      param_2[7] = temp_v13;
      return;
    }
    if (temp_v1 == '\x01') {
      temp_v2 = pbVar10[2];
      temp_v3 = pbVar10[1];
      temp_v16 = param_1[4];
      temp_v17 = param_1[5];
      temp_v4 = pbVar10[6];
      temp_v5 = pbVar10[5];
      param_2[2] = temp_v15;
      param_2[3] = temp_v8;
      temp_v20 = (float)VectorUnsignedToFloat
                                ((unsigned int)temp_v3 + (temp_v2 & 0xf) * 0x100,(unsigned char)(temp_v11 >> 0x16) & 3);
      temp_v20 = temp_v17 + temp_v20 * temp_v16;
      temp_v18 = (float)VectorUnsignedToFloat
                                ((unsigned int)temp_v5 + (temp_v4 & 0xf) * 0x100,(unsigned char)(temp_v11 >> 0x16) & 3);
      param_2[4] = temp_v20;
      param_2[5] = ((temp_v17 + temp_v18 * temp_v16) - temp_v20) / (temp_v8 - temp_v15);
      param_2[6] = temp_v13;
      param_2[7] = temp_v13;
      return;
    }
    if (temp_v1 == '\x02') {
      temp_v2 = pbVar10[2];
      temp_v13 = param_1[5];
      temp_v16 = param_1[4];
      temp_v3 = pbVar10[6];
      temp_v4 = pbVar10[5];
      temp_v5 = pbVar10[3];
      temp_v6 = pbVar10[7];
      temp_v20 = (float)VectorUnsignedToFloat
                                ((unsigned int)pbVar10[1] + (temp_v2 & 0xf) * 0x100,(unsigned char)(temp_v11 >> 0x16) & 3
                                );
      param_2[2] = temp_v15;
      param_2[3] = temp_v8;
      temp_v8 = temp_v8 - temp_v15;
      temp_v15 = temp_v13 + temp_v20 * temp_v16;
      temp_v18 = (float)VectorUnsignedToFloat
                                ((unsigned int)temp_v4 + (temp_v3 & 0xf) * 0x100,(unsigned char)(temp_v11 >> 0x16) & 3);
      temp_v19 = (float)VectorSignedToFloat((char)temp_v6 * 0x10 + (unsigned int)(temp_v3 >> 4),
                                          (unsigned char)(temp_v11 >> 0x16) & 3);
      param_2[4] = temp_v15;
      temp_v20 = 1.0f / temp_v8;
      temp_v17 = (float)VectorSignedToFloat((char)temp_v5 * 0x10 + (unsigned int)(temp_v2 >> 4),
                                          (unsigned char)(temp_v11 >> 0x16) & 3);
      temp_v15 = temp_v15 - (temp_v13 + temp_v18 * temp_v16);
      temp_v17 = temp_v17 * 0.03125f;
      param_2[5] = temp_v17;
      param_2[6] = ((temp_v8 * -2.0f * temp_v17 - temp_v15 * 3.0f) - temp_v8 * temp_v19 * 0.03125f) *
                   temp_v20 * temp_v20;
      param_2[7] = (temp_v15 * 2.0f + temp_v8 * temp_v17 + temp_v8 * temp_v19 * 0.03125f) *
                   temp_v20 * temp_v20 * temp_v20;
      return;
    }
  }
  return;
}
