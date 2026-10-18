/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002de3b0` (_code @ 0x2de3b0, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00249588. */
/* Supplied declaration required: FUN_0025733c. */


void FUN_002de3b0(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_0025733c();
  }
  FUN_00249588();
  *(unsigned int *)(param_1 + 0x48) = param_2;
  return;
}
