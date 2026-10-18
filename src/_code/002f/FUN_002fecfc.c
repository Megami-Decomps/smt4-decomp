/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fecfc` (_code @ 0x2fecfc, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0043dd90; /* 0x43dd90 */

/* Supplied declaration required: FUN_002523f0. */
/* Supplied declaration required: FUN_002a46d8. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */


void FUN_002fecfc(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0043dd90;
  FUN_002a46d8(0x25);
  FUN_002523f0();
  FUN_002c43b4(*puVar1,0);
  FUN_002c415c(puVar1);
  DAT_0043dd90 = (unsigned int *)0x0;
  return;
}
