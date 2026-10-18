/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cd9e4` (_code @ 0x2cd9e4, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dee8; /* 0x43dee8 */


unsigned int FUN_002cd9e4(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if ((DAT_0043dee8 != 0) && (*(int *)(DAT_0043dee8 + 8) == 2)) {
    temp_v0 = 1;
  }
  return temp_v0;
}
