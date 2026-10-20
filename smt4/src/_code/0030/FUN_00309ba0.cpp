/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00309ba0` (_code @ 0x309ba0, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043dfc0; /* 0x43dfc0 */


unsigned int FUN_00309ba0(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0043dfc0 != 0) {
    if (*(int *)(DAT_0043dfc0 + 0x5ec) == 5) {
      temp_v0 = 1;
    }
    else {
      temp_v0 = 0;
    }
  }
  return temp_v0;
}

} /* extern "C" */
