/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00132514` (_code @ 0x132514, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0013253c. */


void FUN_00132514(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(unsigned int **)(param_1 + 4) != (unsigned int *)0x0) {
    *(unsigned int *)(param_1 + 4) = **(unsigned int **)(param_1 + 4);
    return;
  }
  if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0xc)) {
    FUN_0013253c(param_1);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x28;
  return;
}
