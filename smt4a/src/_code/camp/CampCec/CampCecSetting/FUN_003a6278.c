/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a6278` (_code @ 0x3a6278, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0057f12c; /* 0x57f12c */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */


void FUN_003a6278(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0057f12c;
  FUN_0019a5a0(DAT_0057f12c[2]);
  FUN_0019a5a0(puVar1[3]);
  FUN_0019c364(puVar1[1]);
  FUN_001631d0(*puVar1,0);
  FUN_0019a5a0(puVar1);
  DAT_0057f12c = (unsigned int *)0x0;
  return;
}
