/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dacfc` (_code @ 0x2dacfc, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0044dc50; /* 0x44dc50 */

/* Supplied declaration required: FUN_002aea7c. */
/* Supplied declaration required: FUN_002aeb2c. */
/* Supplied declaration required: FUN_002c0ac8. */


void FUN_002dacfc(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  FUN_002c0ac8();
  temp_v0 = 0;
  do {
    FUN_002aeb2c(0x37,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 5);
  FUN_002aea7c(0x37);
  DAT_0044dc50 = 0;
  return;
}
