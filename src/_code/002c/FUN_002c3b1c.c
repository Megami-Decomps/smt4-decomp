/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c3b1c` (_code @ 0x2c3b1c, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001284e0. */
/* Supplied declaration required: FUN_002bce48. */


void FUN_002c3b1c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1 + 0x18;
  FUN_001284e0();
  if (temp_v0 == 0) {
    FUN_002bce48();
  }
  *(unsigned int *)(param_1 + 0x54) = 0;
  return;
}
