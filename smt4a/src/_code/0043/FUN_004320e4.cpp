/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004320e4` (_code @ 0x4320e4, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016f160(int);

/* Supplied declaration required: FUN_0016f160. */


void FUN_004320e4(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 < 4) {
    FUN_0016f160(1 << (param_1 & 0xff));
    return;
  }
  return;
}

} /* extern "C" */
