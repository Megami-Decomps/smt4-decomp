/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029e1c8` (_code @ 0x29e1c8, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043dd24; /* 0x43dd24 */


unsigned char FUN_0029e1c8(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0043dd24 != 0) {
    temp_v0 = *(int *)(DAT_0043dd24 + 0x744);
  }
  return DAT_0043dd24 == 0 || temp_v0 == 4;
}

} /* extern "C" */
