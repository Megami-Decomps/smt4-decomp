/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103b5c` (_code @ 0x103b5c, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002bdd1c. */
/* Supplied declaration required: FUN_002c3734. */
/* Supplied declaration required: FUN_002c37b4. */
/* Supplied declaration required: FUN_002c3ba8. */
/* Supplied declaration required: FUN_002c3c18. */


unsigned int FUN_00103b5c(void)

{
/* irregular: 5 native warning(s); review required */
  FUN_002c37b4();
  *(unsigned int *)(DAT_0044ea00 + 0x528) = 0;
  FUN_002bdd1c();
  FUN_002c3734(0);
  FUN_002c3c18(DAT_0044ea00);
  FUN_002c3ba8(DAT_0044ea00);
  return 0;
}
