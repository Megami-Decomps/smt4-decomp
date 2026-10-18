/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00321298` (_code @ 0x321298, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0020ad6c. */


void FUN_00321298(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x387c) != 0x28) {
    *(unsigned int *)(param_1 + 0x3c98) = 0;
    *(unsigned int *)(param_1 + 0x3c9c) = 0;
    *(unsigned int *)(param_1 + 0x3ca0) = 0;
    *(unsigned int *)(param_1 + 0x3ca4) = 0;
    FUN_0020ad6c(param_1,0x1c,0);
    return;
  }
  *(unsigned int *)(param_1 + *(int *)(param_1 + 0x3890) * 4 + 0x3c98) = 0;
  *(unsigned int *)(param_1 + *(int *)(param_1 + 0x3890) * 4 + 0x3c88) = 0;
  *(unsigned int *)(param_1 + 0x3dac) = 0;
  return;
}
