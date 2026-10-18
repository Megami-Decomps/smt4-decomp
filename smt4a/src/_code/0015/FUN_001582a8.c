/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001582a8` (_code @ 0x1582a8, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_001582a8(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  if ((romwright_code *)*param_1 != (romwright_code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001582b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(romwright_code *)*param_1)(param_2);
    return;
  }
  return;
}
