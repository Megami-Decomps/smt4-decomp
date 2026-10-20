/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c0a2c` (_code @ 0x2c0a2c, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int gameGetQuestCenterBlock(void);


int FUN_002c0a2c(int param_1,int param_2,int param_3)

{
  int temp_v0;
  
  temp_v0 = gameGetQuestCenterBlock();
  if (param_1 == 0) {
    return temp_v0 + ((param_2 - 1) * 7 + param_3) * 4 + 0x1c;
  }
  if (param_1 != 1) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = temp_v0 + ((param_2 * 2 - 2) + param_3) * 4 + 0x16c;
  }
  return temp_v0;
}

} /* extern "C" */
