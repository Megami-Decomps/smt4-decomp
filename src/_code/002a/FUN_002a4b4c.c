/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a4b4c` (_code @ 0x2a4b4c, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_002a4b4c(int param_1,int param_2,int param_3,int param_4)

{
  int temp_v0;
  
  temp_v0 = 1;
  if (param_1 == 0x1406) {
    temp_v0 = 4;
  }
  temp_v0 = (param_3 + 8) * param_2 * temp_v0;
  return ((((param_4 + 0x1fU) & 0xffffffe0) + temp_v0 + 0x1f) & 0xffffffe0) + temp_v0 * 2;
}
