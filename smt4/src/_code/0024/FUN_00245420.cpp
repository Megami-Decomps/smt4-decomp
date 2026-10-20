/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00245420` (_code @ 0x245420, 0xa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022699c(int, int, int, unsigned int);
int btlMainFindEntryByListedId(int, int);

extern int g_btlActionReflect; /* 0x434290 */

/* Supplied declaration required: FUN_0022699c. */
/* Supplied declaration required: btlMainFindEntryByListedId. */
extern int btlGetMainState(void);


unsigned int
FUN_00245420(short param_1,unsigned int param_2,int param_3,unsigned int param_4,unsigned int param_5,
            int param_6,int param_7)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = g_btlActionReflect;
  FUN_0022699c(g_btlActionReflect,(int)param_1,0,param_2);
  *(unsigned char *)(temp_v0 + 4) = 0x2c;
  *(int *)(temp_v0 + 0x14) = param_3;
  *(unsigned int *)(temp_v0 + 0x28) = param_4;
  *(unsigned int *)(temp_v0 + 0x4c) = param_5;
  if (-1 < param_6) {
    temp_v0 = btlGetMainState();
    btlMainFindEntryByListedId(temp_v0,(int)*(short *)(param_3 + 0x62));
    if ((temp_v0 != 0) && (-1 < param_7)) {
      temp_v1 = g_btlActionReflect;
      FUN_0022699c(g_btlActionReflect,(int)(short)param_6,0,param_2);
      *(unsigned char *)(temp_v1 + 4) = 6;
      *(int *)(temp_v1 + 0x18) = temp_v0;
      *(int *)(temp_v1 + 0x28) = param_7;
    }
  }
  return 1;
}

} /* extern "C" */
