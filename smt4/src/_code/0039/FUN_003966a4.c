/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003966a4` (_code @ 0x3966a4, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_003966b8. */


void FUN_003966a4(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if ((*param_1 & 1) == 0) {
    FUN_003966b8();
    return;
  }
  return;
}
