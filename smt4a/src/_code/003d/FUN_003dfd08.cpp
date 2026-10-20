/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dfd08` (_code @ 0x3dfd08, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0014af84(void);


void FUN_003dfd08(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_0014af84();
  param_1 = *(short *)(temp_v0 + 0x2830e) + param_1;
  if (param_1 >= 1000) {
    param_1 = 999;
  }
  else if (param_1 < 0) {
    param_1 = 0;
  }
  *(short *)(temp_v0 + 0x2830e) = (short)param_1;
  return;
}

} /* extern "C" */
