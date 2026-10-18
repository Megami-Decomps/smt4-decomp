/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_math_ARMv6_MTX34MultAsm` (_code @ 0x199ea0, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void nn_math_ARMv6_MTX34MultAsm(float *param_1,float *param_2,float *param_3)

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
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  
  temp_v0 = param_2[3];
  temp_v1 = param_2[7];
  temp_v2 = param_2[0xb];
  temp_v3 = *param_3;
  temp_v5 = param_3[1];
  temp_v7 = param_3[2];
  temp_v9 = param_3[3];
  temp_v15 = *param_2;
  temp_v20 = param_2[4];
  temp_v16 = param_2[8];
  temp_v21 = param_2[1];
  temp_v4 = param_3[8];
  temp_v6 = param_3[9];
  temp_v8 = param_3[10];
  temp_v10 = param_3[0xb];
  temp_v17 = param_2[5];
  temp_v11 = (float)*(unsigned long long *)(param_3 + 4);
  temp_v12 = (float)((unsigned long long)*(unsigned long long *)(param_3 + 4) >> 0x20);
  temp_v13 = (float)*(unsigned long long *)(param_3 + 6);
  temp_v14 = (float)((unsigned long long)*(unsigned long long *)(param_3 + 6) >> 0x20);
  temp_v22 = param_2[9];
  temp_v18 = param_2[2];
  temp_v23 = param_2[6];
  temp_v19 = param_2[10];
  *param_1 = temp_v3 * temp_v15 + temp_v11 * temp_v21 + temp_v4 * temp_v18;
  param_1[1] = temp_v5 * temp_v15 + temp_v12 * temp_v21 + temp_v6 * temp_v18;
  param_1[2] = temp_v7 * temp_v15 + temp_v13 * temp_v21 + temp_v8 * temp_v18;
  param_1[3] = temp_v0 + temp_v9 * temp_v15 + temp_v14 * temp_v21 + temp_v10 * temp_v18;
  param_1[4] = temp_v3 * temp_v20 + temp_v11 * temp_v17 + temp_v4 * temp_v23;
  param_1[5] = temp_v5 * temp_v20 + temp_v12 * temp_v17 + temp_v6 * temp_v23;
  param_1[6] = temp_v7 * temp_v20 + temp_v13 * temp_v17 + temp_v8 * temp_v23;
  param_1[7] = temp_v1 + temp_v9 * temp_v20 + temp_v14 * temp_v17 + temp_v10 * temp_v23;
  param_1[8] = temp_v3 * temp_v16 + temp_v11 * temp_v22 + temp_v4 * temp_v19;
  param_1[9] = temp_v5 * temp_v16 + temp_v12 * temp_v22 + temp_v6 * temp_v19;
  param_1[10] = temp_v7 * temp_v16 + temp_v13 * temp_v22 + temp_v8 * temp_v19;
  param_1[0xb] = temp_v2 + temp_v9 * temp_v16 + temp_v14 * temp_v22 + temp_v10 * temp_v19;
  return;
}
