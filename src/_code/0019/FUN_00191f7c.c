/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00191f7c` (_code @ 0x191f7c, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0044de2c; /* 0x44de2c */

/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */


void FUN_00191f7c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0044de2c;
  if (DAT_0044de2c != (unsigned int *)0x0) {
    *(unsigned char *)(DAT_0044de2c + 1) = 1;
    FUN_002c45b8(*puVar1,0);
    FUN_002c4360(puVar1);
    DAT_0044de2c = (unsigned int *)0x0;
  }
  return;
}
