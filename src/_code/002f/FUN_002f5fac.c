/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5fac` (_code @ 0x2f5fac, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002f62d0. */


unsigned int FUN_002f5fac(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != 0) {
    if (*(int *)(*param_1 + 0x564) == 2) {
      return 1;
    }
  }
  else {
    FUN_002f62d0();
  }
  return 0;
}
