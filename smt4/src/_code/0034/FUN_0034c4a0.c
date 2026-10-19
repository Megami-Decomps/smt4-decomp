/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034c4a0` (_code @ 0x34c4a0, 0xf0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0034c4a0(int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  float *pfVar5;
  int temp_v4;
  unsigned int *puVar7;
  unsigned int temp_v5;
  int temp_v6;
  float temp_v7;
  
  temp_v3 = 0;
  do {
    temp_v6 = temp_v3 * 0x28 + 0x10;
    temp_v4 = temp_v3 * 0x28 + 0x14;
    pfVar5 = (float *)(*(int *)(param_1 + 4) + temp_v3 * 0x50);
    temp_v7 = *(float *)(*(int *)(param_1 + 0x1c) + temp_v4);
    temp_v0 = temp_v3 * 0x50;
    temp_v1 = temp_v3 * 0x50;
    temp_v2 = temp_v3 * 0x50;
    *pfVar5 = -*(float *)(*(int *)(param_1 + 0x1c) + temp_v6);
    pfVar5[1] = temp_v7;
    pfVar5[2] = 0.0f;
    temp_v3 = temp_v3 + 1;
    temp_v7 = *(float *)(*(int *)(param_1 + 0x1c) + temp_v4);
    pfVar5 = (float *)(temp_v0 + 0x14 + *(int *)(param_1 + 4));
    *pfVar5 = -*(float *)(*(int *)(param_1 + 0x1c) + temp_v6);
    pfVar5[1] = -temp_v7;
    pfVar5[2] = 0.0f;
    puVar7 = (unsigned int *)(*(int *)(param_1 + 4) + temp_v1 + 0x28);
    temp_v5 = *(unsigned int *)(*(int *)(param_1 + 0x1c) + temp_v6);
    puVar7[1] = *(unsigned int *)(*(int *)(param_1 + 0x1c) + temp_v4);
    *puVar7 = temp_v5;
    puVar7[2] = 0;
    temp_v7 = *(float *)(temp_v4 + *(int *)(param_1 + 0x1c));
    puVar7 = (unsigned int *)(temp_v2 + 0x3c + *(int *)(param_1 + 4));
    *puVar7 = *(unsigned int *)(*(int *)(param_1 + 0x1c) + temp_v6);
    *(float *)&puVar7[1] = -temp_v7;
    puVar7[2] = 0;
  } while (temp_v3 < 2);
  return;
}
