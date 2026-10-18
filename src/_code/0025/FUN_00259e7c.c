/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00259e7c` (_code @ 0x259e7c, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dcb4; /* 0x43dcb4 */


int FUN_00259e7c(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0043dcb4 != 0) {
    temp_v0 = (int)*(short *)(DAT_0043dcb4 + 0x650);
  }
  return temp_v0;
}
