/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b4200` (_code @ 0x1b4200, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447a10; /* 0x447a10 */

/* Supplied declaration required: FUN_00281e20. */


void FUN_001b4200(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  do {
    if (*(int *)(DAT_00447a10 + temp_v0 * 0x18 + 0x1c) != 0) {
      FUN_00281e20();
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x10);
  return;
}
