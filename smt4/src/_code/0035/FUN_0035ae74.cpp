/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035ae74` (_code @ 0x35ae74, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0035adb8(int);

/* Supplied declaration required: FUN_0035adb8. */


void FUN_0035ae74(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 < 4) {
    FUN_0035adb8(1 << (param_1 & 0xff));
    return;
  }
  return;
}

} /* extern "C" */
