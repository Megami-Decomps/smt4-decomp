/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b4c74` (_code @ 0x1b4c74, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0044cfd4; /* 0x44cfd4 */


void FUN_001b4c74(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0044cfd4 != 0) {
    temp_v0 = *(int *)(DAT_0044cfd4 + 8);
  }
  if (DAT_0044cfd4 == 0 || temp_v0 == 0) {
    return;
  }
  *(unsigned int *)(temp_v0 + 0x20) = *(unsigned int *)(temp_v0 + 0x20) | 0x80;
  return;
}

} /* extern "C" */
