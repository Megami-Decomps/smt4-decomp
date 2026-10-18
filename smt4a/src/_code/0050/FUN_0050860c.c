/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050860c` (_code @ 0x50860c, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_0050860c(int param_1)

{
  if (*(short *)(param_1 + 4) == 0x101) {
    param_1 = param_1 + *(int *)(param_1 + 8);
  }
  else {
    param_1 = 0;
  }
  return param_1;
}
