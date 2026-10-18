/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ddb50` (_code @ 0x3ddb50, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00434290; /* 0x434290 */

/* Supplied declaration required: FUN_0022699c. */


void FUN_003ddb50(short param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 1 native warning(s); review required */
  int temp_v0;
  float in_s0;
  float in_s1;
  float in_s2;
  
  temp_v0 = DAT_00434290;
  FUN_0022699c(DAT_00434290,(int)param_1,0,param_2);
  *(unsigned char *)(temp_v0 + 4) = 4;
  *(char *)(temp_v0 + 0x20) = (char)(int)(in_s0 * 100.0f);
  *(char *)(temp_v0 + 0x21) = (char)(int)(in_s1 * 100.0f);
  *(char *)(temp_v0 + 0x22) = (char)(int)(in_s2 * 100.0f);
  *(unsigned int *)(temp_v0 + 0x28) = param_3;
  return;
}
