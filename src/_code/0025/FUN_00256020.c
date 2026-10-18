/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00256020` (_code @ 0x256020, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00435e48; /* 0x435e48 */

/* Supplied declaration required: FUN_002c615c. */


int FUN_00256020(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = param_2;
  if (param_2 < param_1) {
    temp_v0 = param_1;
    param_1 = param_2;
  }
  DAT_00435e48 = DAT_00435e48 * 0x41c64e6d + 0x3039;
  FUN_002c615c(DAT_00435e48 >> 0x10,(temp_v0 - param_1) + 1);
  return temp_v1 + param_1;
}
