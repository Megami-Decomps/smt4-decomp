/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cc6a4` (_code @ 0x4cc6a4, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003da99c(unsigned int, unsigned int);
int FUN_003daaf8(unsigned int, unsigned int);

/* Supplied declaration required: FUN_003da99c. */
/* Supplied declaration required: FUN_003daaf8. */


void FUN_004cc6a4(unsigned int param_1,unsigned short *param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = param_1;
  FUN_003da99c(param_1,param_3);
  *param_2 = (short)temp_v0;
  FUN_003daaf8(param_1,param_3);
  param_2[1] = (short)param_1;
  return;
}

} /* extern "C" */
