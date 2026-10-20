/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00281000` (_code @ 0x281000, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_00281000(unsigned int *param_1,int param_2,int param_3,unsigned short param_4,unsigned short param_5)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  unsigned int in_s0;
  
  *param_1 = in_s0;
  *(short *)(param_1 + 1) = (short)param_2;
  *(short *)((int)param_1 + 6) = (short)param_3;
  if (param_2 == 3) {
    *(unsigned short *)(param_1 + 2) = param_4;
  }
  if (param_3 == 3) {
    *(unsigned short *)((int)param_1 + 10) = param_5;
  }
  return;
}

} /* extern "C" */
