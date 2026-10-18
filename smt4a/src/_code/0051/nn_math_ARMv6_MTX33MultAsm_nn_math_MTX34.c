/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_math_ARMv6_MTX33MultAsm_nn_math_MTX34` (_code @ 0x515668, 0x174 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


/* WARNING: Removing unreachable block (ram,0x00515680) */

void nn_math_ARMv6_MTX33MultAsm_nn_math_MTX34(float *param_1,unsigned long long *param_2,float *param_3)

{
/* irregular: 1 native warning(s); review required */
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
  
  temp_v0 = *param_3;
  temp_v1 = param_3[1];
  temp_v2 = param_3[2];
  temp_v11 = *(float *)(param_2 + 1);
  temp_v3 = param_3[4];
  temp_v4 = param_3[5];
  temp_v5 = param_3[6];
  temp_v12 = *(float *)(param_2 + 2);
  temp_v6 = param_3[8];
  temp_v17 = *(float *)(param_2 + 5);
  temp_v9 = (float)*param_2;
  temp_v15 = (float)param_2[4];
  temp_v10 = (float)((unsigned long long)*param_2 >> 0x20);
  temp_v13 = (float)*(unsigned long long *)((int)param_2 + 0x14);
  temp_v16 = (float)((unsigned long long)param_2[4] >> 0x20);
  temp_v7 = (float)*(unsigned long long *)(param_3 + 9);
  temp_v8 = (float)((unsigned long long)*(unsigned long long *)(param_3 + 9) >> 0x20);
  temp_v14 = (float)((unsigned long long)*(unsigned long long *)((int)param_2 + 0x14) >> 0x20);
  *param_1 = temp_v0 * temp_v9 + temp_v3 * temp_v10 + temp_v6 * temp_v11;
  param_1[1] = temp_v1 * temp_v9 + temp_v4 * temp_v10 + temp_v7 * temp_v11;
  param_1[2] = temp_v2 * temp_v9 + temp_v5 * temp_v10 + temp_v8 * temp_v11;
  param_1[4] = temp_v0 * temp_v12 + temp_v3 * temp_v13 + temp_v6 * temp_v14;
  param_1[5] = temp_v1 * temp_v12 + temp_v4 * temp_v13 + temp_v7 * temp_v14;
  param_1[6] = temp_v2 * temp_v12 + temp_v5 * temp_v13 + temp_v8 * temp_v14;
  param_1[8] = temp_v0 * temp_v15 + temp_v3 * temp_v16 + temp_v6 * temp_v17;
  param_1[9] = temp_v1 * temp_v15 + temp_v4 * temp_v16 + temp_v7 * temp_v17;
  param_1[10] = temp_v2 * temp_v15 + temp_v5 * temp_v16 + temp_v8 * temp_v17;
  return;
}
