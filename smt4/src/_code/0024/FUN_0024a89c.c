/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024a89c` (_code @ 0x24a89c, 0x1d0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */


unsigned int FUN_0024a89c(float *param_1,int param_2,float *param_3,float *param_4,float *param_5)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  
  temp_v5 = *param_4 - *param_3;
  temp_v6 = param_4[2] - param_3[2];
  temp_v4 = *param_1 - *param_4;
  temp_v3 = param_1[2] - param_4[2];
  temp_v2 = temp_v6 * temp_v4 - temp_v5 * temp_v3;
  temp_v4 = temp_v5 * (param_1[1] - param_4[1]) - (param_4[1] - param_3[1]) * temp_v4;
  temp_v3 = (param_4[1] - param_3[1]) * temp_v3 - temp_v6 * (param_1[1] - param_4[1]);
  temp_v2 = temp_v2 * (1.0f / romwright_sqrt_4(temp_v3 * temp_v3 + temp_v2 * temp_v2 + temp_v4 * temp_v4));
  temp_v3 = (param_5[2] - param_4[2]) * (*param_1 - *param_5) -
          (*param_5 - *param_4) * (param_1[2] - param_5[2]);
  temp_v4 = (*param_5 - *param_4) * (param_1[1] - param_5[1]) -
          (param_5[1] - param_4[1]) * (*param_1 - *param_5);
  temp_v5 = (param_5[1] - param_4[1]) * (param_1[2] - param_5[2]) -
          (param_5[2] - param_4[2]) * (param_1[1] - param_5[1]);
  temp_v6 = param_3[1] - param_5[1];
  temp_v3 = temp_v3 * (1.0f / romwright_sqrt_4(temp_v5 * temp_v5 + temp_v3 * temp_v3 + temp_v4 * temp_v4));
  temp_v7 = param_1[1] - param_3[1];
  temp_v5 = (param_3[2] - param_5[2]) * (*param_1 - *param_3) -
          (*param_3 - *param_5) * (param_1[2] - param_3[2]);
  temp_v4 = (*param_3 - *param_5) * temp_v7 - temp_v6 * (*param_1 - *param_3);
  temp_v7 = temp_v6 * (param_1[2] - param_3[2]) - (param_3[2] - param_5[2]) * temp_v7;
  temp_v6 = *(float *)(param_2 + 4);
  temp_v5 = temp_v5 * (1.0f / romwright_sqrt_4(temp_v7 * temp_v7 + temp_v5 * temp_v5 + temp_v4 * temp_v4));
  temp_v0 = temp_v6 < 0.0f;
  temp_v1 = temp_v6 == 0.0f;
  temp_v4 = temp_v6;
  if (!temp_v1 && !temp_v0) {
    temp_v0 = temp_v2 < 0.0f;
    temp_v1 = temp_v2 == 0.0f;
    temp_v4 = temp_v2;
  }
  if (!temp_v1 && temp_v0 == NAN(temp_v4)) {
    temp_v0 = temp_v3 < 0.0f;
    temp_v1 = temp_v3 == 0.0f;
    temp_v4 = temp_v3;
    if (!temp_v1 && !temp_v0) {
      temp_v0 = temp_v5 < 0.0f;
      temp_v1 = temp_v5 == 0.0f;
      temp_v4 = temp_v5;
    }
    if (!temp_v1 && temp_v0 == NAN(temp_v4)) {
      return 1;
    }
  }
  if ((temp_v6 < 0.0f && temp_v2 < 0.0f) && (temp_v3 < 0.0f && temp_v5 < 0.0f)) {
    return 1;
  }
  return 0;
}
