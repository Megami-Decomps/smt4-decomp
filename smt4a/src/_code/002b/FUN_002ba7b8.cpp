/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ba7b8` (_code @ 0x2ba7b8, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameFlagSetValue(int, int);

extern int scrGetArg(unsigned int);
/* Supplied declaration required: gameFlagSetValue. */


unsigned int FUN_002ba7b8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = scrGetArg(0);
  gameFlagSetValue(temp_v0,1);
  if (temp_v0 == 0x206) {
    gameFlagSetValue(0x593,1);
  }
  else if (temp_v0 == 0x18b) {
    gameFlagSetValue(0x11f9,1);
    return 1;
  }
  if (temp_v0 != 0x1a6) {
    return 1;
  }
  gameFlagSetValue(0x11f9,1);
  return 1;
}

} /* extern "C" */
