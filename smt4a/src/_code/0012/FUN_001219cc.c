/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001219cc` (_code @ 0x1219cc, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e7378. */
/* Supplied declaration required: FUN_002ed838. */
/* Supplied declaration required: FUN_002fbb70. */
/* Supplied declaration required: FUN_0030fee0. */


void FUN_001219cc(int param_1)

{
/* irregular: 4 native warning(s); review required */
  FUN_002ed838();
  *(unsigned int *)(param_1 + 0x20) = 0;
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(unsigned char *)(param_1 + 0x38) = 0;
  FUN_002fbb70(param_1,4);
  FUN_0030fee0(param_1);
  FUN_002e7378(param_1,4);
  return;
}
