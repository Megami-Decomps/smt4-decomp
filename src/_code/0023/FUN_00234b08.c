/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00234b08` (_code @ 0x234b08, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0023a308. */


void FUN_00234b08(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != 0 || param_1[1] != 0) {
    FUN_0023a308();
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}
