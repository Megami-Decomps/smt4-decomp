/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a7bd4` (_code @ 0x2a7bd4, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0043e140; /* 0x43e140 */

/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */


void FUN_002a7bd4(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0043e140;
  FUN_002c45b8(*DAT_0043e140,0);
  FUN_002c4360(puVar1);
  DAT_0043e140 = (unsigned int *)0x0;
  return;
}
