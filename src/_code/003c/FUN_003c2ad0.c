/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c2ad0` (_code @ 0x3c2ad0, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_003c2ad0(unsigned char *param_1,unsigned char param_2)

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
