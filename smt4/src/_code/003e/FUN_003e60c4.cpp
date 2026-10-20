/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e60c4` (_code @ 0x3e60c4, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_003e60c4(int *param_1)

{
/* irregular: 2 native warning(s); review required */
                    /* WARNING: Could not recover jumptable at 0x003e60cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(*param_1 + 0x14))();
  return;
}

} /* extern "C" */
