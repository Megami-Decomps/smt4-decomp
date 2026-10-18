/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00335414` (_code @ 0x335414, 0x70 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028c880. */


void FUN_00335414(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_0028c880(*(unsigned int *)(*(int *)(param_1 + 8) + 8),0);
  temp_v1 = 0;
  do {
    temp_v0 = *(int *)(param_1 + temp_v1 * 0x50 + 0x18);
    if (temp_v0 != 0) {
      FUN_0028c880(*(unsigned int *)(temp_v0 + 8),0);
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 3);
  return;
}
