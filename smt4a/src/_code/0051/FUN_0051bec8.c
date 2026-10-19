/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0051bec8` (_code @ 0x51bec8, 0x470 bytes) from smt4a.cxi.
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
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: hardfp_floorf. */


void FUN_0051bec8(float *param_1,float *param_2)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 5 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  float *pfVar4;
  float *pfVar5;
  float temp_v3;
  unsigned int in_fpscr;
  unsigned int temp_v4;
  float in_s0;
  int temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  
  temp_v2 = 0;
  temp_v11 = 0.0f;
  temp_v3 = param_1[8];
  pfVar5 = (float *)(((unsigned int)*(unsigned short *)((int)param_1 + 0xe) * 0xc - 0xc) + (int)temp_v3);
  temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= in_s0) << 0x1d);
  temp_v7 = temp_v11;
  if ((romwright_subpiece_4_1_0(temp_v4 >> 0x1d,0)) &&
     (temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(*pfVar5 == in_s0) << 0x1e) |
              ((unsigned int)(in_s0 <= *pfVar5) << 0x1d), temp_v1 = (unsigned char)(temp_v4 >> 0x18),
     !(!(unsigned char)((temp_v1 >> 5) & 1) || (unsigned char)(temp_v1 >> 6)))) {
    param_2[1] = 0.0f;
  }
  else {
    temp_v4 = (temp_v4 & 0xfffffff) | ((unsigned int)(0.0f <= in_s0) << 0x1d);
    if (!romwright_subpiece_4_1_0(temp_v4 >> 0x1d,0)) {
      temp_v0 = *(char *)(param_1 + 2);
    }
    else {
      temp_v0 = *(char *)((int)param_1 + 9);
    }
    if (temp_v0 == '\0') {
      if (in_s0 < 0.0f) {
        temp_v7 = *(float *)((int)temp_v3 + 4);
        *param_2 = temp_v3;
        param_2[1] = -NAN;
        temp_v3 = *param_1;
        param_2[2] = -3.4028235e+38f;
        param_2[4] = temp_v7;
        param_2[3] = temp_v3;
        param_2[5] = 0.0f;
        param_2[6] = 0.0f;
        param_2[7] = 0.0f;
        return;
      }
      temp_v3 = *pfVar5;
      temp_v11 = *param_1;
      temp_v6 = pfVar5[1];
      param_2[1] = 1.4013e-45f;
      *param_2 = 0.0f;
      temp_v7 = temp_v3 + temp_v11;
      if (param_1[1] < temp_v3 + temp_v11) {
        temp_v7 = param_1[1];
      }
      param_2[2] = temp_v7;
      param_2[4] = temp_v6;
      param_2[3] = 3.4028235e+38f;
      param_2[5] = 0.0f;
      param_2[6] = 0.0f;
      param_2[7] = 0.0f;
      return;
    }
    temp_v3 = param_1[7] * in_s0;
    hardfp_floorf();
    temp_v3 = (float)(int)temp_v3;
    param_2[1] = temp_v3;
    if ((temp_v0 == '\x02') && (((unsigned int)temp_v3 & 1) != 0)) {
      temp_v2 = 1;
      temp_v11 = (float)VectorSignedToFloat((int)temp_v3 + 1,(unsigned char)(temp_v4 >> 0x16) & 3);
      temp_v11 = (param_1[1] - *param_1) * temp_v11;
      in_s0 = temp_v11 - in_s0;
    }
    else {
      temp_v11 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(temp_v4 >> 0x16) & 3);
      temp_v11 = (param_1[1] - *param_1) * temp_v11;
      in_s0 = in_s0 - temp_v11;
    }
  }
  pfVar5 = (float *)romwright_f2u((float)(*param_2));
  if (pfVar5 == (float *)0x0) {
    temp_v3 = (float)VectorSignedToFloat(*(unsigned short *)((int)param_1 + 0xe) - 1,(unsigned char)(temp_v4 >> 0x16) & 3
                                      );
    temp_v5 = VectorFloatToUnsigned(param_1[7] * temp_v3 * in_s0,3);
    pfVar5 = (float *)((int)param_1[8] + temp_v5 * 0xc);
  }
  if (temp_v2) {
    pfVar4 = pfVar5;
    if (*pfVar5 >= in_s0) {
      do {
        pfVar5 = pfVar4;
        pfVar4 = pfVar5 + -3;
      } while (in_s0 <= pfVar5[-3]);
    }
    else {
      do {
        pfVar5 = pfVar5 + 3;
      } while (*pfVar5 < in_s0);
    }
    temp_v6 = *pfVar5;
    temp_v3 = *param_1;
    temp_v8 = pfVar5[-3];
    *param_2 = romwright_u2f((unsigned int)((pfVar5 + -3)));
    temp_v0 = *(char *)(param_1 + 3);
    temp_v6 = (temp_v3 - temp_v6) + temp_v11;
    temp_v11 = (temp_v3 - temp_v8) + temp_v11;
    if (temp_v0 == '\0') {
      temp_v3 = pfVar5[1];
      param_2[2] = temp_v6;
      param_2[3] = temp_v11;
      param_2[4] = temp_v3;
      param_2[5] = temp_v7;
      param_2[6] = temp_v7;
      param_2[7] = temp_v7;
      return;
    }
    if (temp_v0 == '\x01') {
      temp_v3 = pfVar5[1];
      temp_v8 = pfVar5[-2];
      param_2[2] = temp_v6;
      param_2[3] = temp_v11;
      param_2[4] = temp_v3;
      param_2[5] = (temp_v8 - temp_v3) / (temp_v11 - temp_v6);
      param_2[6] = temp_v7;
      param_2[7] = temp_v7;
      return;
    }
    if (temp_v0 == '\x02') {
      temp_v9 = pfVar5[-1];
      temp_v8 = pfVar5[1];
      temp_v10 = pfVar5[-2];
      temp_v3 = -pfVar5[2];
      param_2[2] = temp_v6;
      param_2[3] = temp_v11;
      temp_v11 = temp_v11 - temp_v6;
      param_2[4] = temp_v8;
      param_2[5] = temp_v3;
      temp_v7 = 1.0f / temp_v11;
      temp_v8 = temp_v8 - temp_v10;
      param_2[6] = ((temp_v11 * -2.0f * temp_v3 - temp_v8 * 3.0f) - temp_v11 * -temp_v9) * temp_v7 * temp_v7;
      param_2[7] = (temp_v8 * 2.0f + temp_v11 * temp_v3 + temp_v11 * -temp_v9) * temp_v7 * temp_v7 * temp_v7;
      return;
    }
  }
  else {
    pfVar4 = pfVar5;
    if (*pfVar5 > in_s0) {
      do {
        pfVar5 = pfVar5 + -3;
      } while (in_s0 < *pfVar5);
    }
    else {
      do {
        pfVar5 = pfVar4;
        pfVar4 = pfVar5 + 3;
      } while (pfVar5[3] <= in_s0);
    }
    temp_v3 = *param_1;
    temp_v6 = *pfVar5;
    temp_v8 = pfVar5[3];
    *param_2 = romwright_u2f((unsigned int)((pfVar5 + 3)));
    temp_v0 = *(char *)(param_1 + 3);
    temp_v6 = temp_v6 + temp_v3 + temp_v11;
    temp_v11 = temp_v8 + temp_v3 + temp_v11;
    if (temp_v0 == '\0') {
      temp_v3 = pfVar5[1];
      param_2[2] = temp_v6;
      param_2[3] = temp_v11;
      param_2[4] = temp_v3;
      param_2[5] = temp_v7;
      param_2[6] = temp_v7;
      param_2[7] = temp_v7;
      return;
    }
    if (temp_v0 == '\x01') {
      temp_v3 = pfVar5[1];
      temp_v8 = pfVar5[4];
      param_2[2] = temp_v6;
      param_2[3] = temp_v11;
      param_2[4] = temp_v3;
      param_2[5] = (temp_v8 - temp_v3) / (temp_v11 - temp_v6);
      param_2[6] = temp_v7;
      param_2[7] = temp_v7;
      return;
    }
    if (temp_v0 == '\x02') {
      temp_v9 = pfVar5[1];
      temp_v3 = pfVar5[2];
      temp_v7 = pfVar5[4];
      temp_v8 = pfVar5[5];
      param_2[2] = temp_v6;
      param_2[3] = temp_v11;
      temp_v11 = temp_v11 - temp_v6;
      temp_v7 = temp_v9 - temp_v7;
      param_2[4] = temp_v9;
      param_2[5] = temp_v3;
      temp_v6 = 1.0f / temp_v11;
      param_2[6] = ((temp_v11 * -2.0f * temp_v3 - temp_v7 * 3.0f) - temp_v11 * temp_v8) * temp_v6 * temp_v6;
      param_2[7] = (temp_v7 * 2.0f + temp_v11 * temp_v3 + temp_v11 * temp_v8) * temp_v6 * temp_v6 * temp_v6;
      return;
    }
  }
  return;
}
