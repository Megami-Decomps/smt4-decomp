/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00482428` (_code @ 0x482428, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_00482428(int param_1,unsigned int *param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *param_2;
  temp_v1 = param_2[1];
  *(unsigned int *)(param_1 + 0x4c) = param_2[2];
  *(unsigned int *)(param_1 + 0x44) = temp_v0;
  *(unsigned int *)(param_1 + 0x48) = temp_v1;
  return;
}

} /* extern "C" */
