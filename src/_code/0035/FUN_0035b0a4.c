/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035b0a4` (_code @ 0x35b0a4, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: func_0x00128c48. */


void FUN_0035b0a4(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 < 4) {
    func_0x00128c48(1 << (param_1 & 0xff));
    return;
  }
  return;
}
