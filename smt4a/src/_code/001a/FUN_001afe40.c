/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001afe40` (_code @ 0x1afe40, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_001afe40(float *param_1,float *param_2,int param_3)

{
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  
  temp_v0 = *param_2;
  temp_v1 = param_2[1];
  temp_v3 = param_2[2];
  temp_v2 = param_2[3];
  temp_v4 = 2.0f / (temp_v0 * temp_v0 + temp_v1 * temp_v1 + temp_v3 * temp_v3 + temp_v2 * temp_v2);
  temp_v6 = temp_v1 * temp_v4;
  temp_v5 = temp_v3 * temp_v4;
  temp_v7 = temp_v0 * temp_v0 * temp_v4;
  temp_v4 = temp_v2 * temp_v0 * temp_v4;
  if (param_3 != 0) {
    param_1[3] = 0.0f;
    param_1[7] = 0.0f;
    param_1[0xb] = 0.0f;
  }
  *param_1 = 1.0f - (temp_v1 * temp_v6 + temp_v3 * temp_v5);
  param_1[4] = temp_v0 * temp_v6 + temp_v2 * temp_v5;
  param_1[5] = 1.0f - (temp_v7 + temp_v3 * temp_v5);
  param_1[6] = temp_v1 * temp_v5 - temp_v4;
  param_1[8] = temp_v0 * temp_v5 - temp_v2 * temp_v6;
  param_1[9] = temp_v1 * temp_v5 + temp_v4;
  param_1[10] = 1.0f - (temp_v7 + temp_v1 * temp_v6);
  param_1[1] = temp_v0 * temp_v6 - temp_v2 * temp_v5;
  param_1[2] = temp_v0 * temp_v5 + temp_v2 * temp_v6;
  return;
}
