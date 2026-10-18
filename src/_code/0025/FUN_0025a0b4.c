/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025a0b4` (_code @ 0x25a0b4, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dcb4; /* 0x43dcb4 */


int FUN_0025a0b4(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0043dcb4 != 0) {
    temp_v0 = (int)*(short *)(DAT_0043dcb4 + 0x650);
  }
  return temp_v0;
}
