/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e6e9c` (_code @ 0x3e6e9c, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_003e6e9c(unsigned int param_1,int *param_2)

{
  unsigned int temp_v0;
  
  if (*param_2 != 0x4d545343) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 0;
    if (param_2[2] + 0xfe000000U < 0x10001) {
      temp_v0 = 1;
    }
  }
  return temp_v0;
}
