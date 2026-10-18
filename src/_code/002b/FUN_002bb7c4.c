/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bb7c4` (_code @ 0x2bb7c4, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b93f0. */
/* Supplied declaration required: FUN_002bce48. */


int FUN_002bb7c4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if ((*(unsigned int *)(param_1 + 4) & 0xfffffffe) != 0) {
    if ((*(unsigned int *)(param_1 + 4) & 1) != 0) {
      FUN_002bce48();
    }
    FUN_002b93f0(*(unsigned int *)(param_1 + 4) & 0xfffffffe);
    *(unsigned int *)(param_1 + 4) = 0;
  }
  return param_1;
}
