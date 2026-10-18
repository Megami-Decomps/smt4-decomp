/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d7200` (_code @ 0x3d7200, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00297704. */


void FUN_003d7200(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x730) == 0) {
    FUN_00297704(param_2,param_1 + 0x734,0);
    return;
  }
  return;
}
