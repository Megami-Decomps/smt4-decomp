/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fa010` (_code @ 0x2fa010, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0031011e(int, int);

/* Supplied declaration required: FUN_0031011e. */


void FUN_002fa010(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_0031011e(param_1,*(int *)(param_1 + 0x18) + param_2);
  return;
}

} /* extern "C" */
