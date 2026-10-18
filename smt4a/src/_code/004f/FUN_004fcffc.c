/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fcffc` (_code @ 0x4fcffc, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005712f0; /* 0x5712f0 */

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_001568f8. */
/* Supplied declaration required: FUN_004102d8. */


unsigned int FUN_004fcffc(short param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = 0;
  temp_v0 = *(short *)(param_3 + 0x6a) < 0x6d;
  if (temp_v0) {
    temp_v1 = FUN_0014aa78();
    FUN_001568f8(temp_v1,(int)*(short *)(param_3 + 0x6a));
    if (temp_v1 != 0) {
      temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 0x110);
    }
  }
  if (param_4 != 0) {
    temp_v1 = DAT_005712f0;
    FUN_004102d8(DAT_005712f0,(int)param_1,0,param_2);
    *(unsigned char *)(temp_v1 + 4) = 0x26;
    *(int *)(temp_v1 + 0x14) = param_3;
    temp_v2 = temp_v2 & ~param_4;
    *(unsigned int *)(temp_v1 + 0x28) = 0;
    *(unsigned int *)(temp_v1 + 0x4c) = param_4;
  }
  if ((temp_v0) && ((temp_v2 & 0x582) == 0)) {
    temp_v1 = DAT_005712f0;
    FUN_004102d8(DAT_005712f0,(int)(short)(param_1 + 1),0,param_2);
    *(unsigned char *)(temp_v1 + 4) = 0x1c;
    *(int *)(temp_v1 + 0x14) = param_3;
    temp_v1 = DAT_005712f0;
    FUN_004102d8(DAT_005712f0,(int)(short)(param_1 + 1),0,param_2);
    *(unsigned char *)(temp_v1 + 4) = 0xb;
    *(int *)(temp_v1 + 0x14) = param_3;
    *(unsigned int *)(temp_v1 + 0x28) = param_4;
  }
  return 1;
}
