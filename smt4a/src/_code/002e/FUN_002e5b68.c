/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e5b68` (_code @ 0x2e5b68, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0057f678; /* 0x57f678 */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_002e3328. */


void FUN_002e5b68(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_001631d0(*DAT_0057f678,0);
  if (DAT_0057f678 != (unsigned int *)0x0) {
    FUN_002e3328();
    DAT_0057f678 = (unsigned int *)0x0;
  }
  return;
}
