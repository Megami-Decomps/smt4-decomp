/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c5624` (_code @ 0x2c5624, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0044e3b0; /* 0x44e3b0 */

/* Supplied declaration required: FUN_002c0efc. */


void FUN_002c5624(int param_1)

{
/* irregular: 1 native warning(s); review required */
  DAT_0044e3b0 = 1;
  if (param_1 != 0) {
    FUN_002c0efc();
    return;
  }
  return;
}
