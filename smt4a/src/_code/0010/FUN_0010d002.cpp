/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010d002` (_code @ 0x10d002, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_0010d002(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3)

{
  *param_1 = *param_2;
  param_1[1] = *param_3;
  *(unsigned char *)(param_1 + 2) = 1;
  return;
}

} /* extern "C" */
