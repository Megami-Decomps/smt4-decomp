/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d3d38` (_code @ 0x1d3d38, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_001d3d38(float *param_1,float *param_2,float *param_3)

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
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  
  temp_v0 = param_2[1];
  temp_v1 = param_2[2];
  temp_v2 = param_2[3];
  temp_v3 = param_2[4];
  temp_v4 = param_2[5];
  temp_v5 = param_2[6];
  temp_v6 = param_2[7];
  temp_v7 = param_2[8];
  temp_v8 = param_2[9];
  temp_v9 = param_2[10];
  temp_v10 = param_2[0xb];
  temp_v11 = *param_3;
  temp_v12 = param_3[1];
  temp_v13 = param_3[2];
  *param_1 = *param_2 * temp_v11;
  param_1[1] = temp_v0 * temp_v12;
  param_1[2] = temp_v1 * temp_v13;
  param_1[3] = temp_v2;
  param_1[4] = temp_v3 * temp_v11;
  param_1[5] = temp_v4 * temp_v12;
  param_1[6] = temp_v5 * temp_v13;
  param_1[7] = temp_v6;
  param_1[8] = temp_v7 * temp_v11;
  param_1[9] = temp_v8 * temp_v12;
  param_1[10] = temp_v9 * temp_v13;
  param_1[0xb] = temp_v10;
  return;
}
