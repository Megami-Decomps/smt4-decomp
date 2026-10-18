/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00325a24` (_code @ 0x325a24, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0058103c; /* 0x58103c */
extern int DAT_00581040; /* 0x581040 */
extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */
extern int DAT_005f15fc; /* 0x5f15fc */

/* Supplied declaration required: FUN_0016c4b8. */


void FUN_00325a24(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0058103c == 0) {
    return;
  }
  if (DAT_005f15fc >= 100) {
    FUN_0016c4b8(DAT_0059dbb4,*(unsigned int *)(DAT_00581040 + 0xa4));
    return;
  }
  FUN_0016c4b8(DAT_0059dbb4,*(unsigned int *)(DAT_00581040 + 0x80));
  return;
}
