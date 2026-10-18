/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c00e8` (_code @ 0x2c00e8, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_004e3be0; /* 0x4e3be0 */
extern signed char DAT_004e3be1; /* 0x4e3be1 */


int FUN_002c00e8(unsigned int param_1)

{
  int temp_v0;
  
  if (param_1 < 2) {
    temp_v0 = (int)DAT_004e3be0;
  }
  else if (param_1 == 2) {
    temp_v0 = (int)DAT_004e3be1;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
