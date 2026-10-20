/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00111644` (_code @ 0x111644, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_00111644(int param_1,unsigned int param_2,unsigned int *param_3)

{
  *(unsigned int *)(param_1 + 0x48) = param_2;
  *(unsigned int *)(param_1 + 0x4c) = *param_3;
  return;
}

} /* extern "C" */
