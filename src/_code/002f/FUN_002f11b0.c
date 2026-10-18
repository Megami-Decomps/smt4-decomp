/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f11b0` (_code @ 0x2f11b0, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028dcb0. */


unsigned int FUN_002f11b0(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(char *)(*param_1 + 0x3040) != '\r') {
    FUN_0028dcb0(0);
    return 0;
  }
  FUN_0028dcb0(1);
  return 1;
}
