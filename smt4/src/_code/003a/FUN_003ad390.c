/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ad390` (_code @ 0x3ad390, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0043d9e0; /* 0x43d9e0 */
extern unsigned int *DAT_0043d9e4; /* 0x43d9e4 */

/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */


void FUN_003ad390(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0043d9e4;
  DAT_0043d9e0 = DAT_0043d9e0 - '\x01';
  if (DAT_0043d9e0 < '\x01') {
    FUN_002c43b4(*DAT_0043d9e4,0);
    FUN_002c415c(puVar1);
    DAT_0043d9e4 = (unsigned int *)0x0;
    DAT_0043d9e0 = '\0';
  }
  return;
}
