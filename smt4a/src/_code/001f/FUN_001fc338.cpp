/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fc338` (_code @ 0x1fc338, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern romwright_code *DAT_00589528; /* 0x589528 */


void FUN_001fc338(void)

{
/* irregular: 2 native warning(s); review required */
                    /* WARNING: Could not recover jumptable at 0x001fc340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00589528)();
  return;
}

} /* extern "C" */
