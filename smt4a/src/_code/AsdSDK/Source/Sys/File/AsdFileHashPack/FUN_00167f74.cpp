/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00167f74` (_code @ 0x167f74, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00187788(int, unsigned int);

extern int DAT_005b3fdc; /* 0x5b3fdc */

/* Supplied declaration required: FUN_00187788. */


void FUN_00167f74(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_005b3fdc != 0) {
    FUN_00187788(DAT_005b3fdc,param_1);
    return;
  }
  return;
}

} /* extern "C" */
