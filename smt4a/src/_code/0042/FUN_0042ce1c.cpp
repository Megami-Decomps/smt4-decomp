/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042ce1c` (_code @ 0x42ce1c, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bd438(unsigned char *, int);

extern unsigned char DAT_00643310; /* 0x643310 */

/* Supplied declaration required: FUN_001bd438. */


void FUN_0042ce1c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 8) != 0) {
    FUN_001bd438(&DAT_00643310,param_1);
    return;
  }
  return;
}

} /* extern "C" */
