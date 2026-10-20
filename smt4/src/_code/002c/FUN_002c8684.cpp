/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c8684` (_code @ 0x2c8684, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameGetMapBlock(void);

extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: gameGetMapBlock. */


unsigned int FUN_002c8684(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  gameGetMapBlock();
  if ((((param_1 - 0x19U >= 6) && (param_1 != 0x66)) ||
      (temp_v0 = gameFlagIsSet(0x144), temp_v1 = 0, temp_v0 != 0)) &&
     (((param_1 - 0x1fU >= 5 && (param_1 != 0x67)) ||
      (temp_v0 = gameFlagIsSet(0x15a), temp_v1 = 0, temp_v0 != 0)))) {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
