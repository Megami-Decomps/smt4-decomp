/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1f28` (_code @ 0x2c1f28, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0043e0b8; /* 0x43e0b8 */
extern int DAT_0043e0bc; /* 0x43e0bc */


int FUN_002c1f28(void)

{
  int temp_v0;
  
  if (DAT_0043e0bc < 0) {
    temp_v0 = (int)DAT_0043e0b8;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
