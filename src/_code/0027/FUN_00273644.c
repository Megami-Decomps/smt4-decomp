/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00273644` (_code @ 0x273644, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002a7218. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_00273644(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  param_1[1] = 0xf;
  *param_1 = 0;
  if (param_1[3] != 0) {
    FUN_002c415c();
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    FUN_002c415c();
    param_1[4] = 0;
  }
  if (param_1[5] != 0) {
    FUN_002a7218();
    param_1[5] = 0;
  }
  return;
}
