/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00202790` (_code @ 0x202790, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e2b50. */


unsigned int FUN_00202790(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e2b50(param_1,0xb);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return 1;
}
