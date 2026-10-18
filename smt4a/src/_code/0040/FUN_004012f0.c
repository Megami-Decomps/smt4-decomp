/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004012f0` (_code @ 0x4012f0, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_003fd784. */


void FUN_004012f0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = *(int *)(param_1 + temp_v1 * 4 + 0x1c);
    if (temp_v0 != 0) {
      FUN_003fd784(*(unsigned int *)(temp_v0 + 4));
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 3);
  return;
}
