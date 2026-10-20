/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001641b4` (_code @ 0x1641b4, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00169ddc(void);

/* Supplied declaration required: FUN_00169ddc. */


void FUN_001641b4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (-1 < param_1) {
    FUN_00169ddc();
    return;
  }
  return;
}

} /* extern "C" */
