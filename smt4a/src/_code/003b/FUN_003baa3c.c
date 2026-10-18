/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003baa3c` (_code @ 0x3baa3c, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f590; /* 0x57f590 */


unsigned int FUN_003baa3c(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = DAT_0057f590;
  temp_v1 = 1;
  *(unsigned char *)(DAT_0057f590 + 0x92) = 1;
  *(unsigned char *)(temp_v0 + 0x8c) = 1;
  if (param_1 != 0) {
    temp_v1 = 0xffffffff;
  }
  *(unsigned int *)(temp_v0 + 0x84) = temp_v1;
  return 1;
}
