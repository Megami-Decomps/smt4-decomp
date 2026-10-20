/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00203b1c` (_code @ 0x203b1c, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0018719c(unsigned int);


unsigned int FUN_00203b1c(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0018719c(0x534);
  if (temp_v0 == 0) {
    temp_v1 = 99;
  }
  else {
    temp_v1 = 999;
  }
  return temp_v1;
}

} /* extern "C" */
