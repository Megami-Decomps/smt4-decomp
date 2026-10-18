/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c08ec` (_code @ 0x2c08ec, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f134; /* 0x57f134 */


unsigned int FUN_002c08ec(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0057f134 != 0) {
    if (*(int *)(DAT_0057f134 + 0x2c) < 0) {
      temp_v0 = 1;
    }
    else {
      temp_v0 = 0;
    }
  }
  return temp_v0;
}
