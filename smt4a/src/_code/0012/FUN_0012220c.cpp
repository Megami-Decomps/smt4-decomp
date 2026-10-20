/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012220c` (_code @ 0x12220c, 0xa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_0012220c(int param_1)

{
/* irregular: 2 native warning(s); review required */
                    /* WARNING: Could not recover jumptable at 0x00122214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(**(int **)(param_1 + 4) + 0x2c))(*(int **)(param_1 + 4),param_1);
  return;
}

} /* extern "C" */
