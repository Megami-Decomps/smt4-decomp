/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002501e0` (_code @ 0x2501e0, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_002501e0(int param_1)

{
/* irregular: 2 native warning(s); review required */
                    /* WARNING: Could not recover jumptable at 0x002501f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)((unsigned int)*(unsigned short *)(param_1 + 4) * 0x44 + 0x464118))(*(unsigned int *)(param_1 + 8));
  return;
}

} /* extern "C" */
