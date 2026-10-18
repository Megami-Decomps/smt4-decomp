/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00124b88` (_code @ 0x124b88, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_00124b88(int *param_1,int *param_2)

{
  int temp_v0;
  
  temp_v0 = *param_2;
  *param_1 = temp_v0;
  *(int *)(temp_v0 + 0x1c) = *(int *)(temp_v0 + 0x1c) + 1;
  return;
}
