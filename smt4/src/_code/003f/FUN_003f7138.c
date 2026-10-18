/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f7138` (_code @ 0x3f7138, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_003f7138(unsigned int *param_1,unsigned int *param_2,unsigned int param_3)

{
  *(unsigned char *)(param_1 + 1) = 3;
  param_1[4] = param_3;
  *param_1 = *param_2;
  return;
}
