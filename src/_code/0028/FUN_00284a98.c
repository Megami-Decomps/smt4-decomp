/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00284a98` (_code @ 0x284a98, 0xc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern romwright_code *DAT_0044e978; /* 0x44e978 */


void FUN_00284a98(void)

{
/* irregular: 2 native warning(s); review required */
                    /* WARNING: Could not recover jumptable at 0x00284aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0044e978)();
  return;
}
