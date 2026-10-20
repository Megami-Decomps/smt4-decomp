/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003de874` (_code @ 0x3de874, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022699c(int, int, int, unsigned int);

extern int g_btlActionReflect; /* 0x434290 */

/* Supplied declaration required: FUN_0022699c. */


void FUN_003de874(short param_1,short param_2,unsigned int param_3,unsigned int param_4,
                 unsigned long long param_5,unsigned int param_6)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = g_btlActionReflect;
  FUN_0022699c(g_btlActionReflect,(int)param_1,(int)param_2,param_3);
  *(unsigned char *)(temp_v0 + 4) = 2;
  *(unsigned int *)(temp_v0 + 0x14) = param_4;
  *(unsigned int *)(temp_v0 + 0x28) = param_6;
  *(int *)(temp_v0 + 0x4c) = (int)param_5;
  *(int *)(temp_v0 + 0x1c) = (int)((unsigned long long)param_5 >> 0x20);
  return;
}

} /* extern "C" */
