/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00307d00` (_code @ 0x307d00, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001326ae(int);

/* Supplied declaration required: FUN_001326ae. */


void FUN_00307d00(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(unsigned int **)(param_1 + 4) != (unsigned int *)0x0) {
    *(unsigned int *)(param_1 + 4) = **(unsigned int **)(param_1 + 4);
    return;
  }
  if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0xc)) {
    FUN_001326ae(param_1);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x18;
  return;
}

} /* extern "C" */
