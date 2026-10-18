/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103750` (_code @ 0x103750, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001884b0. */
/* Supplied declaration required: FUN_00195fc8. */


void FUN_00103750(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*param_1 >> 1 != 0) {
    if ((int)(*param_1 << 0x1f) < 0) {
      FUN_00195fc8();
    }
    FUN_001884b0(*param_1 & 0xfffffffe);
    *param_1 = 0;
  }
  return;
}
