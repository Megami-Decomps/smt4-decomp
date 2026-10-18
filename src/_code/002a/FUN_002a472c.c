/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a472c` (_code @ 0x2a472c, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_002a472c(unsigned int *param_1)

{
  *param_1 = 0;
  *(unsigned char *)(param_1 + 3) = 1;
  param_1[1] = 0x40c80000;
  param_1[2] = 0;
  return;
}
