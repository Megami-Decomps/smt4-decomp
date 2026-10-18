/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00246688` (_code @ 0x246688, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0058104c; /* 0x58104c */

/* Supplied declaration required: FUN_00203d04. */


void FUN_00246688(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0058104c;
  *DAT_0058104c = 0;
  puVar1[1] = 0;
  FUN_00203d04(1);
  return;
}
