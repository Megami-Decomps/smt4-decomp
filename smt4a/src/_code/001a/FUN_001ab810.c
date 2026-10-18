/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ab810` (_code @ 0x1ab810, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_001ab810(int param_1,unsigned int *param_2)

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
  
  if (param_2 == (unsigned int *)(param_1 + 0x1c0)) {
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
  *(unsigned int *)(param_1 + 0x1c0) = *param_2;
  *(unsigned int *)(param_1 + 0x1c4) = temp_v0;
  *(unsigned int *)(param_1 + 0x1c8) = temp_v1;
  *(unsigned int *)(param_1 + 0x1cc) = temp_v2;
  *(unsigned int *)(param_1 + 0x1d0) = temp_v3;
  *(unsigned int *)(param_1 + 0x1d4) = temp_v4;
  *(unsigned int *)(param_1 + 0x1d8) = temp_v5;
  *(unsigned int *)(param_1 + 0x1dc) = temp_v6;
  *(unsigned int *)(param_1 + 0x1e0) = temp_v7;
  *(unsigned int *)(param_1 + 0x1e4) = temp_v8;
  *(unsigned int *)(param_1 + 0x1e8) = temp_v9;
  *(unsigned int *)(param_1 + 0x1ec) = temp_v10;
  return;
}
