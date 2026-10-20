/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020eae8` (_code @ 0x20eae8, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0044cfd4; /* 0x44cfd4 */


unsigned char FUN_0020eae8(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0044cfd4 != 0) {
    temp_v0 = *(int *)(DAT_0044cfd4 + 8);
  }
  if (DAT_0044cfd4 != 0 && temp_v0 != 0) {
    return *(int *)(temp_v0 + 0x28) != 7;
  }
  return 1;
}

} /* extern "C" */
