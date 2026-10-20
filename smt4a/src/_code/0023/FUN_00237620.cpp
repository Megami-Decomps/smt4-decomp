/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00237620` (_code @ 0x237620, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f114; /* 0x57f114 */

extern int FUN_00224880(unsigned int);


unsigned char FUN_00237620(void)

{
  int temp_v0;
  
  if (DAT_0057f114 != 0) {
    temp_v0 = FUN_00224880(*(unsigned int *)(DAT_0057f114 + 0xf4));
    return temp_v0 != 2;
  }
  return 0;
}

} /* extern "C" */
