/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002597c0` (_code @ 0x2597c0, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e0df8(unsigned int);

extern int DAT_0043de68; /* 0x43de68 */

/* Supplied declaration required: FUN_002e0df8. */


void FUN_002597c0(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0043de68 != 0) {
    FUN_002e0df8(*(unsigned int *)(DAT_0043de68 + 4));
    return;
  }
  return;
}

} /* extern "C" */
