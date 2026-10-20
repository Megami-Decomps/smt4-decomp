/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00344c6c` (_code @ 0x344c6c, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f114; /* 0x57f114 */


unsigned int FUN_00344c6c(void)

{
  unsigned int temp_v0;
  
  if ((DAT_0057f114 == 0) ||
     (*(int *)(DAT_0057f114 + 0x1a0) != 1 && *(int *)(DAT_0057f114 + 0x1a0) != 2)) {
    temp_v0 = 1;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
