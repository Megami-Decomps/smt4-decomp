/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034791c` (_code @ 0x34791c, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0034791c(int param_1)

{
  float *pfVar1;
  int temp_v0;
  float temp_v1;
  unsigned int temp_v2;
  
  pfVar1 = *(float **)(param_1 + 4);
  temp_v1 = *(float *)(*(int *)(param_1 + 0x60) + 0x14);
  *pfVar1 = -*(float *)(*(int *)(param_1 + 0x60) + 0x10);
  pfVar1[1] = temp_v1;
  pfVar1[2] = 0.0f;
  temp_v0 = *(int *)(param_1 + 4);
  temp_v1 = *(float *)(*(int *)(param_1 + 0x60) + 0x14);
  *(float *)(temp_v0 + 0x14) = -*(float *)(*(int *)(param_1 + 0x60) + 0x10);
  *(float *)(temp_v0 + 0x18) = -temp_v1;
  *(unsigned int *)(temp_v0 + 0x1c) = 0;
  temp_v0 = *(int *)(param_1 + 4);
  temp_v2 = *(unsigned int *)(*(int *)(param_1 + 0x60) + 0x14);
  *(unsigned int *)(temp_v0 + 0x28) = *(unsigned int *)(*(int *)(param_1 + 0x60) + 0x10);
  *(unsigned int *)(temp_v0 + 0x2c) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x30) = 0;
  temp_v0 = *(int *)(param_1 + 4);
  temp_v1 = *(float *)(*(int *)(param_1 + 0x60) + 0x14);
  *(unsigned int *)(temp_v0 + 0x3c) = *(unsigned int *)(*(int *)(param_1 + 0x60) + 0x10);
  *(float *)(temp_v0 + 0x40) = -temp_v1;
  *(unsigned int *)(temp_v0 + 0x44) = 0;
  return;
}
