/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00184518` (_code @ 0x184518, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_00184518(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 4) = 0xffffffff;
  *(unsigned int *)(param_1 + 8) = param_2;
  return;
}

} /* extern "C" */
