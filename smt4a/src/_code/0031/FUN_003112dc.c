/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003112dc` (_code @ 0x3112dc, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_003112dc(int param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    return *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x2c) + 4) + 8);
  }
  return 0;
}
