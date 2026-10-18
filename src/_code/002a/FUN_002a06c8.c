/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a06c8` (_code @ 0x2a06c8, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001db890. */


void FUN_002a06c8(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = *param_1 & 0xffdfffff;
  FUN_001db890(param_1[2]);
  return;
}
