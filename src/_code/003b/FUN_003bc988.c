/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bc988` (_code @ 0x3bc988, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_003bc988(int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  if (param_1 != 0) {
    temp_v1 = (int)*(short *)(param_1 + 0x10);
    if ((param_2 <= temp_v1) && (temp_v1 = param_2, param_2 < 1)) {
      temp_v1 = 1;
    }
    temp_v0 = (int)(short)temp_v1;
    *(short *)(param_1 + 0x2c) = (short)temp_v1;
  }
  return temp_v0;
}
