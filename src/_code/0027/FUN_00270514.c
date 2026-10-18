/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00270514` (_code @ 0x270514, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447e58; /* 0x447e58 */

/* Supplied declaration required: FUN_00152af8. */


void FUN_00270514(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0x3f;
  do {
    if (*(int *)(DAT_00447e58 + temp_v0 * 0x38 + 0x3c) != 0) {
      FUN_00152af8();
    }
    temp_v0 = temp_v0 - 1;
  } while (-1 < temp_v0);
  return;
}
