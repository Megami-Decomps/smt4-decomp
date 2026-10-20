/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036bc6c` (_code @ 0x36bc6c, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_0036bc6c(unsigned int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = 0xffffffff;
  if ((param_1 < 0x10) && (temp_v1 = *(int *)(param_1 * 4 + 0x63f2f8), temp_v1 != 0)) {
    temp_v0 = *(unsigned int *)(temp_v1 + 0xb0);
  }
  return temp_v0;
}

} /* extern "C" */
