/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2a2c` (_code @ 0x2c2a2c, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004c63b4; /* 0x4c63b4 */


void FUN_002c2a2c(int param_1,unsigned int param_2,int param_3)

{
  unsigned char temp_v0;
  
  temp_v0 = param_1 == 0x400;
  if (!temp_v0) {
    param_3 = param_1 - 0x401;
    temp_v0 = param_3 == 0;
  }
  if (temp_v0) {
    DAT_004c63b4 = param_1 - 0x400;
  }
  else if (param_3 == 0xf) {
    DAT_004c63b4 = 2;
  }
  return;
}
