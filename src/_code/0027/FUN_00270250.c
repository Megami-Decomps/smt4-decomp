/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00270250` (_code @ 0x270250, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00448c58; /* 0x448c58 */
extern int DAT_00448c88; /* 0x448c88 */
extern unsigned int DAT_00448c8c; /* 0x448c8c */

/* Supplied declaration required: FUN_002aeb2c. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_00270250(void)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_00448c58 != 0) {
    FUN_002c4360();
    DAT_00448c58 = 0;
  }
  if (DAT_00448c88 != 0) {
    FUN_002aeb2c(0x38,DAT_00448c8c);
    DAT_00448c8c = 0;
    DAT_00448c88 = 0;
  }
  return;
}
