/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001584f8` (_code @ 0x1584f8, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_001584f8(int param_1,int param_2)

{
  unsigned int temp_v0;
  
  if (param_2 < 0x10) {
    temp_v0 = *(unsigned int *)(param_1 + param_2 * 4 + 0x8c);
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
