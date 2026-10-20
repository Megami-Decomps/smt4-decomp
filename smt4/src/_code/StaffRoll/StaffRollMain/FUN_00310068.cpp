/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00310068` (_code @ 0x310068, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029c3c0(...);

extern int DAT_00432cc8; /* 0x432cc8 */

/* Supplied declaration required: FUN_0029c3c0. */


void FUN_00310068(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_0029c3c0();
  FUN_0029c3c0(1,0x3c,0xff);
  *(unsigned int *)(DAT_00432cc8 + 0x14c) = 4;
  return;
}

} /* extern "C" */
