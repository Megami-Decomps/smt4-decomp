/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cf2d8` (_code @ 0x2cf2d8, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dd24; /* 0x43dd24 */


void FUN_002cf2d8(void)

{
  int temp_v0;
  
  temp_v0 = DAT_0043dd24;
  *(unsigned char *)(DAT_0043dd24 + 0x74c) = 0;
  *(unsigned int *)(temp_v0 + 0x744) = 2;
  *(unsigned char *)(temp_v0 + 0x74d) = *(char *)(temp_v0 + 0x74d) == '\0';
  return;
}
