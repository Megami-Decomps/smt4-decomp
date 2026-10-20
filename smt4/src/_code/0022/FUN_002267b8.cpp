/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002267b8` (_code @ 0x2267b8, 0x114 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022699c(int, int, int, unsigned int);
int FUN_0023c1bc(int, unsigned int, unsigned int);
int btlGetMainState(void);

extern int g_btlActionReflect; /* 0x434290 */

/* Supplied declaration required: FUN_0022699c. */
/* Supplied declaration required: FUN_0023c1bc. */
extern int FUN_00293230(void);
/* Supplied declaration required: btlGetMainState. */


unsigned int FUN_002267b8(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  btlGetMainState();
  temp_v0 = FUN_00293230();
  temp_v1 = (int)(short)param_1;
  if (temp_v0 != 0) {
    FUN_0023c1bc(0,param_2,param_1);
    temp_v2 = 0;
    temp_v0 = g_btlActionReflect;
    FUN_0022699c(g_btlActionReflect,temp_v1,0,param_2);
    *(unsigned char *)(temp_v0 + 5) = *(unsigned char *)(temp_v0 + 5) | 4;
    *(unsigned char *)(temp_v0 + 4) = 0x21;
    *(unsigned int *)(temp_v0 + 0x14) = param_3;
    *(unsigned int *)(temp_v0 + 0x28) = 0;
    *(unsigned int *)(temp_v0 + 0x4c) = 0;
    temp_v0 = g_btlActionReflect;
    FUN_0022699c(g_btlActionReflect,temp_v1,0,param_2);
  }
  else {
    FUN_0023c1bc(0,param_2,param_1);
    temp_v2 = 0x10;
    temp_v0 = g_btlActionReflect;
    FUN_0022699c(g_btlActionReflect,temp_v1,0,param_2);
    *(unsigned char *)(temp_v0 + 5) = *(unsigned char *)(temp_v0 + 5) | 4;
    *(unsigned char *)(temp_v0 + 4) = 0x21;
    *(unsigned int *)(temp_v0 + 0x14) = param_3;
    *(unsigned int *)(temp_v0 + 0x28) = 0;
    *(unsigned int *)(temp_v0 + 0x4c) = 0;
    temp_v0 = g_btlActionReflect;
    FUN_0022699c(g_btlActionReflect,temp_v1,0,param_2);
  }
  *(unsigned char *)(temp_v0 + 5) = *(unsigned char *)(temp_v0 + 5) | 4;
  *(unsigned int *)(temp_v0 + 0x14) = param_3;
  *(unsigned char *)(temp_v0 + 4) = 0x22;
  *(unsigned int *)(temp_v0 + 0x28) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x4c) = 0;
  return 1;
}

} /* extern "C" */
