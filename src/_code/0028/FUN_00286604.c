/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00286604` (_code @ 0x286604, 0xf4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_00286604(float *param_1,float *param_2)

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
  float temp_v9;
  
  temp_v0 = *param_2;
  temp_v1 = param_2[1];
  temp_v2 = param_2[2];
  temp_v3 = param_2[4];
  temp_v4 = param_2[5];
  temp_v5 = param_2[6];
  temp_v6 = param_2[8];
  temp_v7 = param_2[9];
  temp_v8 = param_2[10];
  temp_v9 = (temp_v0 * temp_v4 * temp_v8 - temp_v6 * temp_v4 * temp_v2) +
           (temp_v1 * temp_v5 * temp_v6 - temp_v3 * temp_v1 * temp_v8) +
           (temp_v2 * temp_v3 * temp_v7 - temp_v0 * temp_v7 * temp_v5);
  if (temp_v9 != -0.0f && temp_v9 != 0.0f) {
    temp_v9 = 1.0f / temp_v9;
    *param_1 = (temp_v4 * temp_v8 - temp_v7 * temp_v5) * temp_v9;
    param_1[1] = -((temp_v3 * temp_v8 - temp_v6 * temp_v5) * temp_v9);
    param_1[2] = (temp_v3 * temp_v7 - temp_v6 * temp_v4) * temp_v9;
    param_1[3] = 0.0f;
    param_1[4] = -((temp_v1 * temp_v8 - temp_v7 * temp_v2) * temp_v9);
    param_1[5] = (temp_v0 * temp_v8 - temp_v6 * temp_v2) * temp_v9;
    param_1[6] = -((temp_v0 * temp_v7 - temp_v6 * temp_v1) * temp_v9);
    param_1[7] = 0.0f;
    param_1[8] = (temp_v1 * temp_v5 - temp_v4 * temp_v2) * temp_v9;
    param_1[9] = -((temp_v0 * temp_v5 - temp_v3 * temp_v2) * temp_v9);
    param_1[10] = (temp_v0 * temp_v4 - temp_v3 * temp_v1) * temp_v9;
    param_1[0xb] = 0.0f;
    return 1;
  }
  return 0;
}
