/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ed584` (_code @ 0x2ed584, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0043dc28; /* 0x43dc28 */

/* Supplied declaration required: FUN_002a7b50. */
/* Supplied declaration required: FUN_002aea7c. */
/* Supplied declaration required: FUN_002aeb2c. */
extern int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c4360. */


void FUN_002ed584(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c0ac8();
  FUN_002a7b50(*(unsigned int *)(temp_v0 + 0xc));
  FUN_002a7b50(*(unsigned int *)(temp_v0 + 0x10));
  FUN_002aeb2c(0x2d,0);
  FUN_002aea7c(0x2d);
  FUN_002c4360(temp_v0);
  DAT_0043dc28 = 0;
  return;
}
