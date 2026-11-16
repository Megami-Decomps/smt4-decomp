/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00431dc0` (_code @ 0x431dc0, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_fnd_detail_DestroyHeap(int);

/* Supplied declaration required: nn_fnd_detail_DestroyHeap. */


void FUN_00431dc0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(param_1 + 0x54) = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    nn_fnd_detail_DestroyHeap(param_1 + 0x18);
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  return;
}

} /* extern "C" */
