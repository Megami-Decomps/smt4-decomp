/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023296c` (_code @ 0x23296c, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0023296c(int param_1,unsigned int *param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *param_2;
  temp_v1 = param_2[1];
  *(unsigned int *)(param_1 + 0x54) = param_2[2];
  *(unsigned int *)(param_1 + 0x4c) = temp_v0;
  *(unsigned int *)(param_1 + 0x50) = temp_v1;
  return;
}
