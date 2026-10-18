/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00207d70` (_code @ 0x207d70, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_00207d70(int param_1)

{
  (**(romwright_code **)(*(int *)(param_1 + 0x38) * 0x1c + 0x472850))(param_1);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  return;
}
