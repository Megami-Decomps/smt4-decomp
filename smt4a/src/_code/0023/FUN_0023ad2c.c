/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023ad2c` (_code @ 0x23ad2c, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_0023ad2c(int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = *(unsigned int *)(param_1 + 0x3c) & 0x7f;
  if ((temp_v0 == 0x18 || temp_v0 == 1) &&
     (*(char *)(param_1 + 0x23) == '\x03' || *(char *)(param_1 + 0x23) == '\a')) {
    return 1;
  }
  return 0;
}
