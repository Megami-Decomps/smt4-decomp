/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00107144` (_code @ 0x107144, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00432fc8; /* 0x432fc8 */

/* Supplied declaration required: FUN_00111090. */
/* Supplied declaration required: FUN_002c23f8. */


void FUN_00107144(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0xd68;
  FUN_002c23f8();
  if (temp_v0 != 0) {
    FUN_00111090();
  }
  DAT_00432fc8 = temp_v0;
  return;
}
