/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00161044` (_code @ 0x161044, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0061a594; /* 0x61a594 */


void FUN_00161044(int param_1,unsigned int param_2,int param_3)

{
  unsigned char temp_v0;
  
  temp_v0 = param_1 == 0x400;
  if (!temp_v0) {
    param_3 = param_1 - 0x401;
    temp_v0 = param_3 == 0;
  }
  if (temp_v0) {
    DAT_0061a594 = param_1 - 0x400;
  }
  else if (param_3 == 0xf) {
    DAT_0061a594 = 2;
  }
  return;
}

} /* extern "C" */
