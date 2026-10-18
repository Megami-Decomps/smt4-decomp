/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034fe14` (_code @ 0x34fe14, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0023a4f8. */


void FUN_0034fe14(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1 + 0x158;
  FUN_0023a4f8();
  if (temp_v0 == 0) {
    *(unsigned int *)(param_1 + 0xc) = 7;
  }
  return;
}
