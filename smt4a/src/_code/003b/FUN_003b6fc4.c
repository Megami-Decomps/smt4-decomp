/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b6fc4` (_code @ 0x3b6fc4, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f268; /* 0x57f268 */


int FUN_003b6fc4(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0057f268 != 0) {
    temp_v0 = (int)*(short *)(DAT_0057f268 + 0x3c);
  }
  return temp_v0;
}
