/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fee5c` (_code @ 0x4fee5c, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004102d8(int, int, int, unsigned int);

extern int g_btlActionReflect; /* 0x5712f0 */

/* Supplied declaration required: FUN_004102d8. */


void FUN_004fee5c(short param_1,unsigned int param_2,unsigned short param_3,unsigned short param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = g_btlActionReflect;
  FUN_004102d8(g_btlActionReflect,(int)param_1,0,param_2);
  *(unsigned char *)(temp_v0 + 4) = 0x47;
  *(unsigned short *)(temp_v0 + 0x24) = param_3;
  *(unsigned short *)(temp_v0 + 0x26) = param_4;
  return;
}

} /* extern "C" */
