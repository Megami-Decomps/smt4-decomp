/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00284828` (_code @ 0x284828, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern romwright_code *DAT_0044e978; /* 0x44e978 */


void FUN_00284828(void)

{
/* irregular: 2 native warning(s); review required */
                    /* WARNING: Could not recover jumptable at 0x00284830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0044e978)();
  return;
}

} /* extern "C" */
