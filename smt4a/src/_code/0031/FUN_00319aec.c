/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00319aec` (_code @ 0x319aec, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f114; /* 0x57f114 */


void FUN_00319aec(unsigned char param_1)

{
  int temp_v0;
  
  temp_v0 = DAT_0057f114;
  if (DAT_0057f114 != 0) {
    *(unsigned char *)(DAT_0057f114 + 0x1a4) = param_1;
    *(unsigned int *)(temp_v0 + 0x1a0) = 1;
  }
  return;
}
