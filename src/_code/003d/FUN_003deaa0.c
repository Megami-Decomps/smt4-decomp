/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003deaa0` (_code @ 0x3deaa0, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00434290; /* 0x434290 */

/* Supplied declaration required: FUN_00226b2c. */


void FUN_003deaa0(short param_1,short param_2,unsigned int param_3,unsigned int param_4,
                 unsigned long long param_5,unsigned int param_6)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_00434290;
  FUN_00226b2c(DAT_00434290,(int)param_1,(int)param_2,param_3);
  *(unsigned char *)(temp_v0 + 4) = 2;
  *(unsigned int *)(temp_v0 + 0x14) = param_4;
  *(unsigned int *)(temp_v0 + 0x28) = param_6;
  *(int *)(temp_v0 + 0x4c) = (int)param_5;
  *(int *)(temp_v0 + 0x1c) = (int)((unsigned long long)param_5 >> 0x20);
  return;
}
