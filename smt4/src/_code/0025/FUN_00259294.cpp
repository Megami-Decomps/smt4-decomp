/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00259294` (_code @ 0x259294, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c411c(int);

extern unsigned char DAT_0043e2a9; /* 0x43e2a9 */
extern unsigned char DAT_0043e2a8; /* 0x43e2a8 */

/* Supplied declaration required: FUN_002c411c. */


void FUN_00259294(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  DAT_0043e2a9 = 0;
  (*(unsigned int *)((unsigned char *)&DAT_0043e2a8 + 0x14)) = param_1 | (*(unsigned int *)((unsigned char *)&DAT_0043e2a8 + 0x14));
  FUN_002c411c(0);
  return;
}

} /* extern "C" */
