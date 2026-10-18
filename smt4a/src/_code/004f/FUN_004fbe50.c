/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fbe50` (_code @ 0x4fbe50, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005712f0; /* 0x5712f0 */

/* Supplied declaration required: FUN_004102d8. */


void FUN_004fbe50(short param_1,unsigned int param_2,unsigned int param_3,unsigned short param_4,
                 unsigned long long param_5,unsigned short param_6)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_005712f0;
  FUN_004102d8(DAT_005712f0,(int)param_1,0,param_2);
  *(unsigned char *)(temp_v0 + 4) = 0x10;
  *(unsigned int *)(temp_v0 + 0x28) = param_3;
  *(int *)(temp_v0 + 0x4c) = (int)((unsigned long long)param_5 >> 0x20);
  *(unsigned short *)(temp_v0 + 0x26) = param_6;
  *(unsigned short *)(temp_v0 + 0x24) = param_4;
  *(int *)(temp_v0 + 0x2c) = (int)param_5;
  return;
}
