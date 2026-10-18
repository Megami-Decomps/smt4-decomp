/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00192500` (_code @ 0x192500, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0044cdf0; /* 0x44cdf0 */

/* Supplied declaration required: FUN_002919d4. */
/* Supplied declaration required: FUN_00291a5c. */
/* Supplied declaration required: FUN_00291be8. */
/* Supplied declaration required: FUN_00291c3c. */
/* Supplied declaration required: FUN_002b85bc. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */


void FUN_00192500(void)

{
/* irregular: 7 native warning(s); review required */
  FUN_002b85bc();
  FUN_00291c3c();
  FUN_00291be8();
  FUN_00291a5c();
  if (DAT_0044cdf0 != (unsigned int *)0x0) {
    FUN_002c45b8(*DAT_0044cdf0,0);
    FUN_002919d4(DAT_0044cdf0 + 0x10);
    FUN_002c4360(DAT_0044cdf0);
    DAT_0044cdf0 = (unsigned int *)0x0;
  }
  return;
}
