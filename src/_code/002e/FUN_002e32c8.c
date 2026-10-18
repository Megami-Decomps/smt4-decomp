/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e32c8` (_code @ 0x2e32c8, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dd68; /* 0x43dd68 */

/* Supplied declaration required: FUN_00152af8. */
/* Supplied declaration required: FUN_002a7aa0. */


void FUN_002e32c8(void)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  
  piVar1 = (int *)(DAT_0043dd68 + 0x95cc);
  if (*piVar1 != 0) {
    FUN_00152af8();
    FUN_002a7aa0(*piVar1);
    *piVar1 = 0;
  }
  return;
}
