/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a274` (_code @ 0x13a274, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002c3b00. */


void FUN_0013a274(char *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 == '\0') {
    FUN_002c3b00(param_1 + 0x34);
    *param_1 = '\x01';
  }
  return;
}
