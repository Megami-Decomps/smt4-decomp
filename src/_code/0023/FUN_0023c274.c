/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023c274` (_code @ 0x23c274, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00434290; /* 0x434290 */

/* Supplied declaration required: FUN_00226b2c. */


void FUN_0023c274(short param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_00434290;
  FUN_00226b2c(DAT_00434290,(int)param_1,0,param_2);
  *(unsigned char *)(temp_v0 + 4) = 0x11;
  *(unsigned int *)(temp_v0 + 0x28) = param_3;
  *(unsigned int *)(temp_v0 + 0x4c) = param_4;
  return;
}
