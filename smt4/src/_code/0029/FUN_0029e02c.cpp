/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029e02c` (_code @ 0x29e02c, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0044e144; /* 0x44e144 */


unsigned int FUN_0029e02c(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if ((DAT_0044e144 != 0) && (temp_v0 = 0, *(int *)(DAT_0044e144 + 0x12e4) != 0)) {
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
