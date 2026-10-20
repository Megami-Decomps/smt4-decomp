/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00241d44` (_code @ 0x241d44, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int func_0x002e0ed0(int);

extern int DAT_00464c40; /* 0x464c40 */

/* Supplied declaration required: func_0x002e0ed0. */


void FUN_00241d44(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 == 0) {
    param_1 = DAT_00464c40;
  }
  func_0x002e0ed0(param_1);
  return;
}

} /* extern "C" */
