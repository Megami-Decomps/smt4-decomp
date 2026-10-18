/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00368390` (_code @ 0x368390, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_003fd63c. */


void FUN_00368390(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  do {
    FUN_003fd63c(temp_v0 + 0x310,0,1);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x10);
  return;
}
