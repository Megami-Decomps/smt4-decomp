/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a826c` (_code @ 0x1a826c, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_001a826c(int param_1)

{
  (**(romwright_code **)(*(int *)(param_1 + 0x18) * 0x18 + 0x472488))(param_1);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return;
}
