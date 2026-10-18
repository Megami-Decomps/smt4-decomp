/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5b58` (_code @ 0x2f5b58, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0043dad0; /* 0x43dad0 */

/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002a7b50. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */
/* Supplied declaration required: FUN_00309e5c. */
/* Supplied declaration required: FUN_0031bac0. */


void FUN_002f5b58(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0043dad0;
  FUN_002c4360(DAT_0043dad0[0x29]);
  FUN_002c4360(puVar1[0x2a]);
  FUN_002c4360(puVar1[0x2b]);
  FUN_002a7b50(puVar1[0x2c]);
  FUN_002a755c(puVar1[0x28]);
  FUN_0031bac0(puVar1[4]);
  FUN_00309e5c(puVar1[3]);
  FUN_002c45b8(*puVar1,0);
  FUN_002c4360(puVar1);
  DAT_0043dad0 = (unsigned int *)0x0;
  return;
}
