/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00501f78` (_code @ 0x501f78, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int rt_memcmp(int, unsigned int, unsigned int);


unsigned int FUN_00501f78(unsigned int param_1,int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  if (param_2 != 0) {
    temp_v0 = rt_memcmp(param_2,param_1,8);
    if (temp_v0 == 0) {
      temp_v1 = 1;
    }
    else {
      temp_v1 = 0;
    }
  }
  return temp_v1;
}

} /* extern "C" */
