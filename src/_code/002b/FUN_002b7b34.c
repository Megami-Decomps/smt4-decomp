/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b7b34` (_code @ 0x2b7b34, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_002b7b34(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  temp_v0 = param_2[4];
  temp_v1 = param_2[8];
  temp_v2 = param_2[1];
  temp_v3 = param_2[5];
  temp_v4 = param_2[9];
  temp_v5 = param_2[2];
  temp_v6 = param_2[6];
  temp_v7 = param_2[10];
  *param_1 = *param_2;
  param_1[1] = temp_v0;
  param_1[2] = temp_v1;
  param_1[3] = 0;
  param_1[4] = temp_v2;
  param_1[5] = temp_v3;
  param_1[6] = temp_v4;
  param_1[7] = 0;
  param_1[8] = temp_v5;
  param_1[9] = temp_v6;
  param_1[10] = temp_v7;
  param_1[0xb] = 0;
  return;
}
