/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a4b88` (_code @ 0x2a4b88, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_002a4b88(int param_1,int param_2,int param_3)

{
  int temp_v0;
  
  temp_v0 = 1;
  if (param_1 == 0x1406) {
    temp_v0 = 4;
  }
  return param_2 * temp_v0 + ((param_3 + 0x1fU) & 0xffffffe0);
}
