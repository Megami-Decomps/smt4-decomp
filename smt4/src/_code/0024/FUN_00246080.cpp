/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00246080` (_code @ 0x246080, 0xb0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022699c(int, int, int, unsigned int);
int btlGetMainState(void);

extern int g_btlActionReflect; /* 0x434290 */

/* Supplied declaration required: FUN_0022699c. */
extern short FUN_00255158(int, unsigned int);
extern int FUN_00293230(void);
/* Supplied declaration required: btlGetMainState. */


int FUN_00246080(short param_1,short param_2,unsigned int param_3,int param_4,int param_5)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  
  for (temp_v2 = *(int *)(g_btlActionReflect + 8); temp_v2 != 0; temp_v2 = *(int *)(temp_v2 + 0xc)) {
  }
  temp_v2 = g_btlActionReflect;
  FUN_0022699c(g_btlActionReflect,(int)param_1,(int)param_2,param_3);
  *(unsigned char *)(temp_v2 + 4) = 7;
  *(int *)(temp_v2 + 0x28) = param_5;
  *(int *)(temp_v2 + 0x14) = param_4;
  temp_v0 = FUN_00255158((int)*(short *)(param_4 + 0x62),1);
  *(short *)(temp_v2 + 0x24) = temp_v0 - 1;
  if (param_5 != 4) {
    if (param_5 == 3) {
      btlGetMainState();
      temp_v1 = FUN_00293230();
      if (temp_v1 == 0) {
        return temp_v2;
      }
    }
    *(unsigned char *)(temp_v2 + 5) = *(unsigned char *)(temp_v2 + 5) | 4;
  }
  return temp_v2;
}

} /* extern "C" */
