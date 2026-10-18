/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103d60` (_code @ 0x103d60, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002bdd1c. */
/* Supplied declaration required: FUN_002c3734. */
/* Supplied declaration required: FUN_002c37b4. */
/* Supplied declaration required: FUN_002c3c18. */


unsigned int FUN_00103d60(void)

{
/* irregular: 4 native warning(s); review required */
  FUN_002c37b4();
  FUN_002bdd1c();
  FUN_002c3734(2,0);
  *(unsigned int *)(DAT_0044ea00 + 0x528) = 2;
  FUN_002c3c18(DAT_0044ea00);
  return 0;
}
