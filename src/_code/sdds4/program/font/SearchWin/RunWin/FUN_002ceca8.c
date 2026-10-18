/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ceca8` (_code @ 0x2ceca8, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0043e158; /* 0x43e158 */

/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */


void FUN_002ceca8(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0043e158;
  FUN_002c45b8(*DAT_0043e158,0);
  FUN_002c4360(puVar1);
  DAT_0043e158 = (unsigned int *)0x0;
  return;
}
