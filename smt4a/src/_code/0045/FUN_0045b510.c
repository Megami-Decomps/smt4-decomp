/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045b510` (_code @ 0x45b510, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00442c5c. */


int FUN_0045b510(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00442c5c();
  temp_v0 = FUN_00442c5c(temp_v0 + 4);
  temp_v0 = FUN_00442c5c(temp_v0 + 4);
  temp_v0 = FUN_00442c5c(temp_v0 + 4);
  return temp_v0 - 0xc;
}
