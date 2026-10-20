/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004249c4` (_code @ 0x4249c4, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_004249c4(unsigned int param_1,int param_2)

{
  unsigned int temp_v0;
  
  if (param_2 == 0) {
    temp_v0 = 0;
  }
  else if (*(unsigned int *)(param_2 + 8) < 2) {
    temp_v0 = 2;
  }
  else {
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
