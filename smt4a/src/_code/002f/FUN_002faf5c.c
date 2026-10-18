/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002faf5c` (_code @ 0x2faf5c, 0x6 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_002faf5c(int *param_1)

{
/* irregular: 2 native warning(s); review required */
                    /* WARNING: Could not recover jumptable at 0x002faf60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(*param_1 + 8))();
  return;
}
