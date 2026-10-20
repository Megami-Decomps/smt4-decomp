/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ba7b8` (_code @ 0x2ba7b8, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003fd63c(int, int);

extern int scrGetArg(unsigned int);
/* Supplied declaration required: FUN_003fd63c. */


unsigned int FUN_002ba7b8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = scrGetArg(0);
  FUN_003fd63c(temp_v0,1);
  if (temp_v0 == 0x206) {
    FUN_003fd63c(0x593,1);
  }
  else if (temp_v0 == 0x18b) {
    FUN_003fd63c(0x11f9,1);
    return 1;
  }
  if (temp_v0 != 0x1a6) {
    return 1;
  }
  FUN_003fd63c(0x11f9,1);
  return 1;
}

} /* extern "C" */
