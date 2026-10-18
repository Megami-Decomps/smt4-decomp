/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027645c` (_code @ 0x27645c, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044cdf0; /* 0x44cdf0 */


void FUN_0027645c(int param_1)

{
  unsigned int temp_v0;
  
  if (DAT_0044cdf0 == 0) {
    return;
  }
  if (param_1 != 0) {
    temp_v0 = *(unsigned int *)(DAT_0044cdf0 + 0x50) | 0x20;
  }
  else {
    temp_v0 = *(unsigned int *)(DAT_0044cdf0 + 0x50) & 0xffffffdf;
  }
  *(unsigned int *)(DAT_0044cdf0 + 0x50) = temp_v0;
  return;
}
