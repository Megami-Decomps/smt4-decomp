/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00167f08` (_code @ 0x167f08, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f0c8; /* 0x57f0c8 */


unsigned short FUN_00167f08(void)

{
  unsigned short temp_v0;
  
  temp_v0 = 0;
  if (DAT_0057f0c8 != 0) {
    temp_v0 = *(unsigned short *)(DAT_0057f0c8 + 0x5e6);
  }
  return temp_v0;
}

} /* extern "C" */
