/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002738b4` (_code @ 0x2738b4, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_002738b4(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  param_1[1] = 0xf;
  *param_1 = 0;
  if (param_1[3] != 0) {
    FUN_002c4360();
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    FUN_002c4360();
    param_1[4] = 0;
  }
  if (param_1[5] != 0) {
    FUN_002a755c();
    param_1[5] = 0;
  }
  return;
}
