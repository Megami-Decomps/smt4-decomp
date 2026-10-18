/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00254484` (_code @ 0x254484, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_00254484(int *param_1)

{
  int temp_v0;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0x52434254)) {
    temp_v0 = param_1[2];
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
