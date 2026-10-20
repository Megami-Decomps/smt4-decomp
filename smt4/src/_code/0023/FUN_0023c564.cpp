/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023c564` (_code @ 0x23c564, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022699c(int, int, int, unsigned int);

extern int g_btlActionReflect; /* 0x434290 */

/* Supplied declaration required: FUN_0022699c. */


unsigned int
FUN_0023c564(short param_1,unsigned int param_2,unsigned int param_3,int param_4,unsigned short param_5)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = g_btlActionReflect;
  FUN_0022699c(g_btlActionReflect,(int)param_1,0,param_2);
  if (param_4 != 0) {
    *(unsigned char *)(temp_v0 + 5) = *(unsigned char *)(temp_v0 + 5) | 4;
  }
  *(unsigned int *)(temp_v0 + 0x28) = param_3;
  *(unsigned char *)(temp_v0 + 4) = 0x16;
  *(short *)(temp_v0 + 0x24) = (short)param_4;
  *(unsigned short *)(temp_v0 + 0x26) = param_5;
  return 1;
}

} /* extern "C" */
