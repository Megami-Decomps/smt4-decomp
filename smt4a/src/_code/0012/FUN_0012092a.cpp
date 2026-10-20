/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012092a` (_code @ 0x12092a, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_0012092a(int param_1,int param_2)

{
  int temp_v0;
  
  temp_v0 = param_2 - (*(unsigned int *)(param_1 + 4) >> 3);
  *(unsigned int *)(param_1 + 4) = *(unsigned int *)(param_1 + 4) + temp_v0;
  if (temp_v0 < 0) {
    temp_v0 = -temp_v0;
  }
  *(unsigned int *)(param_1 + 8) = *(unsigned int *)(param_1 + 8) + (temp_v0 - (*(unsigned int *)(param_1 + 8) >> 2));
  *(int *)(param_1 + 0xc) = param_2;
  return;
}

} /* extern "C" */
