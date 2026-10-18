/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028c0b8` (_code @ 0x28c0b8, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bdac0. */


void FUN_0028c0b8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x2180) == 0) {
    *(unsigned int *)(param_1 + 0x217c) = 0;
    *(unsigned int *)(param_1 + 0x2180) = 5;
    FUN_002bdac0(param_1 + 0x20f0,0);
    return;
  }
  return;
}
