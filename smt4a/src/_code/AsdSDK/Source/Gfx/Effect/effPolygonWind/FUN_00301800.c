/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00301800` (_code @ 0x301800, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_00301800(int param_1)

{
  (**(romwright_code **)(*(int *)(param_1 + 0x38) * 0x1c + 0x5c137c))(param_1);
  *(unsigned int *)(param_1 + 0x34) = 0;
  return;
}
