/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e0090` (_code @ 0x3e0090, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int gameGetPlayerData(void);


void FUN_003e0090(int param_1)

{
  int temp_v0;
  short temp_v1;
  
  temp_v0 = gameGetPlayerData();
  temp_v1 = *(short *)(temp_v0 + 0x1e);
  if (param_1 <= temp_v1) {
    if (param_1 < 1) {
      param_1 = 1;
    }
    temp_v1 = (short)param_1;
  }
  *(short *)(temp_v0 + 0x2c) = temp_v1;
  return;
}

} /* extern "C" */
