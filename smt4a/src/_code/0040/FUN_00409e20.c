/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00409e20` (_code @ 0x409e20, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001acf98. */
/* Supplied declaration required: FUN_003a4958. */
/* Supplied declaration required: FUN_003a496c. */


void FUN_00409e20(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  if ((param_2 & 8) != 0) {
    temp_v0 = 0xe;
    FUN_003a4958(0xe,param_3);
  }
  else {
    if ((param_2 & 0x40) == 0) {
      if ((param_2 & 1) == 0) {
        return;
      }
      temp_v0 = 0xe;
      FUN_001acf98(0xe,param_3);
      *(unsigned int *)(param_1 + 8) = temp_v0;
      return;
    }
    temp_v0 = 0xe;
    FUN_003a496c(0xe,param_3);
  }
  *(unsigned int *)(param_1 + 8) = temp_v0;
  return;
}
