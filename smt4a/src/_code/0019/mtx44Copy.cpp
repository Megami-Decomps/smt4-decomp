/* NON_MATCHING: romwright 0.5.0 decompilation of `mtx44Copy` (_code @ 0x19a0e8, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void mtx44Copy(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  
  if (param_2 == param_1) {
    return;
  }
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
  temp_v11 = param_2[0xc];
  temp_v12 = param_2[0xd];
  temp_v13 = param_2[0xe];
  temp_v14 = param_2[0xf];
  *param_1 = *param_2;
  param_1[1] = temp_v0;
  param_1[2] = temp_v1;
  param_1[3] = temp_v2;
  param_1[4] = temp_v3;
  param_1[5] = temp_v4;
  param_1[6] = temp_v5;
  param_1[7] = temp_v6;
  param_1[8] = temp_v7;
  param_1[9] = temp_v8;
  param_1[10] = temp_v9;
  param_1[0xb] = temp_v10;
  param_1[0xc] = temp_v11;
  param_1[0xd] = temp_v12;
  param_1[0xe] = temp_v13;
  param_1[0xf] = temp_v14;
  return;
}

} /* extern "C" */
