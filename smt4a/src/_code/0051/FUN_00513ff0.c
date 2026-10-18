/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00513ff0` (_code @ 0x513ff0, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned char FUN_00513ff0(int param_1,unsigned int *param_2)

{
  if (param_1 != 0) {
    *param_2 = *(unsigned int *)(*(int *)(param_1 + 4) + 0x1434);
  }
  return param_1 == 0;
}
