/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00319ca4` (_code @ 0x319ca4, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f134; /* 0x57f134 */


unsigned int FUN_00319ca4(void)

{
  char temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  if (DAT_0057f134 != 0) {
    temp_v0 = *(char *)(DAT_0057f134 + 4);
    if ((temp_v0 == '\x03' || temp_v0 == '\x05') || (temp_v0 == '\x06' || temp_v0 == '\a')) {
      temp_v1 = 1;
    }
    else {
      temp_v1 = 0;
    }
  }
  return temp_v1;
}
