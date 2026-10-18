/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b9680` (_code @ 0x4b9680, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001d1438. */


void FUN_004b9680(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_001d1438(param_1 + 0x42);
  *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) | 0x10;
  return;
}
