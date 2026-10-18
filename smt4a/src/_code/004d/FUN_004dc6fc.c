/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004dc6fc` (_code @ 0x4dc6fc, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0019a5a0. */


int FUN_004dc6fc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  do {
    if (*(int *)(param_1 + temp_v0 * 4 + 0x44) != 0) {
      FUN_0019a5a0();
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x41);
  return param_1;
}
