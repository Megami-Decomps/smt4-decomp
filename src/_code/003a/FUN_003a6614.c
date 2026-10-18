/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a6614` (_code @ 0x3a6614, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e06c; /* 0x44e06c */

extern unsigned int FUN_002a497c(unsigned int);


unsigned int FUN_003a6614(void)

{
  unsigned int temp_v0;
  
  DAT_0044e06c = DAT_0044e06c - 1;
  if (DAT_0044e06c < 1) {
    temp_v0 = FUN_002a497c(0x17);
    return temp_v0;
  }
  return 1;
}
