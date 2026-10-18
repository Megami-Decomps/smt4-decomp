/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00309b64` (_code @ 0x309b64, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dfc0; /* 0x43dfc0 */


unsigned int FUN_00309b64(void)

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
