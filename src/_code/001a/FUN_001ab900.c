/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ab900` (_code @ 0x1ab900, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e18c; /* 0x43e18c */
extern int DAT_0043e190; /* 0x43e190 */
extern int DAT_0043e194; /* 0x43e194 */


unsigned char FUN_001ab900(void)

{
  unsigned char temp_v0;
  
  if (((*(char *)(DAT_0043e18c + 0x83) != '\0') || (*(char *)(DAT_0043e190 + 0x83) != '\0')) ||
     (temp_v0 = 0, *(char *)(DAT_0043e194 + 0x83) != '\0')) {
    temp_v0 = 1;
  }
  return temp_v0;
}
