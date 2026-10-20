/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00100f9c` (_code @ 0x100f9c, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned short FUN_00100f9c(unsigned int param_1)

{
  if ((int)param_1 >= 0x2f0) {
    if ((int)param_1 < 0x582) {
      return 0xffff;
    }
    param_1 = (int)((param_1 - 0x292) * 0x10000) >> 0x10;
  }
  if (param_1 >= 0x1bee) {
    return 0xffff;
  }
  return *(unsigned short *)(param_1 * 2 + 0x41ce58);
}

} /* extern "C" */
