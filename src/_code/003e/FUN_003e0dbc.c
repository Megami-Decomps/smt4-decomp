/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e0dbc` (_code @ 0x3e0dbc, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c1a48(int, unsigned int, unsigned int);


unsigned int FUN_003e0dbc(unsigned int param_1,int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  if (param_2 != 0) {
    temp_v0 = FUN_002c1a48(param_2,param_1,8);
    if (temp_v0 == 0) {
      temp_v1 = 1;
    }
    else {
      temp_v1 = 0;
    }
  }
  return temp_v1;
}
