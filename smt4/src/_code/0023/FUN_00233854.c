/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00233854` (_code @ 0x233854, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b8cc8. */


void FUN_00233854(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  if (temp_v0 < *(short *)(param_1 + 0x5a)) {
    do {
      FUN_002b8cc8();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(short *)(param_1 + 0x5a));
  }
  *(unsigned short *)(param_1 + 0x5a) = 0;
  return;
}
