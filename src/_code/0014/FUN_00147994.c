/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00147994` (_code @ 0x147994, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_00147994(int param_1)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (param_1 + 0xec000000U < 0x8000000) {
    temp_v0 = param_1 + 0xc000000;
  }
  else if ((param_1 + 0xe1000000U < 0x600000) || (param_1 == 0x1f600000)) {
    temp_v0 = param_1 - 0x7000000;
  }
  return temp_v0;
}
