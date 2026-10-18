/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004275c8` (_code @ 0x4275c8, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00429d58. */


void FUN_004275c8(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != 0 || param_1[1] != 0) {
    FUN_00429d58();
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}
