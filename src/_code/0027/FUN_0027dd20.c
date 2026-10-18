/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027dd20` (_code @ 0x27dd20, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00282b94. */


int FUN_0027dd20(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_00282b94(param_1,(int)*(short *)(param_2 + 0x62));
  if (param_1 != 0) {
    temp_v0 = 0;
    do {
      temp_v1 = param_1 + temp_v0 * 2;
      if (*(short *)(param_2 + 0x62) == *(short *)(temp_v1 + 8)) {
        return temp_v0;
      }
      if (*(short *)(param_2 + 0x62) == *(short *)(temp_v1 + 10)) {
        return temp_v0 + 1;
      }
      temp_v0 = temp_v0 + 2;
    } while (temp_v0 < 0x32);
  }
  return -1;
}
