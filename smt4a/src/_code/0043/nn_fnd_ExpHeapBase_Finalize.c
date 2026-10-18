/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fnd_ExpHeapBase_Finalize` (_code @ 0x431dec, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00431e8c. */


void nn_fnd_ExpHeapBase_Finalize(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00431e8c(param_1 + 0x18);
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  return;
}
