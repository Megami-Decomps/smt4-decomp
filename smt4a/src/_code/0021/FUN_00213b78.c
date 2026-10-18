/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00213b78` (_code @ 0x213b78, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0018719c(unsigned int);


unsigned int FUN_00213b78(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0018719c(0x4c8);
  if (temp_v0 != 0) {
    temp_v1 = 1;
  }
  else {
    temp_v0 = FUN_0018719c(0x4c9);
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = 2;
    }
  }
  return temp_v1;
}
