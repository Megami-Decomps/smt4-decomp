/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e0064` (_code @ 0x3e0064, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001801a4(void);


void FUN_003e0064(int param_1)

{
  int temp_v0;
  short temp_v1;
  
  temp_v0 = FUN_001801a4();
  temp_v1 = *(short *)(temp_v0 + 0x1c);
  if (param_1 <= temp_v1) {
    if (param_1 < 1) {
      param_1 = 1;
    }
    temp_v1 = (short)param_1;
  }
  *(short *)(temp_v0 + 0x2a) = temp_v1;
  return;
}
