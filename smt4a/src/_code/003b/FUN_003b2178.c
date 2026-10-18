/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b2178` (_code @ 0x3b2178, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0038e4cc. */


unsigned char FUN_003b2178(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0x387c) != 0x27;
  if (temp_v0) {
    FUN_0038e4cc(param_1,9);
  }
  return temp_v0;
}
