/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c0cc4` (_code @ 0x2c0cc4, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int * FUN_002c0cc4(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 == 0x314c4254)) {
    param_1 = param_1 + 4;
  }
  else {
    param_1 = (int *)0x0;
  }
  return param_1;
}

} /* extern "C" */
