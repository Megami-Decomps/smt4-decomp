/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ddaf8` (_code @ 0x1ddaf8, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e144; /* 0x44e144 */


int FUN_001ddaf8(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0044e144 != 0) {
    temp_v0 = (int)*(char *)(DAT_0044e144 + 0x1e64);
  }
  return temp_v0;
}
