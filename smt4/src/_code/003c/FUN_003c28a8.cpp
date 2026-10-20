/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c28a8` (_code @ 0x3c28a8, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_003c28a8(unsigned char *param_1,unsigned char param_2)

{
  if (*(int *)(param_1 + 4) != 1) {
    param_1[10] = param_2;
    param_1[0xb] = param_2;
    *(unsigned int *)(param_1 + 4) = 1;
    param_1[9] = 0;
    *param_1 = *param_1 | 1;
  }
  return;
}

} /* extern "C" */
