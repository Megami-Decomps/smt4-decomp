/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0051b8e8` (_code @ 0x51b8e8, 0x5dc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);
int hardfp_floorf(void);

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
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: hardfp_floorf. */


void FUN_0051b8e8(float *param_1,float *param_2)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 6 native warning(s); review required */
  unsigned int temp_v0;
  char temp_v1;
  unsigned short temp_v2;
  unsigned short temp_v3;
  unsigned short temp_v4;
  unsigned short temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned short *puVar9;
  unsigned short *puVar10;
  float temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  unsigned int in_fpscr;
  unsigned int temp_v11;
  float in_s0;
  int temp_v12;
  unsigned int temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  
  temp_v7 = 0;
  temp_v20 = 32.0f;
  temp_v18 = 0.0f;
  temp_v8 = param_1[8];
  temp_v0 = in_fpscr & 0xfffffff;
  temp_v11 = temp_v0 | ((unsigned int)(in_s0 == 0.0f) << 0x1e) | ((unsigned int)(0.0f <= in_s0) << 0x1d);
  temp_v19 = 0.03125f;
  puVar10 = (unsigned short *)(((unsigned int)*(unsigned short *)((int)param_1 + 0xe) * 6 - 6) + (int)temp_v8);
  temp_v13 = (unsigned int)((in_s0 / param_1[6]) * 32.0f);
  temp_v6 = (unsigned char)(temp_v11 >> 0x18);
  temp_v9 = (unsigned char)(temp_v6 >> 6);
  temp_v10 = 0;
  if ((unsigned char)((temp_v6 >> 5) & 1)) {
    temp_v10 = temp_v13 <= *puVar10;
    temp_v9 = *puVar10 == temp_v13;
  }
  temp_v16 = temp_v18;
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
        temp_v2 = *(unsigned short *)((int)temp_v8 + 2);
        temp_v19 = param_1[4];
        temp_v18 = param_1[5];
        param_2[1] = -NAN;
        *param_2 = temp_v8;
        temp_v8 = (float)VectorUnsignedToFloat((unsigned int)temp_v2,(unsigned char)(temp_v0 >> 0x16) & 3);
        temp_v20 = *param_1;
        param_2[4] = temp_v18 + temp_v8 * temp_v19;
        param_2[5] = 0.0f;
        param_2[6] = 0.0f;
        param_2[7] = 0.0f;
        param_2[2] = -3.4028235e+38f;
        param_2[3] = temp_v20;
        return;
      }
      temp_v19 = param_1[4];
      temp_v8 = (float)VectorUnsignedToFloat((unsigned int)*puVar10,(unsigned char)(temp_v0 >> 0x16) & 3);
      temp_v16 = (float)VectorUnsignedToFloat((unsigned int)puVar10[1],(unsigned char)(temp_v0 >> 0x16) & 3);
      temp_v8 = temp_v8 * 0.03125f * param_1[6] + *param_1;
      temp_v18 = param_1[5];
      param_2[1] = 1.4013e-45f;
      *param_2 = 0.0f;
      temp_v20 = param_1[1];
      param_2[4] = temp_v18 + temp_v16 * temp_v19;
      param_2[5] = 0.0f;
      param_2[6] = 0.0f;
      param_2[7] = 0.0f;
      if (temp_v20 < temp_v8) {
        temp_v8 = temp_v20;
      }
      param_2[2] = temp_v8;
      param_2[3] = 3.4028235e+38f;
      return;
    }
    temp_v8 = param_1[7] * in_s0;
    hardfp_floorf();
    temp_v8 = (float)(int)temp_v8;
    param_2[1] = temp_v8;
    if ((temp_v1 == '\x02') && (((unsigned int)temp_v8 & 1) != 0)) {
      temp_v7 = 1;
      temp_v18 = (float)VectorSignedToFloat((int)temp_v8 + 1,(unsigned char)(temp_v11 >> 0x16) & 3);
      temp_v18 = (param_1[1] - *param_1) * temp_v18;
      in_s0 = temp_v18 - in_s0;
    }
    else {
      temp_v18 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(temp_v11 >> 0x16) & 3);
      temp_v18 = (param_1[1] - *param_1) * temp_v18;
      in_s0 = in_s0 - temp_v18;
    }
    temp_v13 = (unsigned int)((in_s0 / param_1[6]) * temp_v20);
  }
  puVar10 = (unsigned short *)romwright_f2u((float)(*param_2));
  if (puVar10 == (unsigned short *)0x0) {
    temp_v8 = (float)VectorSignedToFloat(*(unsigned short *)((int)param_1 + 0xe) - 1,
                                        (unsigned char)(temp_v11 >> 0x16) & 3);
    temp_v12 = VectorFloatToUnsigned(param_1[7] * temp_v8 * in_s0,3);
    puVar10 = (unsigned short *)((int)param_1[8] + temp_v12 * 6);
  }
  if (temp_v7) {
    puVar9 = puVar10;
    if (*puVar10 >= temp_v13) {
      do {
        puVar10 = puVar9;
        puVar9 = puVar10 + -3;
      } while (temp_v13 <= puVar10[-3]);
    }
    else {
      do {
        puVar10 = puVar10 + 3;
      } while (*puVar10 < temp_v13);
    }
    temp_v2 = *puVar10;
    temp_v20 = param_1[6];
    temp_v14 = *param_1;
    temp_v3 = puVar10[-3];
    *param_2 = romwright_u2f((unsigned int)((puVar10 + -3)));
    temp_v1 = *(char *)(param_1 + 3);
    temp_v8 = (float)VectorUnsignedToFloat((unsigned int)temp_v2,(unsigned char)(temp_v11 >> 0x16) & 3);
    temp_v15 = (float)VectorUnsignedToFloat((unsigned int)temp_v3,(unsigned char)(temp_v11 >> 0x16) & 3);
    temp_v8 = (temp_v14 - temp_v8 * temp_v19 * temp_v20) + temp_v18;
    temp_v18 = (temp_v14 - temp_v15 * temp_v19 * temp_v20) + temp_v18;
    if (temp_v1 == '\0') {
      temp_v2 = puVar10[1];
      temp_v20 = param_1[4];
      temp_v19 = param_1[5];
      param_2[2] = temp_v8;
      param_2[3] = temp_v18;
      temp_v8 = (float)VectorUnsignedToFloat((unsigned int)temp_v2,(unsigned char)(temp_v11 >> 0x16) & 3);
      param_2[4] = temp_v19 + temp_v8 * temp_v20;
      param_2[5] = temp_v16;
      param_2[6] = temp_v16;
      param_2[7] = temp_v16;
      return;
    }
    if (temp_v1 == '\x01') {
      temp_v2 = puVar10[1];
      temp_v20 = param_1[5];
      temp_v14 = param_1[4];
      temp_v3 = puVar10[-2];
      param_2[2] = temp_v8;
      param_2[3] = temp_v18;
      temp_v19 = (float)VectorUnsignedToFloat((unsigned int)temp_v2,(unsigned char)(temp_v11 >> 0x16) & 3);
      temp_v19 = temp_v20 + temp_v19 * temp_v14;
      temp_v15 = (float)VectorUnsignedToFloat((unsigned int)temp_v3,(unsigned char)(temp_v11 >> 0x16) & 3);
      param_2[4] = temp_v19;
      param_2[5] = ((temp_v20 + temp_v15 * temp_v14) - temp_v19) / (temp_v18 - temp_v8);
      param_2[6] = temp_v16;
      param_2[7] = temp_v16;
      return;
    }
    if (temp_v1 == '\x02') {
      temp_v2 = puVar10[1];
      temp_v20 = param_1[5];
      temp_v16 = param_1[4];
      temp_v3 = puVar10[-2];
      temp_v4 = puVar10[2];
      temp_v5 = puVar10[-1];
      param_2[2] = temp_v8;
      param_2[3] = temp_v18;
      temp_v19 = (float)VectorUnsignedToFloat((unsigned int)temp_v2,(unsigned char)(temp_v11 >> 0x16) & 3);
      temp_v17 = (float)VectorSignedToFloat((int)(short)temp_v5,(unsigned char)(temp_v11 >> 0x16) & 3);
      temp_v19 = temp_v20 + temp_v19 * temp_v16;
      temp_v14 = (float)VectorUnsignedToFloat((unsigned int)temp_v3,(unsigned char)(temp_v11 >> 0x16) & 3);
      param_2[4] = temp_v19;
      temp_v15 = (float)VectorSignedToFloat((int)(short)temp_v4,(unsigned char)(temp_v11 >> 0x16) & 3);
      temp_v19 = temp_v19 - (temp_v20 + temp_v14 * temp_v16);
      temp_v15 = temp_v15 * -0.00390625f;
      temp_v18 = temp_v18 - temp_v8;
      param_2[5] = temp_v15;
      temp_v8 = 1.0f / temp_v18;
      param_2[6] = ((temp_v18 * -2.0f * temp_v15 - temp_v19 * 3.0f) - temp_v18 * temp_v17 * -0.00390625f) *
                   temp_v8 * temp_v8;
      param_2[7] = (temp_v19 * 2.0f + temp_v18 * temp_v15 + temp_v18 * temp_v17 * -0.00390625f) *
                   temp_v8 * temp_v8 * temp_v8;
      return;
    }
  }
  else {
    puVar9 = puVar10;
    if (temp_v13 < *puVar10) {
      do {
        puVar10 = puVar10 + -3;
      } while (temp_v13 < *puVar10);
    }
    else {
      do {
        puVar10 = puVar9;
        puVar9 = puVar10 + 3;
      } while (puVar10[3] <= temp_v13);
    }
    temp_v14 = (float)VectorUnsignedToFloat((unsigned int)*puVar10,(unsigned char)(temp_v11 >> 0x16) & 3);
    temp_v8 = param_1[6];
    temp_v15 = (float)VectorUnsignedToFloat((unsigned int)puVar10[3],(unsigned char)(temp_v11 >> 0x16) & 3);
    temp_v20 = *param_1;
    *param_2 = romwright_u2f((unsigned int)((puVar10 + 3)));
    temp_v1 = *(char *)(param_1 + 3);
    temp_v14 = temp_v14 * temp_v19 * temp_v8 + temp_v18 + temp_v20;
    temp_v20 = temp_v15 * temp_v19 * temp_v8 + temp_v18 + temp_v20;
    if (temp_v1 == '\0') {
      temp_v2 = puVar10[1];
      temp_v18 = param_1[4];
      temp_v8 = param_1[5];
      param_2[2] = temp_v14;
      param_2[5] = temp_v16;
      param_2[6] = temp_v16;
      param_2[7] = temp_v16;
      temp_v19 = (float)VectorUnsignedToFloat((unsigned int)temp_v2,(unsigned char)(temp_v11 >> 0x16) & 3);
      param_2[3] = temp_v20;
      param_2[4] = temp_v8 + temp_v19 * temp_v18;
      return;
    }
    if (temp_v1 == '\x01') {
      temp_v2 = puVar10[1];
      temp_v18 = param_1[5];
      temp_v19 = param_1[4];
      temp_v3 = puVar10[4];
      param_2[2] = temp_v14;
      param_2[6] = temp_v16;
      param_2[7] = temp_v16;
      temp_v8 = (float)VectorUnsignedToFloat((unsigned int)temp_v2,(unsigned char)(temp_v11 >> 0x16) & 3);
      temp_v8 = temp_v18 + temp_v8 * temp_v19;
      temp_v16 = (float)VectorUnsignedToFloat((unsigned int)temp_v3,(unsigned char)(temp_v11 >> 0x16) & 3);
      param_2[3] = temp_v20;
      param_2[4] = temp_v8;
      param_2[5] = ((temp_v18 + temp_v16 * temp_v19) - temp_v8) / (temp_v20 - temp_v14);
      return;
    }
    if (temp_v1 == '\x02') {
      temp_v2 = puVar10[1];
      temp_v8 = param_1[5];
      temp_v19 = param_1[4];
      temp_v3 = puVar10[4];
      temp_v4 = puVar10[2];
      temp_v5 = puVar10[5];
      param_2[2] = temp_v14;
      param_2[3] = temp_v20;
      temp_v18 = (float)VectorUnsignedToFloat((unsigned int)temp_v2,(unsigned char)(temp_v11 >> 0x16) & 3);
      temp_v17 = (float)VectorSignedToFloat((int)(short)temp_v5,(unsigned char)(temp_v11 >> 0x16) & 3);
      temp_v18 = temp_v8 + temp_v18 * temp_v19;
      temp_v16 = (float)VectorUnsignedToFloat((unsigned int)temp_v3,(unsigned char)(temp_v11 >> 0x16) & 3);
      param_2[4] = temp_v18;
      temp_v15 = (float)VectorSignedToFloat((int)(short)temp_v4,(unsigned char)(temp_v11 >> 0x16) & 3);
      temp_v18 = temp_v18 - (temp_v8 + temp_v16 * temp_v19);
      temp_v15 = temp_v15 * 0.00390625f;
      temp_v20 = temp_v20 - temp_v14;
      param_2[5] = temp_v15;
      temp_v8 = 1.0f / temp_v20;
      param_2[6] = ((temp_v20 * -2.0f * temp_v15 - temp_v18 * 3.0f) - temp_v20 * temp_v17 * 0.00390625f) *
                   temp_v8 * temp_v8;
      param_2[7] = (temp_v18 * 2.0f + temp_v20 * temp_v15 + temp_v20 * temp_v17 * 0.00390625f) *
                   temp_v8 * temp_v8 * temp_v8;
      return;
    }
  }
  return;
}

} /* extern "C" */
