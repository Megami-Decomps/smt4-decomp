/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050d178` (_code @ 0x50d178, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_0050d178(unsigned int param_1,int *param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  if (param_2[1] == *(int *)(param_3 + 4)) {
                    /* WARNING: Could not recover jumptable at 0x0050d19c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(*param_2 + 0x14))();
    return;
  }
  return;
}
