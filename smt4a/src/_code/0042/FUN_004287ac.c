/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004287ac` (_code @ 0x4287ac, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_006428e4; /* 0x6428e4 */


int FUN_004287ac(int *param_1,unsigned int *param_2,int param_3)

{
  int temp_v0;
  
  if ((param_3 == *param_1) && (param_3 != 0)) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = -0x275ec73f;
  }
  if (-1 < temp_v0) {
    *param_2 = (unsigned int)&DAT_006428e4;
    temp_v0 = 0;
  }
  return temp_v0;
}
