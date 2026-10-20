/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018ab54` (_code @ 0x18ab54, 0x35c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_2_stack;


unsigned char FUN_0018ab54(float *param_1,float *param_2)

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
  float temp_v32;
  
  temp_v11 = param_2[5];
  temp_v31 = param_2[10];
  temp_v8 = param_2[4];
  temp_v14 = param_2[0xb];
  temp_v9 = param_2[6];
  temp_v26 = param_2[0xf];
  temp_v12 = param_2[7];
  temp_v15 = param_2[8];
  temp_v13 = param_2[9];
  temp_v10 = param_2[3];
  temp_v30 = temp_v8 * temp_v31;
  temp_v2 = param_2[0xc];
  temp_v3 = param_2[0xd];
  temp_v4 = param_2[0xe];
  temp_v5 = *param_2;
  temp_v6 = param_2[1];
  temp_v7 = param_2[2];
  temp_v16 = temp_v11 * temp_v14;
  temp_v19 = temp_v11 * temp_v15;
  temp_v0 = temp_v12 * temp_v31;
  temp_v17 = temp_v12 * temp_v15;
  temp_v21 = temp_v9 * temp_v13;
  temp_v22 = (((((temp_v11 * temp_v31 * temp_v26 + temp_v9 * temp_v14 * temp_v3 + temp_v12 * temp_v13 * temp_v4) *
               temp_v5 + temp_v6 * (temp_v8 * temp_v14 * temp_v4 + temp_v9 * temp_v15 * temp_v26 + temp_v0 * temp_v2) +
               temp_v7 * (temp_v8 * temp_v13 * temp_v26 + temp_v16 * temp_v2 + temp_v17 * temp_v3) +
              temp_v10 * (temp_v30 * temp_v3 + temp_v19 * temp_v4 + temp_v21 * temp_v2)) -
             temp_v5 * (temp_v16 * temp_v4 + temp_v21 * temp_v26 + temp_v0 * temp_v3)) -
            temp_v6 * (temp_v30 * temp_v26 + temp_v9 * temp_v14 * temp_v2 + temp_v17 * temp_v4)) -
           temp_v7 * (temp_v8 * temp_v14 * temp_v3 + temp_v19 * temp_v26 + temp_v12 * temp_v13 * temp_v2)) -
           temp_v10 * (temp_v8 * temp_v13 * temp_v4 + temp_v11 * temp_v31 * temp_v2 + temp_v9 * temp_v15 * temp_v3);
  if (temp_v22 != 0.0f) {
    temp_v28 = temp_v12 * temp_v3 - temp_v11 * temp_v26;
    temp_v25 = temp_v13 * temp_v26 - temp_v14 * temp_v3;
    temp_v29 = temp_v15 * temp_v26 - temp_v14 * temp_v2;
    temp_v23 = temp_v8 * temp_v26 - temp_v12 * temp_v2;
    temp_v32 = temp_v31 * temp_v3 - temp_v13 * temp_v4;
    temp_v27 = temp_v31 * temp_v26 - temp_v14 * temp_v4;
    temp_v18 = temp_v31 * temp_v2 - temp_v15 * temp_v4;
    temp_v1 = 1.0f / temp_v22;
    temp_v24 = temp_v8 * temp_v3 - temp_v11 * temp_v2;
    temp_v20 = temp_v9 * temp_v26 - temp_v12 * temp_v4;
    temp_v26 = temp_v13 * temp_v2 - temp_v15 * temp_v3;
    temp_v3 = temp_v11 * temp_v4 - temp_v9 * temp_v3;
    temp_v2 = temp_v9 * temp_v2 - temp_v8 * temp_v4;
    temp_v21 = temp_v21 - temp_v11 * temp_v31;
    temp_v17 = temp_v17 - temp_v8 * temp_v14;
    temp_v0 = temp_v0 - temp_v9 * temp_v14;
    temp_v19 = temp_v19 - temp_v8 * temp_v13;
    temp_v16 = temp_v16 - temp_v12 * temp_v13;
    temp_v30 = temp_v30 - temp_v9 * temp_v15;
    param_1[2] = (temp_v6 * temp_v20 + temp_v7 * temp_v28 + temp_v10 * temp_v3) * temp_v1;
    param_1[5] = ((temp_v5 * temp_v27 - temp_v7 * temp_v29) - temp_v10 * temp_v18) * temp_v1;
    param_1[6] = ((temp_v7 * temp_v23 + temp_v10 * temp_v2) - temp_v5 * temp_v20) * temp_v1;
    *param_1 = ((temp_v11 * temp_v27 - temp_v9 * temp_v25) - temp_v12 * temp_v32) * temp_v1;
    param_1[1] = ((temp_v7 * temp_v25 + temp_v10 * temp_v32) - temp_v6 * temp_v27) * temp_v1;
    param_1[4] = ((temp_v9 * temp_v29 + temp_v12 * temp_v18) - temp_v8 * temp_v27) * temp_v1;
    param_1[8] = ((temp_v8 * temp_v25 - temp_v11 * temp_v29) - temp_v12 * temp_v26) * temp_v1;
    param_1[0xe] = ((-(temp_v7 * temp_v24) - temp_v5 * temp_v3) - temp_v6 * temp_v2) * temp_v1;
    param_1[3] = (temp_v6 * temp_v0 + temp_v7 * temp_v16 + temp_v10 * temp_v21) * temp_v1;
    param_1[7] = ((temp_v7 * temp_v17 + temp_v10 * temp_v30) - temp_v5 * temp_v0) * temp_v1;
    param_1[0xb] = ((temp_v10 * temp_v19 - temp_v5 * temp_v16) - temp_v6 * temp_v17) * temp_v1;
    param_1[0xf] = ((-(temp_v7 * temp_v19) - temp_v5 * temp_v21) - temp_v6 * temp_v30) * temp_v1;
    param_1[9] = ((temp_v6 * temp_v29 + temp_v10 * temp_v26) - temp_v5 * temp_v25) * temp_v1;
    param_1[10] = ((temp_v10 * temp_v24 - temp_v5 * temp_v28) - temp_v6 * temp_v23) * temp_v1;
    param_1[0xc] = ((temp_v8 * temp_v32 - temp_v11 * temp_v18) + temp_v9 * temp_v26) * temp_v1;
    param_1[0xd] = ((temp_v6 * temp_v18 - temp_v7 * temp_v26) - temp_v5 * temp_v32) * temp_v1;
  }
  return temp_v22 != 0.0f;
}

} /* extern "C" */
