/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035ae94` (_code @ 0x35ae94, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: func_0x00128d24. */


void FUN_0035ae94(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 < 4) {
    func_0x00128d24(1 << (param_1 & 0xff));
    return;
  }
  return;
}
