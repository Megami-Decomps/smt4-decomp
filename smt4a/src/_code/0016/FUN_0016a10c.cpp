/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016a10c` (_code @ 0x16a10c, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_0016a10c(int param_1,unsigned int param_2)

{
  unsigned char temp_v0;
  
  temp_v0 = (param_2 & 1) != 0;
  *(unsigned int *)(param_1 + 0x24) = 0;
  if (temp_v0) {
    *(unsigned int *)(param_1 + 0x24) = 1;
  }
  if ((param_2 & 2) != 0) {
    *(unsigned int *)(param_1 + 0x24) = temp_v0 | 0x10;
  }
  return;
}

} /* extern "C" */
