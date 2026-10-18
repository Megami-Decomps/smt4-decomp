/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002292ac` (_code @ 0x2292ac, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f590; /* 0x57f590 */


void FUN_002292ac(void)

{
  int temp_v0;
  
  temp_v0 = DAT_0057f590;
  if (DAT_0057f590 != 0) {
    *(unsigned char *)(DAT_0057f590 + 0x30) = 1;
  }
  *(unsigned char *)(temp_v0 + 0x31) = 1;
  return;
}
