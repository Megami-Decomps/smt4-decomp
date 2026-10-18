/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dddf8` (_code @ 0x3dddf8, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00434290; /* 0x434290 */

/* Supplied declaration required: FUN_00226b2c. */


void FUN_003dddf8(short param_1,unsigned int param_2,unsigned int param_3,unsigned short param_4,
                 unsigned long long param_5,unsigned short param_6)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  for (temp_v0 = *(int *)(DAT_00434290 + 8); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0xc)) {
  }
  temp_v0 = DAT_00434290;
  FUN_00226b2c(DAT_00434290,(int)param_1,0,param_2);
  *(unsigned char *)(temp_v0 + 4) = 0xc;
  *(unsigned short *)(temp_v0 + 0x26) = param_6;
  *(unsigned short *)(temp_v0 + 0x24) = param_4;
  *(unsigned int *)(temp_v0 + 0x28) = param_3;
  *(int *)(temp_v0 + 0x4c) = (int)((unsigned long long)param_5 >> 0x20);
  *(int *)(temp_v0 + 0x2c) = (int)param_5;
  return;
}
