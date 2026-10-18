/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00399ddc` (_code @ 0x399ddc, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f4c4; /* 0x57f4c4 */


unsigned int FUN_00399ddc(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0057f4c4 != 0) {
    if (*(int *)(DAT_0057f4c4 + 0x5f0) == 5) {
      temp_v0 = 1;
    }
    else {
      temp_v0 = 0;
    }
  }
  return temp_v0;
}
