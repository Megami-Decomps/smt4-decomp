/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004da914` (_code @ 0x4da914, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_004da914(int param_1,unsigned char param_2,unsigned int param_3)

{
  *(unsigned char *)(param_1 + 0x150) = param_2;
  *(unsigned int *)(param_1 + 0x154) = param_3;
  return;
}
