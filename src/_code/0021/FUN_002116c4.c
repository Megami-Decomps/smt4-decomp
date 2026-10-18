/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002116c4` (_code @ 0x2116c4, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0043da90; /* 0x43da90 */

/* Supplied declaration required: FUN_002116a4. */
/* Supplied declaration required: FUN_00252574. */
/* Supplied declaration required: FUN_0028a494. */
/* Supplied declaration required: FUN_00291a5c. */
/* Supplied declaration required: FUN_00291be8. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */


void FUN_002116c4(void)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0043da90;
  FUN_00252574();
  FUN_0028a494();
  FUN_00291be8();
  FUN_00291a5c();
  FUN_002116a4();
  FUN_002c45b8(*puVar1,0);
  FUN_002c4360(puVar1);
  DAT_0043da90 = (unsigned int *)0x0;
  return;
}
