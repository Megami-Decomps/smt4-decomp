/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030dce8` (_code @ 0x30dce8, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_0030dce8(int param_1,unsigned int param_2)

{
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = temp_v0 + 1;
  *(char *)(*(int *)(param_1 + 8) + temp_v0) = (char)((unsigned int)param_2 >> 8);
  temp_v0 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = temp_v0 + 1;
  *(char *)(*(int *)(param_1 + 8) + temp_v0) = (char)param_2;
  return;
}

} /* extern "C" */
