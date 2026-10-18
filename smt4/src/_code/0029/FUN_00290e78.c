/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00290e78` (_code @ 0x290e78, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e190; /* 0x43e190 */


unsigned char FUN_00290e78(void)

{
  char temp_v0;
  
  temp_v0 = '\0';
  if (DAT_0043e190 != 0) {
    temp_v0 = *(char *)(DAT_0043e190 + 8);
  }
  return DAT_0043e190 == 0 || temp_v0 == '\0';
}
