/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a49d0` (_code @ 0x2a49d0, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_002a49d0(unsigned int *param_1)

{
  *param_1 = 0;
  *(unsigned char *)(param_1 + 3) = 1;
  param_1[1] = 0x40c80000;
  param_1[2] = 0;
  return;
}
