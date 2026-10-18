/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00293d04` (_code @ 0x293d04, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dcf0; /* 0x43dcf0 */


unsigned int FUN_00293d04(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0043dcf0 != 0) {
    if (*(int *)(DAT_0043dcf0 + 0x1c) == 3) {
      temp_v0 = 1;
    }
    else {
      temp_v0 = 0;
    }
  }
  return temp_v0;
}
