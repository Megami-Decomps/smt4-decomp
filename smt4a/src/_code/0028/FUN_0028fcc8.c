/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028fcc8` (_code @ 0x28fcc8, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0028fcc8(int param_1,int param_2)

{
  param_1 = param_1 + param_2 * 4;
  *(unsigned int *)(param_1 + 0x4178) = 0xf;
  *(unsigned int *)(param_1 + 0x418c) = 0x41000000;
  return;
}
