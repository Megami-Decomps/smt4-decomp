/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ef33c` (_code @ 0x2ef33c, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ef9e0(unsigned int, int);

/* Supplied declaration required: FUN_002ef9e0. */


void FUN_002ef33c(unsigned int param_1,int param_2,short param_3)

{
/* irregular: 1 native warning(s); review required */
  FUN_002ef9e0(param_1,*(short *)(param_2 + 4) + param_3);
  return;
}

} /* extern "C" */
