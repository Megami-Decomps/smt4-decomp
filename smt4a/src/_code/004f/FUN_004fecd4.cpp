/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fecd4` (_code @ 0x4fecd4, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004102d8(int, int, int, unsigned int);

extern int g_btlActionReflect; /* 0x5712f0 */

/* Supplied declaration required: FUN_004102d8. */


void FUN_004fecd4(short param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = g_btlActionReflect;
  FUN_004102d8(g_btlActionReflect,(int)param_1,0,param_2);
  *(unsigned char *)(temp_v0 + 4) = 0x48;
  return;
}

} /* extern "C" */
