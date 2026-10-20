/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c0db0` (_code @ 0x3c0db0, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f3b0; /* 0x57f3b0 */


unsigned int FUN_003c0db0(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0xffffffff;
  if (DAT_0057f3b0 != 0) {
    temp_v0 = *(unsigned int *)(DAT_0057f3b0 + 0x48);
  }
  return temp_v0;
}

} /* extern "C" */
