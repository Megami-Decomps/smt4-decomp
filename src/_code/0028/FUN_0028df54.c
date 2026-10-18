/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028df54` (_code @ 0x28df54, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044deb8; /* 0x44deb8 */


void FUN_0028df54(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = DAT_0044deb8;
  *(unsigned char *)(DAT_0044deb8 + 0x3b) = 0;
  *(unsigned int *)(temp_v0 + 0xa8) = param_1;
  return;
}
