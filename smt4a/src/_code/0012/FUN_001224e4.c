/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001224e4` (_code @ 0x1224e4, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_001224e4(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 0xc) = param_2 >> 3;
  *(unsigned int *)(param_1 + 0x10) = 7 - (param_2 & 7);
  return;
}
