/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00284f70` (_code @ 0x284f70, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001654e4(int);

extern int DAT_0057f578; /* 0x57f578 */

/* Supplied declaration required: FUN_001654e4. */


void FUN_00284f70(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0057f578 != 0) {
    FUN_001654e4(DAT_0057f578 + 0x34);
    return;
  }
  return;
}

} /* extern "C" */
