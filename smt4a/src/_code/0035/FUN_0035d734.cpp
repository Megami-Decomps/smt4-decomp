/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035d734` (_code @ 0x35d734, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f6d0; /* 0x57f6d0 */


unsigned int FUN_0035d734(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0057f6d0 != 0) {
    if ((*(char *)(DAT_0057f6d0 + 0x5c) == '\0') && (*(int *)(DAT_0057f6d0 + 0x58) == -1)) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = 1;
    }
  }
  return temp_v0;
}

} /* extern "C" */
