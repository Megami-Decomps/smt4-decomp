/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c58a8` (_code @ 0x3c58a8, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f214; /* 0x57f214 */


void FUN_003c58a8(unsigned char param_1,unsigned char param_2)

{
  int temp_v0;
  
  temp_v0 = DAT_0057f214;
  if (DAT_0057f214 != 0) {
    *(unsigned char *)(DAT_0057f214 + 0x1c) = param_2;
    *(unsigned char *)(temp_v0 + 0x1d) = param_1;
  }
  return;
}
