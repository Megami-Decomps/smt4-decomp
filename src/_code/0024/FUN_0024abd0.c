/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024abd0` (_code @ 0x24abd0, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dcf0; /* 0x43dcf0 */


void FUN_0024abd0(void)

{
  int temp_v0;
  
  temp_v0 = DAT_0043dcf0;
  if (DAT_0043dcf0 != 0) {
    *(unsigned short *)(DAT_0043dcf0 + 0x3c) = 0;
    *(unsigned short *)(temp_v0 + 0x40) = 0xffff;
    *(unsigned short *)(temp_v0 + 0x3e) = 0;
  }
  return;
}
