/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e69c0` (_code @ 0x3e69c0, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_003e69c0(int param_1)

{
  if (*(short *)(param_1 + 0x10) == 0x101) {
    param_1 = param_1 + *(int *)(param_1 + 0x14);
  }
  else {
    param_1 = 0;
  }
  return param_1;
}
