/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00330024` (_code @ 0x330024, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dc88; /* 0x43dc88 */

/* Supplied declaration required: FUN_002a497c. */
/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_00330024(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0043dc88;
  FUN_002a755c(*(unsigned int *)(DAT_0043dc88 + 0x530));
  FUN_002c4360(*(unsigned int *)(temp_v0 + 0x52c));
  FUN_002c4360(*(unsigned int *)(temp_v0 + 0x528));
  FUN_002a497c(0xd);
  FUN_002c4360(DAT_0043dc88);
  DAT_0043dc88 = 0;
  return;
}
