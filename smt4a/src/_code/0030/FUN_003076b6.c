/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003076b6` (_code @ 0x3076b6, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_003076b6(int *param_1,int *param_2)

{
  unsigned int temp_v0;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    temp_v0 = 1;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0 ^ 1;
}
