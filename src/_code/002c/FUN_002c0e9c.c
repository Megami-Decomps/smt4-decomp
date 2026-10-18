/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c0e9c` (_code @ 0x2c0e9c, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int * FUN_002c0e9c(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 == 0x314c4254)) {
    param_1 = param_1 + 4;
  }
  else {
    param_1 = (int *)0x0;
  }
  return param_1;
}
