/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010af48` (_code @ 0x10af48, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0044d020; /* 0x44d020 */
extern unsigned char DAT_004c3b20; /* 0x4c3b20 */
extern unsigned int DAT_004c3ce0; /* 0x4c3ce0 */

/* Supplied declaration required: FUN_0011b558. */
/* Supplied declaration required: FUN_0011b5e8. */


void FUN_0010af48(int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_0011b558(DAT_004c3ce0);
  FUN_0011b5e8(&DAT_004c3b20);
  if (param_1 == 3) {
    DAT_0044d020 = 1;
  }
  return;
}
