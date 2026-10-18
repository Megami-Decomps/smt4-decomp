/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c8130` (_code @ 0x3c8130, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0026385c. */


void FUN_003c8130(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (-1 < *(short *)(param_1 + 0x8c)) {
    FUN_0026385c((int)*(short *)(param_1 + 0x8c),0);
    return;
  }
  return;
}
