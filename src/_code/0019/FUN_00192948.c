/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00192948` (_code @ 0x192948, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002a0fec. */


unsigned int FUN_00192948(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002a0fec(param_1,1);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return 1;
}
