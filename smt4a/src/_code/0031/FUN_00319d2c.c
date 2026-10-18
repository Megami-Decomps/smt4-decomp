/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00319d2c` (_code @ 0x319d2c, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned char FUN_00319d2c(int param_1,int param_2)

{
  unsigned int temp_v0;
  
  temp_v0 = ((param_2 << 0xc) / 100) * 0x14;
  if (temp_v0 < 0x1000) {
    temp_v0 = 0x1000;
  }
  return (unsigned int)(param_1 << 0xc) <= temp_v0;
}
