/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ad6a0` (_code @ 0x3ad6a0, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char FUN_002c5f60(int);


unsigned char FUN_003ad6a0(int param_1,int param_2)

{
  unsigned char temp_v0;
  
  if (param_2 < 1) {
    return 0;
  }
  temp_v0 = FUN_002c5f60(param_1 * 100);
  if (temp_v0 == 0) {
    return 0 < param_1;
  }
  if (temp_v0 >= 101) {
    temp_v0 = 100;
  }
  return temp_v0;
}
