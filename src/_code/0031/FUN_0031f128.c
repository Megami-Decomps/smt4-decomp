/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031f128` (_code @ 0x31f128, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0027eb98(unsigned int);
/* Supplied declaration required: FUN_0028df54. */


unsigned int FUN_0031f128(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0027eb98(*param_1);
  if (*(short *)(*(int *)(temp_v0 + 0x20) + 0x8e) >= 1) {
    FUN_0028df54(1);
  }
  else {
    FUN_0028df54(0 < *(short *)(*(int *)(temp_v0 + 0x20) + 0x92));
  }
  return 1;
}
