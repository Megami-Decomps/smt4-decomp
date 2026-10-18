/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00140290` (_code @ 0x140290, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00588020; /* 0x588020 */
extern unsigned char DAT_00617f40; /* 0x617f40 */
extern int DAT_00618100; /* 0x618100 */

/* Supplied declaration required: FUN_001582dc. */
/* Supplied declaration required: FUN_0015836c. */


void FUN_00140290(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_00618100 != 0) {
    FUN_001582dc();
  }
  FUN_0015836c(&DAT_00617f40);
  if (param_1 == 3) {
    DAT_00588020 = 1;
  }
  return;
}
