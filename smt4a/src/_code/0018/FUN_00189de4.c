/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00189de4` (_code @ 0x189de4, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001c7948. */


void FUN_00189de4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  do {
    FUN_001c7948(*(unsigned int *)(*(int *)(param_1 + temp_v0 * 4 + 0x15dc) + 0x68));
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x18);
  return;
}
