/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003520d0` (_code @ 0x3520d0, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_003520d0(int param_1)

{
  (**(romwright_code **)(*(int *)(param_1 + 0x2c) * 0x18 + 0x5c1304))(param_1);
  *(unsigned int *)(param_1 + 0x28) = 0;
  return;
}
