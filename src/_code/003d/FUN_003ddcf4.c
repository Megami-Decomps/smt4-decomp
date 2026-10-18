/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ddcf4` (_code @ 0x3ddcf4, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00434290; /* 0x434290 */

/* Supplied declaration required: FUN_0022699c. */


void FUN_003ddcf4(short param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_00434290;
  FUN_0022699c(DAT_00434290,(int)param_1,0,param_2);
  *(unsigned char *)(temp_v0 + 4) = 0x10;
  *(unsigned int *)(temp_v0 + 0x28) = param_3;
  *(unsigned int *)(temp_v0 + 0x4c) = param_4;
  return;
}
