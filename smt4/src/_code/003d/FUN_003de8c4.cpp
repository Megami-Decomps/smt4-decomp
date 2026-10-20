/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003de8c4` (_code @ 0x3de8c4, 0xb0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022699c(int, int, int, unsigned int);
int FUN_0027da30(int, int);

extern int g_btlActionReflect; /* 0x434290 */

/* Supplied declaration required: FUN_0022699c. */
/* Supplied declaration required: FUN_0027da30. */
extern int btlGetMainState(void);


int FUN_003de8c4(short param_1,unsigned int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  
  if ((*(unsigned int *)(param_3 + 0x50) & 1) != 0) {
    temp_v1 = *(int *)(g_btlActionReflect + 8);
    do {
      if (temp_v1 == 0) {
        temp_v0 = btlGetMainState();
        temp_v1 = g_btlActionReflect;
        FUN_0022699c(g_btlActionReflect,(int)param_1,0,param_2);
        FUN_0027da30(temp_v0,(int)*(short *)(param_3 + 0x62));
        *(unsigned char *)(temp_v1 + 4) = 0x27;
        *(int *)(temp_v1 + 0x14) = param_3;
        *(short *)(temp_v1 + 0x24) = (short)*(unsigned int *)(temp_v0 + 0xc);
        return temp_v1;
      }
      temp_v2 = (unsigned int)*(unsigned char *)(temp_v1 + 4);
      temp_v3 = temp_v2 == 0x27;
      if (temp_v3) {
        temp_v2 = *(unsigned int *)(temp_v1 + 8);
      }
      temp_v4 = temp_v3 && temp_v2 == param_2;
      if (temp_v3 && temp_v2 == param_2) {
        temp_v4 = *(int *)(temp_v1 + 0x14) == param_3;
      }
      temp_v1 = *(int *)(temp_v1 + 0xc);
    } while (!temp_v4);
  }
  return 0;
}

} /* extern "C" */
