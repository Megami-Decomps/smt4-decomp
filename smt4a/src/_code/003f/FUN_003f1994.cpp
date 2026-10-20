/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f1994` (_code @ 0x3f1994, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002804b0(int, int, int);

/* Supplied declaration required: FUN_002804b0. */


void FUN_003f1994(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x2290) == 0) {
    FUN_002804b0(0x3f19c0,param_1 + 0x2290,0);
    return;
  }
  return;
}

} /* extern "C" */
