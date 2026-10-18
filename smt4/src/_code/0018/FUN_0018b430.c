/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018b430` (_code @ 0x18b430, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002a0d4c. */


unsigned int FUN_0018b430(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002a0d4c(param_1,0xb);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return 1;
}
