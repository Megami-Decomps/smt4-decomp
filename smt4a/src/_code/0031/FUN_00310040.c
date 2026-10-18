/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00310040` (_code @ 0x310040, 0x4a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002eb60c. */


unsigned int FUN_00310040(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_002eb60c(param_3,param_2,0xffffffff,param_2);
  *(unsigned char *)(temp_v0 * 0x10000 + 0x34) = 1;
  return 1;
}
