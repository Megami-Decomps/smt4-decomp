/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a0428` (_code @ 0x2a0428, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001db998. */


void FUN_002a0428(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = *param_1 & 0xffdfffff;
  FUN_001db998(param_1[2]);
  return;
}
