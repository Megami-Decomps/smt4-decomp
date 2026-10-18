/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003406d8` (_code @ 0x3406d8, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0029a2b0. */


void FUN_003406d8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = *(int *)(param_1 + temp_v1 * 4 + 0x10);
    if (temp_v0 != 0) {
      FUN_0029a2b0(*(unsigned int *)(temp_v0 + 8),0);
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 3);
  return;
}
