/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f99fc` (_code @ 0x4f99fc, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_004f99fc(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 0x33a0) = param_2;
  *(unsigned int *)(param_1 + 0x33a4) = 0;
  *(unsigned int *)(param_1 + 0x339c) = (*(unsigned int *)(param_1 + 0x339c) & 0xffffff1f) | 0x10;
  return;
}
