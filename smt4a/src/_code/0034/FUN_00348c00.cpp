/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00348c00` (_code @ 0x348c00, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f3b8; /* 0x57f3b8 */


unsigned int FUN_00348c00(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0057f3b8 != 0) {
    if (*(int *)(DAT_0057f3b8 + 8) == 3) {
      temp_v0 = 1;
    }
    else {
      temp_v0 = 0;
    }
  }
  return temp_v0;
}

} /* extern "C" */
