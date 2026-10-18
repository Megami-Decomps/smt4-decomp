/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f3fb4` (_code @ 0x4f3fb4, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_003f9c0c. */


void FUN_004f3fb4(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x658) != 0) {
    *(unsigned int *)(param_1 + 0x6a4) = param_2;
    FUN_003f9c0c(*(int *)(param_1 + 0x658),param_1 + 0x660,param_2);
    *(unsigned int *)(param_1 + 0x38) = 3;
    *(unsigned int *)(param_1 + 0x3c) = 0;
  }
  return;
}
