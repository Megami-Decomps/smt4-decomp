/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034efb0` (_code @ 0x34efb0, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_005710dc; /* 0x5710dc */


unsigned int FUN_0034efb0(void)

{
  unsigned int temp_v0;
  
  if ((DAT_005710dc == 0) || (temp_v0 = 0, *(char *)(DAT_005710dc + 0xaa) != '\0')) {
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
