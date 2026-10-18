/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00240e1c` (_code @ 0x240e1c, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044cf60; /* 0x44cf60 */
extern int DAT_0044cf64; /* 0x44cf64 */

/* Supplied declaration required: FUN_002c5ab8. */


void FUN_00240e1c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0044cf60 == 0) {
    DAT_0044cf64 = param_1;
    if (param_1 == 0x65) {
      FUN_002c5ab8(0x1c,6);
    }
    if (DAT_0044cf64 == 0x66) {
      FUN_002c5ab8(0x1c,7);
    }
    if (DAT_0044cf64 == 0x67) {
      FUN_002c5ab8(0x1c,8);
    }
  }
  DAT_0044cf60 = DAT_0044cf60 + 1;
  return;
}
