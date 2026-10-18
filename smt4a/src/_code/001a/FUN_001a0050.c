/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a0050` (_code @ 0x1a0050, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_001a0050(int param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  if (param_1 != 0 && param_2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001a0070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(*param_2 + 0xc))(param_2,param_1);
    return;
  }
  return;
}
