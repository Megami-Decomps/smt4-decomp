/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023b5f8` (_code @ 0x23b5f8, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0023e548. */
/* Supplied declaration required: FUN_002a6214. */
/* Supplied declaration required: FUN_002a6444. */


void FUN_0023b5f8(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  if ((param_2 & 8) != 0) {
    temp_v0 = 0x16;
    FUN_0023e548(0x16,param_3);
  }
  else {
    if ((param_2 & 0x40) == 0) {
      if ((param_2 & 1) == 0) {
        return;
      }
      temp_v0 = 0x16;
      FUN_002a6214(0x16,param_3);
      *(unsigned int *)(param_1 + 8) = temp_v0;
      return;
    }
    temp_v0 = 0x16;
    FUN_002a6444(0x16,param_3);
  }
  *(unsigned int *)(param_1 + 8) = temp_v0;
  return;
}
