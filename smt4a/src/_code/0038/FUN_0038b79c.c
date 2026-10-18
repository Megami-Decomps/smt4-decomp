/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038b79c` (_code @ 0x38b79c, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0057f2c4; /* 0x57f2c4 */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_001add24. */
/* Supplied declaration required: FUN_00321744. */


void FUN_0038b79c(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0057f2c4;
  FUN_001add24(0x25);
  FUN_00321744();
  FUN_001631d0(*puVar1,0);
  FUN_0019a5a0(puVar1);
  DAT_0057f2c4 = (unsigned int *)0x0;
  return;
}
