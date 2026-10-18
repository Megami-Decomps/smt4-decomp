/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001bceb8` (_code @ 0x1bceb8, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned char FUN_001bceb8(int *param_1,int param_2)

{
  if (*param_1 == 0) {
    param_1[10] = param_2;
  }
  return *param_1 == 0;
}
