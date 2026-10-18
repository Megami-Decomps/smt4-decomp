/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050096c` (_code @ 0x50096c, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0016e800. */


unsigned int FUN_0050096c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 4) == 0) {
    FUN_0016e800(0xe0a046da,0x500988);
  }
  return *(unsigned int *)(param_1 + 4);
}
