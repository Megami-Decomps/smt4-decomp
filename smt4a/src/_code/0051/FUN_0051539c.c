/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0051539c` (_code @ 0x51539c, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0051539c(unsigned int *param_1,unsigned int *param_2,unsigned int param_3)

{
  *(unsigned char *)(param_1 + 1) = 3;
  param_1[4] = param_3;
  *param_1 = *param_2;
  return;
}
