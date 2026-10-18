/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fd790` (_code @ 0x3fd790, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_003fd790(int param_1)

{
  *(unsigned int *)(param_1 + 4) = *(unsigned int *)(param_1 + 4) & 0xfffffffb;
  *(unsigned int *)(param_1 + 0x204) = 0;
  *(unsigned short *)(param_1 + 0x208) = 0xffff;
  return;
}
