/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001dc618` (_code @ 0x1dc618, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002c5ab8. */
/* Supplied declaration required: FUN_002c5b04. */


void FUN_001dc618(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_002c5b04(0x25,0);
  temp_v0 = 0;
  do {
    FUN_002c5ab8(0x25,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 4);
  return;
}
