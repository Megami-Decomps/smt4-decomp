/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f1164` (_code @ 0x2f1164, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028df54. */


unsigned int FUN_002f1164(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(char *)(*param_1 + 0x3040) != '\r') {
    FUN_0028df54(0);
    return 0;
  }
  FUN_0028df54(1);
  return 1;
}
