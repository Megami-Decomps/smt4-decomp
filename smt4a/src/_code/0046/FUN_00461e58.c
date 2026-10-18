/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00461e58` (_code @ 0x461e58, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001d2384. */


void FUN_00461e58(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  for (temp_v0 = *(int *)(param_1 + 0x130); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x1ac)) {
    FUN_001d2384(temp_v0);
  }
  *(unsigned int *)(param_1 + 0x130) = 0;
  return;
}
