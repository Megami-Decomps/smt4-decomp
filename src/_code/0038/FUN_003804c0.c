/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003804c0` (_code @ 0x3804c0, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0013c0f0. */
/* Supplied declaration required: FUN_0014ffb8. */
/* Supplied declaration required: FUN_002ac4b8. */


int * FUN_003804c0(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  if (*param_1 != 0) {
    FUN_002ac4b8(param_1);
    FUN_0014ffb8(*param_1,3);
    FUN_0013c0f0(*param_1);
    *param_1 = 0;
  }
  return param_1;
}
