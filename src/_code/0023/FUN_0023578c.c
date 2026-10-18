/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023578c` (_code @ 0x23578c, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_0023578c(int param_1,int param_2)

{
  int temp_v0;
  
  if (param_2 < 0x10) {
    temp_v0 = param_1 + param_2 * 2 + 0xa0;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
