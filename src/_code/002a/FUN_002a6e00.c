/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a6e00` (_code @ 0x2a6e00, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bd540. */


unsigned char FUN_002a6e00(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  
  temp_v0 = *(int *)(param_1 + 8) != 0;
  if (temp_v0) {
    FUN_002bd540();
    *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) | 4;
  }
  return temp_v0;
}
