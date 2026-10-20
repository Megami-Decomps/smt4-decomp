/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00115472` (_code @ 0x115472, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_00115472(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 8) = *(int *)(param_2 + 0x10) + *(int *)(param_1 + 8);
  *(int *)(param_1 + 0xc) = *(int *)(param_3 + 0x10) + *(int *)(param_1 + 0xc);
  return;
}

} /* extern "C" */
