/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00372540` (_code @ 0x372540, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0057f4c0; /* 0x57f4c0 */

/* Supplied declaration required: FUN_00164a9c. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_001ad6d8. */


void FUN_00372540(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  FUN_001ad6d8();
  FUN_00164a9c(param_1);
  FUN_0019a5a0(DAT_0057f4c0);
  DAT_0057f4c0 = 0;
  return;
}
