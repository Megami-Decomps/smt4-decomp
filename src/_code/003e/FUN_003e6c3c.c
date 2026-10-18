/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e6c3c` (_code @ 0x3e6c3c, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_003e6c3c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int **)(param_1 + 4) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003e6c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(**(int **)(param_1 + 4) + 8))();
    return;
  }
  return;
}
