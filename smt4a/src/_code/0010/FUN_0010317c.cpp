/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010317c` (_code @ 0x10317c, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned short FUN_0010317c(unsigned int param_1)

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
  return *(unsigned short *)(param_1 * 2 + 0x554030);
}

} /* extern "C" */
