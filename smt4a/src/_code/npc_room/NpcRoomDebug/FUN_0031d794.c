/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031d794` (_code @ 0x31d794, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_00588128; /* 0x588128 */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_0019a5a0. */


void FUN_0031d794(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_00588128;
  if (DAT_00588128 != (unsigned int *)0x0) {
    FUN_001631d0(*DAT_00588128,0);
    FUN_0019a5a0(puVar1);
    DAT_00588128 = (unsigned int *)0x0;
  }
  return;
}
