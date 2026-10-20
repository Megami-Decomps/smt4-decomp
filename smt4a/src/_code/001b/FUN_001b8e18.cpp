/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b8e18` (_code @ 0x1b8e18, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_001b8e18(unsigned int *param_1)

{
  *param_1 = 0;
  param_1[1] = 0x40c80000;
  param_1[2] = 0;
  *(unsigned char *)(param_1 + 3) = 1;
  *(unsigned char *)((int)param_1 + 0xd) = 0;
  *(unsigned char *)((int)param_1 + 0xe) = 0;
  return;
}

} /* extern "C" */
