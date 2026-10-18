/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029e2cc` (_code @ 0x29e2cc, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e144; /* 0x44e144 */


unsigned int FUN_0029e2cc(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if ((DAT_0044e144 != 0) && (temp_v0 = 0, *(int *)(DAT_0044e144 + 0x12e4) != 0)) {
    temp_v0 = 1;
  }
  return temp_v0;
}
