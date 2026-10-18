/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ef9e0` (_code @ 0x3ef9e0, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_003f0e20. */


int FUN_003ef9e0(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_003f0e20(param_1,(int)*(short *)(param_2 + 0x6a));
  if (param_1 != 0) {
    temp_v0 = 0;
    do {
      temp_v1 = param_1 + temp_v0 * 2;
      if (*(short *)(param_2 + 0x6a) == *(short *)(temp_v1 + 8)) {
        return temp_v0;
      }
      if (*(short *)(param_2 + 0x6a) == *(short *)(temp_v1 + 10)) {
        return temp_v0 + 1;
      }
      temp_v0 = temp_v0 + 2;
    } while (temp_v0 < 0x32);
  }
  return -1;
}
