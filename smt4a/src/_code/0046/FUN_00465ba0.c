/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00465ba0` (_code @ 0x465ba0, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00646e34; /* 0x646e34 */


int FUN_00465ba0(int param_1,int param_2)

{
  int temp_v0;
  
  if (param_2 < 0x10) {
    temp_v0 = param_1 + param_2 * 2 + 0xd0;
  }
  else if (param_2 < 0x20) {
    temp_v0 = (int)&DAT_00646e34 + param_2 * 2;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
