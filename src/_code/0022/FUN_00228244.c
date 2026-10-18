/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00228244` (_code @ 0x228244, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002934d4(void);
/* Supplied declaration required: FUN_00293c98. */


int FUN_00228244(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0x1cfc);
  if ((temp_v0 != 0) && (-1 < *(short *)(temp_v0 + 0x192))) {
    FUN_00293c98();
    temp_v0 = FUN_002934d4();
    if (temp_v0 == 0) {
      temp_v0 = (int)*(short *)(*(int *)(param_1 + 0x1cfc) + 0x192);
    }
    else {
      temp_v0 = 0;
    }
    return temp_v0;
  }
  return -1;
}
