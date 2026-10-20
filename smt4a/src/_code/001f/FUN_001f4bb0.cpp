/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f4bb0` (_code @ 0x1f4bb0, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f108; /* 0x57f108 */


unsigned int FUN_001f4bb0(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0057f108 != 0) {
    if (*(int *)(DAT_0057f108 + 0x1c) == 0x33) {
      temp_v0 = 1;
    }
    else {
      temp_v0 = 0;
    }
  }
  return temp_v0;
}

} /* extern "C" */
