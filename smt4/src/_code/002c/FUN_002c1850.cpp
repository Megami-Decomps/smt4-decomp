/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1850` (_code @ 0x2c1850, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_002c1850(int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (param_1 != 0) {
    temp_v0 = (*(unsigned int *)(param_1 + 0x90) & 2) >> 1;
  }
  return temp_v0;
}

} /* extern "C" */
