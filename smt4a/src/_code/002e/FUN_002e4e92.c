/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e4e92` (_code @ 0x2e4e92, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e5700. */


void FUN_002e4e92(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 != 0) {
    FUN_002e5700(param_1,param_2,*(unsigned int *)(param_1 - 8),*(unsigned int *)(param_1 - 4));
  }
  return;
}
