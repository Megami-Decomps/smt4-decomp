/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bcbb0` (_code @ 0x2bcbb0, 0x150 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_002bcbb0(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4)

{
/* irregular: irregular input(s): in_lr, in_r12; 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int unaff_r6;
  unsigned int in_r12;
  unsigned int in_lr;
  
  temp_v0 = (unsigned int)param_1 & 0x3ffff;
  *(unsigned int *)(temp_v0 * 0x80) = temp_v0 * 0x40;
  *param_4 = unaff_r6;
  param_4[1] = in_r12;
  param_4[2] = in_lr;
  param_1[temp_v0 * 0x10] = *param_1;
  *(unsigned short *)(param_1 + temp_v0 * 0x10 + 1) = *(unsigned short *)(param_1 + 1);
  return;
}
