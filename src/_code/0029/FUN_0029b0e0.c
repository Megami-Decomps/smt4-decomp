/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029b0e0` (_code @ 0x29b0e0, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e144; /* 0x44e144 */


int FUN_0029b0e0(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0044e144 != 0) {
    temp_v0 = (int)*(char *)(DAT_0044e144 + 0x12ec);
  }
  return temp_v0;
}
