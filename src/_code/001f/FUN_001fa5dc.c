/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fa5dc` (_code @ 0x1fa5dc, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447a48; /* 0x447a48 */

/* Supplied declaration required: FUN_00152af8. */


void FUN_001fa5dc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0x17;
  do {
    if (*(int *)(DAT_00447a48 + temp_v0 * 0x28 + 0x34) != 0) {
      FUN_00152af8();
    }
    temp_v0 = temp_v0 - 1;
  } while (-1 < temp_v0);
  return;
}
