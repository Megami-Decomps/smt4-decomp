/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023adf4` (_code @ 0x23adf4, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_0023adf4(int param_1,unsigned int param_2,unsigned int *param_3)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = *param_3;
  temp_v2 = param_3[1];
  temp_v0 = *(int *)(param_1 + 0x2c);
  *(unsigned int *)(temp_v0 + 0x84) = param_3[2];
  *(unsigned int *)(temp_v0 + 0x7c) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x80) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x88) = *(unsigned int *)(temp_v0 + 0x88) | 0x800;
  return;
}

} /* extern "C" */
