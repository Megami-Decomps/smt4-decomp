/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034c8b8` (_code @ 0x34c8b8, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f290; /* 0x57f290 */


unsigned int FUN_0034c8b8(void)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  
  temp_v1 = 0;
  if (DAT_0057f290 != 0) {
    temp_v2 = *(int *)(DAT_0057f290 + 0x434) != 0x16;
    temp_v0 = DAT_0057f290;
    if (temp_v2) {
      temp_v0 = *(int *)(DAT_0057f290 + 0x488);
    }
    if (temp_v2 && temp_v0 != 0x16) {
      temp_v1 = 0;
    }
    else {
      temp_v1 = 1;
    }
  }
  return temp_v1;
}
