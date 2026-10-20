/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_math_ARMv6_MTX44MultAsm` (_code @ 0x2b6eb8, 0x15c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void nn_math_ARMv6_MTX44MultAsm(float *param_1,float *param_2,unsigned long long *param_3)

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
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  float temp_v29;
  float temp_v30;
  float temp_v31;
  
  temp_v16 = *param_2;
  temp_v24 = param_2[4];
  temp_v0 = (float)*param_3;
  temp_v2 = (float)((unsigned long long)*param_3 >> 0x20);
  temp_v4 = (float)param_3[1];
  temp_v6 = (float)((unsigned long long)param_3[1] >> 0x20);
  temp_v17 = param_2[8];
  temp_v25 = param_2[0xc];
  temp_v18 = param_2[1];
  temp_v26 = param_2[5];
  temp_v8 = (float)param_3[2];
  temp_v10 = (float)((unsigned long long)param_3[2] >> 0x20);
  temp_v12 = (float)param_3[3];
  temp_v14 = (float)((unsigned long long)param_3[3] >> 0x20);
  temp_v19 = param_2[9];
  temp_v27 = param_2[0xd];
  temp_v20 = param_2[2];
  temp_v28 = param_2[6];
  temp_v1 = (float)param_3[4];
  temp_v3 = (float)((unsigned long long)param_3[4] >> 0x20);
  temp_v5 = (float)param_3[5];
  temp_v7 = (float)((unsigned long long)param_3[5] >> 0x20);
  temp_v21 = param_2[10];
  temp_v29 = param_2[0xe];
  temp_v22 = param_2[3];
  temp_v30 = param_2[7];
  temp_v9 = (float)param_3[6];
  temp_v11 = (float)((unsigned long long)param_3[6] >> 0x20);
  temp_v13 = (float)param_3[7];
  temp_v15 = (float)((unsigned long long)param_3[7] >> 0x20);
  temp_v23 = param_2[0xb];
  temp_v31 = param_2[0xf];
  *param_1 = temp_v16 * temp_v0 + temp_v18 * temp_v8 + temp_v20 * temp_v1 + temp_v22 * temp_v9;
  param_1[1] = temp_v16 * temp_v2 + temp_v18 * temp_v10 + temp_v20 * temp_v3 + temp_v22 * temp_v11;
  param_1[2] = temp_v16 * temp_v4 + temp_v18 * temp_v12 + temp_v20 * temp_v5 + temp_v22 * temp_v13;
  param_1[3] = temp_v16 * temp_v6 + temp_v18 * temp_v14 + temp_v20 * temp_v7 + temp_v22 * temp_v15;
  param_1[4] = temp_v24 * temp_v0 + temp_v26 * temp_v8 + temp_v28 * temp_v1 + temp_v30 * temp_v9;
  param_1[5] = temp_v24 * temp_v2 + temp_v26 * temp_v10 + temp_v28 * temp_v3 + temp_v30 * temp_v11;
  param_1[6] = temp_v24 * temp_v4 + temp_v26 * temp_v12 + temp_v28 * temp_v5 + temp_v30 * temp_v13;
  param_1[7] = temp_v24 * temp_v6 + temp_v26 * temp_v14 + temp_v28 * temp_v7 + temp_v30 * temp_v15;
  param_1[8] = temp_v17 * temp_v0 + temp_v19 * temp_v8 + temp_v21 * temp_v1 + temp_v23 * temp_v9;
  param_1[9] = temp_v17 * temp_v2 + temp_v19 * temp_v10 + temp_v21 * temp_v3 + temp_v23 * temp_v11;
  param_1[10] = temp_v17 * temp_v4 + temp_v19 * temp_v12 + temp_v21 * temp_v5 + temp_v23 * temp_v13;
  param_1[0xb] = temp_v17 * temp_v6 + temp_v19 * temp_v14 + temp_v21 * temp_v7 + temp_v23 * temp_v15;
  param_1[0xc] = temp_v25 * temp_v0 + temp_v27 * temp_v8 + temp_v29 * temp_v1 + temp_v31 * temp_v9;
  param_1[0xd] = temp_v25 * temp_v2 + temp_v27 * temp_v10 + temp_v29 * temp_v3 + temp_v31 * temp_v11;
  param_1[0xe] = temp_v25 * temp_v4 + temp_v27 * temp_v12 + temp_v29 * temp_v5 + temp_v31 * temp_v13;
  param_1[0xf] = temp_v25 * temp_v6 + temp_v27 * temp_v14 + temp_v29 * temp_v7 + temp_v31 * temp_v15;
  return;
}

} /* extern "C" */
