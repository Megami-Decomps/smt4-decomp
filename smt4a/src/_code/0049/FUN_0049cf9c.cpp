/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049cf9c` (_code @ 0x49cf9c, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003f86f8(int);

extern int DAT_00588fa0; /* 0x588fa0 */

/* Supplied declaration required: FUN_003f86f8. */


void FUN_0049cf9c(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00588fa0 < 1) {
    FUN_003f86f8(0x17);
  }
  DAT_00588fa0 = DAT_00588fa0 + 1;
  return;
}

} /* extern "C" */
