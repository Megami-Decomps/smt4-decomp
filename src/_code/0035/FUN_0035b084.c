/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035b084` (_code @ 0x35b084, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0035afc8. */


void FUN_0035b084(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 < 4) {
    FUN_0035afc8(1 << (param_1 & 0xff));
    return;
  }
  return;
}
