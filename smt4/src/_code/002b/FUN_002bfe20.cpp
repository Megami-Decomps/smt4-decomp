/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bfe20` (_code @ 0x2bfe20, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_002bfe20(unsigned int *param_1,int param_2)

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
  
  if ((unsigned int *)(param_2 + 0x530) == param_1) {
    return;
  }
  temp_v0 = *(unsigned int *)(param_2 + 0x534);
  temp_v1 = *(unsigned int *)(param_2 + 0x538);
  temp_v2 = *(unsigned int *)(param_2 + 0x53c);
  temp_v3 = *(unsigned int *)(param_2 + 0x540);
  temp_v4 = *(unsigned int *)(param_2 + 0x544);
  temp_v5 = *(unsigned int *)(param_2 + 0x548);
  temp_v6 = *(unsigned int *)(param_2 + 0x54c);
  temp_v7 = *(unsigned int *)(param_2 + 0x550);
  temp_v8 = *(unsigned int *)(param_2 + 0x554);
  temp_v9 = *(unsigned int *)(param_2 + 0x558);
  temp_v10 = *(unsigned int *)(param_2 + 0x55c);
  temp_v11 = *(unsigned int *)(param_2 + 0x560);
  temp_v12 = *(unsigned int *)(param_2 + 0x564);
  temp_v13 = *(unsigned int *)(param_2 + 0x568);
  temp_v14 = *(unsigned int *)(param_2 + 0x56c);
  *param_1 = *(unsigned int *)(param_2 + 0x530);
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
