/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f86c8` (_code @ 0x3f86c8, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_003f86c8(unsigned int param_1)

{
  unsigned int temp_v0;
  
  if (param_1 >= 0x50) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 0;
    if (*(int *)(param_1 * 0x10 + 0x5e2218) != 0) {
      temp_v0 = 1;
    }
  }
  return temp_v0;
}
