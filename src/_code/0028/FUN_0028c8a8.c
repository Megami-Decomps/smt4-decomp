/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028c8a8` (_code @ 0x28c8a8, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0028c8a8(int param_1,unsigned int param_2,unsigned int *param_3)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = *(int *)(param_1 + 0x2c);
  temp_v2 = *param_3;
  temp_v1 = param_3[2];
  *(unsigned int *)(temp_v0 + 0x68) = param_3[1];
  *(unsigned int *)(temp_v0 + 0x78) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x58) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x88) = *(unsigned int *)(temp_v0 + 0x88) | 0x800;
  return;
}
