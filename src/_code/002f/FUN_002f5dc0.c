/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5dc0` (_code @ 0x2f5dc0, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0043db10; /* 0x43db10 */

/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */
/* Supplied declaration required: FUN_00309e5c. */
/* Supplied declaration required: FUN_0031bac0. */


void FUN_002f5dc0(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_0043db10;
  FUN_0031bac0(DAT_0043db10[0x4e]);
  temp_v0 = 0;
  do {
    FUN_00309e5c(puVar1[temp_v0 + 0x4b]);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  FUN_002c4360(puVar1[0x58]);
  FUN_002c45b8(*puVar1,0);
  FUN_002c4360(puVar1);
  DAT_0043db10 = (unsigned int *)0x0;
  return;
}
