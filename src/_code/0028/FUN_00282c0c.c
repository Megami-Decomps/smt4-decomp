/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00282c0c` (_code @ 0x282c0c, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002934d4(void);
/* Supplied declaration required: FUN_00293c98. */


int FUN_00282c0c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  if (*(int *)(param_1 + 0x1cfc) != 0) {
    FUN_00293c98();
    temp_v0 = FUN_002934d4();
    if (temp_v0 == 0) {
      temp_v0 = (int)*(short *)(*(int *)(param_1 + 0x1cfc) + 0x194);
    }
    else {
      temp_v0 = 0;
    }
  }
  return temp_v0;
}
