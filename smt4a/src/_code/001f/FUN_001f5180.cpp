/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f5180` (_code @ 0x1f5180, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_001f5180(unsigned int *param_1,unsigned short param_2,short param_3)

{
/* irregular: irregular input(s): in_s0, in_s1; 2 native warning(s); review required */
  unsigned int in_s0;
  unsigned int in_s1;
  
  if (param_1 != (unsigned int *)0x0) {
    *param_1 = in_s0;
    param_1[1] = in_s1;
    *(unsigned short *)(param_1 + 4) = param_2;
    *(short *)((int)param_1 + 0x12) = -param_3;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}

} /* extern "C" */
