/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021a40c` (_code @ 0x21a40c, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_0021a40c(int param_1)

{
  (**(romwright_code **)(*(int *)(param_1 + 0x38) * 0x1c + 0x472618))(param_1);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  return;
}
