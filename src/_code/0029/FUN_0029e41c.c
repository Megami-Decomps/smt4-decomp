/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029e41c` (_code @ 0x29e41c, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0043dd20; /* 0x43dd20 */
extern unsigned int *DAT_0043dd24; /* 0x43dd24 */

/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */


void FUN_0029e41c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0043dd24;
  DAT_0043dd20 = DAT_0043dd20 - '\x01';
  if (DAT_0043dd20 < '\x01') {
    FUN_002c45b8(*DAT_0043dd24,0);
    FUN_002c4360(puVar1);
    DAT_0043dd24 = (unsigned int *)0x0;
    DAT_0043dd20 = '\0';
  }
  return;
}
