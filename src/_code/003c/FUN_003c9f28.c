/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c9f28` (_code @ 0x3c9f28, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002c415c. */


int FUN_003c9f28(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  do {
    if (*(int *)(param_1 + temp_v0 * 4 + 0x38) != 0) {
      FUN_002c415c();
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x38);
  return param_1;
}
