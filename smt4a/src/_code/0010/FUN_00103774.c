/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103774` (_code @ 0x103774, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e7264. */


int * FUN_00103774(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != 0) {
    FUN_002e7264();
    *param_1 = 0;
  }
  return param_1;
}
