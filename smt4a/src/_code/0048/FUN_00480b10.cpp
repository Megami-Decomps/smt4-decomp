/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00480b10` (_code @ 0x480b10, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_00480b10(int param_1)

{
  if (param_1 == 0x7a1) {
    return 1;
  }
  if (param_1 >= 0x7a1) {
    switch(param_1) {
    default:
      return 0;
    case 0x7a2:
    case 0x7a3:
    case 0x7a4:
      return 1;
    case 0x7a5:
    case 0x7a6:
      return 0x14;
    }
  }
  if (param_1 != 0x22) {
    if (param_1 < 0x23) {
      if ((param_1 != 0x1f && param_1 != 0x20) && param_1 != 0x21) {
        return 0;
      }
    }
    else if (param_1 != 0x23) {
      if (param_1 == 0x7a0) {
        return 1;
      }
      return 0;
    }
  }
  return 3;
}

} /* extern "C" */
