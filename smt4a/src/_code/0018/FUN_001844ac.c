/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001844ac` (_code @ 0x1844ac, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0019a64c. */


int FUN_001844ac(unsigned int *param_1,unsigned int param_2,unsigned short param_3,unsigned short param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  *param_1 = param_2;
  *(unsigned short *)(param_1 + 1) = param_3;
  *(unsigned short *)((int)param_1 + 6) = param_4;
  temp_v0 = param_3 - 1;
  temp_v0 = ((unsigned int)param_3 - ((unsigned int)(param_1 + 0x10) & temp_v0)) & temp_v0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(unsigned int **)((int)param_1 + temp_v0 + 0x3c) = param_1;
  FUN_0019a64c();
  return (int)param_1 + temp_v0 + 0x40;
}
