/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035dbd4` (_code @ 0x35dbd4, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588fd4; /* 0x588fd4 */

/* Supplied declaration required: FUN_0038b548. */


void FUN_0035dbd4(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  *(char *)(DAT_00588fd4 + 0x1381) = (char)param_1;
  FUN_0038b548(param_1 ^ 1);
  return;
}
