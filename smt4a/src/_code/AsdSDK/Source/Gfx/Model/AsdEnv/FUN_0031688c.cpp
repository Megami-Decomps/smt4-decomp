/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031688c` (_code @ 0x31688c, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_0031688c(int param_1,int param_2)

{
  unsigned int temp_v0;
  
  if (param_1 < 0) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = *(unsigned int *)(param_2 * 0x284 + param_1 * 4 + 0x635b64);
  }
  return temp_v0;
}

} /* extern "C" */
