/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019cb50` (_code @ 0x19cb50, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0019cb50(float *param_1,float *param_2,float *param_3)

{
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  
  temp_v0 = *param_3;
  temp_v1 = param_3[1];
  temp_v2 = param_3[2];
  temp_v3 = *param_2;
  temp_v4 = param_2[4];
  temp_v7 = param_2[5];
  temp_v8 = param_2[1];
  temp_v5 = param_2[6];
  temp_v6 = param_2[2];
  param_1[2] = param_2[8] * temp_v0 + param_2[9] * temp_v1 + param_2[10] * temp_v2;
  *param_1 = temp_v3 * temp_v0 + temp_v8 * temp_v1 + temp_v6 * temp_v2;
  param_1[1] = temp_v4 * temp_v0 + temp_v7 * temp_v1 + temp_v5 * temp_v2;
  return;
}
