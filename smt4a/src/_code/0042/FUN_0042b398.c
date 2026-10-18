/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042b398` (_code @ 0x42b398, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_0042b398(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  if (param_1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0042b3ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(*param_1 + 0x18))();
    return;
  }
  return;
}
