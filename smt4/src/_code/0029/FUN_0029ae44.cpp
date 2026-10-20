/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029ae44` (_code @ 0x29ae44, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0044e144; /* 0x44e144 */


int FUN_0029ae44(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0044e144 != 0) {
    temp_v0 = (int)*(char *)(DAT_0044e144 + 0x12ec);
  }
  return temp_v0;
}

} /* extern "C" */
