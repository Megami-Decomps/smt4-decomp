/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003014c6` (_code @ 0x3014c6, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_003014c6(int param_1,unsigned int *param_2)

{
  if (param_2 != (unsigned int *)0x0) {
    *param_2 = 0;
  }
  if (*(unsigned int *)(*(int *)(param_1 + 8) + 0x10) < 10) {
    return 0;
  }
  return 1;
}
