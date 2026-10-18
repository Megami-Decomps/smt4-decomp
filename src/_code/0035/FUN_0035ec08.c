/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035ec08` (_code @ 0x35ec08, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0035ec08(int param_1,unsigned int param_2,unsigned int param_3)

{
  *(unsigned int *)(param_1 + 8) = 0;
  *(int *)param_1 = param_1;
  *(unsigned int *)(param_1 + 0xc) = param_2;
  *(unsigned int *)(param_1 + 0x10) = param_3;
  *(int *)(param_1 + 4) = param_1;
  *(unsigned int *)(param_1 + 8) = param_3;
  return;
}
