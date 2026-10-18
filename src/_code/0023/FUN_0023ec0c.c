/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023ec0c` (_code @ 0x23ec0c, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_0023ec0c(int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  if (param_1 != 0) {
    temp_v1 = (int)*(short *)(param_1 + 0xe);
    if ((param_2 <= temp_v1) && (temp_v1 = param_2, param_2 < 1)) {
      temp_v1 = 1;
    }
    temp_v0 = (int)(short)temp_v1;
    *(short *)(param_1 + 0x2a) = (short)temp_v1;
  }
  return temp_v0;
}
