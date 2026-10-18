/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00192778` (_code @ 0x192778, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002a6214. */
/* Supplied declaration required: FUN_002c4e28. */


void FUN_00192778(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_002c4e28(0x1d);
  temp_v0 = 0;
  do {
    FUN_002a6214(0x1d,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  return;
}
