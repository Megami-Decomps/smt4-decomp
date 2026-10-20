/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f6be2` (_code @ 0x2f6be2, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00103850(unsigned int, unsigned int);

/* Supplied declaration required: FUN_00103850. */


void FUN_002f6be2(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_00103850(param_2,*(unsigned int *)(param_1 + 4));
  return;
}

} /* extern "C" */
