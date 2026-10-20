/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004feb50` (_code @ 0x4feb50, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);
int FUN_001568f8(int, int);
int FUN_004102d8(int, int, int, unsigned int);

extern int g_btlActionReflect; /* 0x5712f0 */

/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: FUN_001568f8. */
extern int FUN_003ef9e0(unsigned int, int);
/* Supplied declaration required: FUN_004102d8. */


int FUN_004feb50(short param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  
  if ((*(unsigned int *)(param_3 + 0x50) & 1) != 0) {
    temp_v0 = *(int *)(g_btlActionReflect + 8);
    do {
      if (temp_v0 == 0) {
        temp_v0 = g_btlActionReflect;
        FUN_004102d8(g_btlActionReflect,(int)param_1,0,param_2);
        temp_v1 = btlGetMainState();
        FUN_001568f8(temp_v1,(int)*(short *)(param_3 + 0x6a));
        temp_v2 = btlGetMainState();
        temp_v3 = FUN_003ef9e0(temp_v2,param_3);
        if (temp_v3 < 0) {
          temp_v3 = 0;
        }
        *(unsigned char *)(temp_v0 + 4) = 0x30;
        *(int *)(temp_v0 + 0x14) = param_3;
        *(unsigned int *)(temp_v0 + 0x28) = param_4;
        *(short *)(temp_v0 + 0x24) = (short)*(unsigned int *)(temp_v1 + temp_v3 * 4 + 0xc);
        *(unsigned short *)(temp_v0 + 0x26) = *(unsigned short *)(param_3 + 0x6a);
        return temp_v0;
      }
      temp_v4 = (unsigned int)*(unsigned char *)(temp_v0 + 4);
      temp_v5 = temp_v4 == 0x30;
      if (temp_v5) {
        temp_v4 = *(unsigned int *)(temp_v0 + 8);
      }
      temp_v6 = temp_v5 && temp_v4 == param_2;
      if (temp_v5 && temp_v4 == param_2) {
        temp_v6 = *(int *)(temp_v0 + 0x14) == param_3;
      }
      temp_v0 = *(int *)(temp_v0 + 0xc);
    } while (!temp_v6);
  }
  return 0;
}

} /* extern "C" */
