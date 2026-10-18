/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105696` (_code @ 0x105696, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002ebd10. */


int FUN_00105696(int param_1)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  FUN_002ebd10(param_1);
  return param_1;
}
