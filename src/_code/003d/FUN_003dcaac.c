/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dcaac` (_code @ 0x3dcaac, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_003dcaac(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 0x302c) = param_2;
  *(unsigned int *)(param_1 + 0x3030) = 0;
  *(unsigned int *)(param_1 + 0x3028) = (*(unsigned int *)(param_1 + 0x3028) & 0xffffff1f) | 0x10;
  return;
}
