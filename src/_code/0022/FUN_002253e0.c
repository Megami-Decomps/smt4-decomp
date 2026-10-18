/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002253e0` (_code @ 0x2253e0, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00434210; /* 0x434210 */


int FUN_002253e0(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_00434210 != 0) {
    temp_v0 = (int)*(char *)(DAT_00434210 + 0x2f5);
  }
  return temp_v0;
}
