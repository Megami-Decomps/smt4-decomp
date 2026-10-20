/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021ae10` (_code @ 0x21ae10, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_0021ae10(int param_1)

{
  (**(romwright_code **)(*(int *)(param_1 + 0x38) * 0x1c + 0x472840))(param_1);
  *(unsigned int *)(param_1 + 0x34) = 0;
  return;
}

} /* extern "C" */
