/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00207c0c` (_code @ 0x207c0c, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_00207c0c(int param_1)

{
  (**(romwright_code **)(*(int *)(param_1 + 0x38) * 0x1c + 0x472850))(param_1);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  return;
}
