/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00246d38` (_code @ 0x246d38, 0xe4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00434290; /* 0x434290 */

/* Supplied declaration required: FUN_0022699c. */
/* Supplied declaration required: FUN_0027da30. */
extern int FUN_002939f4(void);


unsigned int FUN_00246d38(short param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = 0;
  temp_v0 = *(short *)(param_3 + 0x62) < 0x6d;
  if (temp_v0) {
    temp_v1 = FUN_002939f4();
    FUN_0027da30(temp_v1,(int)*(short *)(param_3 + 0x62));
    if (temp_v1 != 0) {
      temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 0xfa);
    }
  }
  if (param_4 != 0) {
    temp_v1 = DAT_00434290;
    FUN_0022699c(DAT_00434290,(int)param_1,0,param_2);
    *(unsigned char *)(temp_v1 + 4) = 0x1d;
    *(int *)(temp_v1 + 0x14) = param_3;
    temp_v2 = temp_v2 & ~param_4;
    *(unsigned int *)(temp_v1 + 0x28) = 0;
    *(unsigned int *)(temp_v1 + 0x4c) = param_4;
  }
  if ((temp_v0) && ((temp_v2 & 0x586) == 0)) {
    temp_v1 = DAT_00434290;
    FUN_0022699c(DAT_00434290,(int)(short)(param_1 + 1),0,param_2);
    *(unsigned char *)(temp_v1 + 4) = 0x14;
    *(int *)(temp_v1 + 0x14) = param_3;
    temp_v1 = DAT_00434290;
    FUN_0022699c(DAT_00434290,(int)(short)(param_1 + 1),0,param_2);
    *(unsigned char *)(temp_v1 + 4) = 10;
    *(int *)(temp_v1 + 0x14) = param_3;
    *(unsigned int *)(temp_v1 + 0x28) = param_4;
  }
  return 1;
}
