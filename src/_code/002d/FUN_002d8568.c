/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d8568` (_code @ 0x2d8568, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0043ded0; /* 0x43ded0 */

/* Supplied declaration required: FUN_002c4460. */


void FUN_002d8568(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0043ded0;
  FUN_002c4460(*DAT_0043ded0,param_1);
  puVar1[0xc] = param_1;
  return;
}
