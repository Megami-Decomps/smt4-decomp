/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e6070` (_code @ 0x3e6070, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_003e6070(int param_1)

{
  (**(romwright_code **)(**(int **)(param_1 + 0x260) + 0x14))();
  return;
}
