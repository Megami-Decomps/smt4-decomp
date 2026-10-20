/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b66c8` (_code @ 0x3b66c8, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00338408(void);
int FUN_003a1a70(void);

extern int DAT_0059dc1c; /* 0x59dc1c */
extern int DAT_0059dc20; /* 0x59dc20 */

/* Supplied declaration required: FUN_00338408. */
/* Supplied declaration required: FUN_003a1a70. */


void FUN_003b66c8(void)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_0059dc20 != 0) {
    FUN_003a1a70();
    DAT_0059dc20 = 0;
  }
  if (DAT_0059dc1c != 0) {
    FUN_00338408();
    DAT_0059dc1c = 0;
  }
  return;
}

} /* extern "C" */
