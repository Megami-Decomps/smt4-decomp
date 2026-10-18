/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f7394` (_code @ 0x3f7394, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_003f7394(unsigned int *param_1)

{
  *param_1 = 0;
  *(unsigned char *)(param_1 + 1) = 1;
  param_1[2] = (unsigned int)(param_1 + 2);
  param_1[4] = 0;
  param_1[3] = (unsigned int)(param_1 + 2);
  return;
}
