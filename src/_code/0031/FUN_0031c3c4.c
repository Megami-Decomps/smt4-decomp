/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031c3c4` (_code @ 0x31c3c4, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dcf0; /* 0x43dcf0 */


int FUN_0031c3c4(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0043dcf0 != 0) {
    temp_v0 = (int)*(short *)(DAT_0043dcf0 + 0x3c);
  }
  return temp_v0;
}
