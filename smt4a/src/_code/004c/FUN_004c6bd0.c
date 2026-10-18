/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c6bd0` (_code @ 0x4c6bd0, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00184310. */


int FUN_004c6bd0(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  if ((param_2 != 0) && (temp_v0 = *(unsigned short *)(param_2 + 0x26), temp_v0 < 0x12)) {
    param_1 = param_1 & 0xffff;
    FUN_00184310();
    temp_v1 = 0;
    if (param_1 != 0) {
      temp_v1 = (int)*(char *)(param_1 + temp_v0 + 0xa0);
    }
    return temp_v1;
  }
  return 0;
}
