/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00222af8` (_code @ 0x222af8, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0044d1b0; /* 0x44d1b0 */

/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */


void FUN_00222af8(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0044d1b0;
  if (DAT_0044d1b0 != (unsigned int *)0x0) {
    FUN_002c43b4(*DAT_0044d1b0,0);
    FUN_002c415c(puVar1);
    DAT_0044d1b0 = (unsigned int *)0x0;
  }
  return;
}
