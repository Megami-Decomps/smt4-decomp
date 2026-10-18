/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e1558` (_code @ 0x2e1558, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dfc0; /* 0x43dfc0 */


unsigned int FUN_002e1558(unsigned int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = 0xffffffff;
  if ((DAT_0043dfc0 != 0) && (param_1 < 4)) {
    temp_v0 = *(unsigned int *)(DAT_0043dfc0 + param_1 * 4 + 0x630);
  }
  return temp_v0;
}
