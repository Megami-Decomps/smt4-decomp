/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ced58` (_code @ 0x2ced58, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0043e158; /* 0x43e158 */

/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */


void FUN_002ced58(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0043e158;
  FUN_002c43b4(*DAT_0043e158,0);
  FUN_002c415c(puVar1);
  DAT_0043e158 = (unsigned int *)0x0;
  return;
}
