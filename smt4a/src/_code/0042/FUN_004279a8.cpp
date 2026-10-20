/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004279a8` (_code @ 0x4279a8, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_004279a8(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  *param_1 = param_2;
  param_1[3] = param_4;
  param_1[1] = 0;
  param_1[2] = param_3;
  return;
}

} /* extern "C" */
