/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032482c` (_code @ 0x32482c, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_005f1b70; /* 0x5f1b70 */
extern int DAT_005f1b74; /* 0x5f1b74 */


unsigned int FUN_0032482c(void)

{
  unsigned int temp_v0;
  
  if ((DAT_005f1b70 == '\0') || (DAT_005f1b74 < 200)) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 1;
  }
  return temp_v0;
}
