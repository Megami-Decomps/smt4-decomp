/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003111fa` (_code @ 0x3111fa, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_003111fa(int param_1)

{
  return *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18);
}
