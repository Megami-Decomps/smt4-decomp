/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00241e74` (_code @ 0x241e74, 0x10 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00464c40; /* 0x464c40 */

/* Supplied declaration required: func_0x002e0e5c. */


void FUN_00241e74(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 == 0) {
    param_1 = DAT_00464c40;
  }
  func_0x002e0e5c(param_1);
  return;
}
