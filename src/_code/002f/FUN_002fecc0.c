/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fecc0` (_code @ 0x2fecc0, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0043dd90; /* 0x43dd90 */

/* Supplied declaration required: FUN_00252630. */
/* Supplied declaration required: FUN_002a497c. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */


void FUN_002fecc0(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0043dd90;
  FUN_002a497c(0x25);
  FUN_00252630();
  FUN_002c45b8(*puVar1,0);
  FUN_002c4360(puVar1);
  DAT_0043dd90 = (unsigned int *)0x0;
  return;
}
