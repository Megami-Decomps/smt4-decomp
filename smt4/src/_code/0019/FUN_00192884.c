/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00192884` (_code @ 0x192884, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002a5ed0. */
/* Supplied declaration required: FUN_002c4c2c. */


void FUN_00192884(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_002c4c2c(0x1d);
  temp_v0 = 0;
  do {
    FUN_002a5ed0(0x1d,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  return;
}
