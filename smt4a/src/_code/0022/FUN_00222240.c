/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00222240` (_code @ 0x222240, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_00222240(int param_1)

{
/* irregular: 2 native warning(s); review required */
                    /* WARNING: Could not recover jumptable at 0x00222258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)((unsigned int)*(unsigned short *)(param_1 + 4) * 0x44 + 0x5b3280))(*(unsigned int *)(param_1 + 8));
  return;
}
