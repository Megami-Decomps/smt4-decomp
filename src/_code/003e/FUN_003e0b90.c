/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e0b90` (_code @ 0x3e0b90, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c1870(int, unsigned int, unsigned int);


unsigned int FUN_003e0b90(unsigned int param_1,int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  if (param_2 != 0) {
    temp_v0 = FUN_002c1870(param_2,param_1,8);
    if (temp_v0 == 0) {
      temp_v1 = 1;
    }
    else {
      temp_v1 = 0;
    }
  }
  return temp_v1;
}
