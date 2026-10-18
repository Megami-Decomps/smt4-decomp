/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023e388` (_code @ 0x23e388, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0023e388(unsigned int *param_1,float *param_2,unsigned int *param_3)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  float temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  float temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  
  temp_v0 = param_3[1];
  temp_v1 = param_3[2];
  temp_v2 = (float)param_3[3];
  temp_v3 = param_3[4];
  temp_v4 = param_3[5];
  temp_v5 = param_3[6];
  temp_v6 = (float)param_3[7];
  temp_v7 = param_3[8];
  temp_v8 = param_3[9];
  temp_v9 = param_3[10];
  temp_v10 = (float)param_3[0xb];
  temp_v11 = *param_2;
  temp_v12 = param_2[1];
  temp_v13 = param_2[2];
  *param_1 = *param_3;
  param_1[1] = temp_v0;
  param_1[2] = temp_v1;
  param_1[3] = temp_v2 + temp_v11;
  param_1[4] = temp_v3;
  param_1[5] = temp_v4;
  param_1[6] = temp_v5;
  param_1[7] = temp_v6 + temp_v12;
  param_1[8] = temp_v7;
  param_1[9] = temp_v8;
  param_1[10] = temp_v9;
  param_1[0xb] = temp_v10 + temp_v13;
  return;
}
