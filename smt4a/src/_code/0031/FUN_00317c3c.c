/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00317c3c` (_code @ 0x317c3c, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005b3ce8; /* 0x5b3ce8 */

/* Supplied declaration required: func_0x00359094. */


void FUN_00317c3c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 == 0) {
    param_1 = DAT_005b3ce8;
  }
  func_0x00359094(param_1);
  return;
}
