/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030eeb0` (_code @ 0x30eeb0, 0x3a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_0030eeb0(unsigned int param_1)

{
  if ((int)(param_1 << 0x18) < 0) {
    return 0x80;
  }
  if (-1 < (int)(param_1 << 0x17)) {
    if (param_1 == 1) {
      return 1;
    }
    if (param_1 == 0x40) {
      return 0x40;
    }
    if ((param_1 & 0xfffffff3) == 0) {
      return 4;
    }
    if ((param_1 & 0xfffffff0) == 0) {
      return 2;
    }
    if ((param_1 & 0xffffff83) == 0) {
      return 0x10;
    }
  }
  return 0x100;
}
