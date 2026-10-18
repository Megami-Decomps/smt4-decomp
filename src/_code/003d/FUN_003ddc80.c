/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ddc80` (_code @ 0x3ddc80, 0x90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00434290; /* 0x434290 */

/* Supplied declaration required: FUN_00226b2c. */
/* Supplied declaration required: FUN_00282b94. */
extern int FUN_00293c98(void);


unsigned int
FUN_003ddc80(short param_1,unsigned int param_2,unsigned int param_3,int param_4,int param_5,int param_6
            )

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_00434290;
  FUN_00226b2c(DAT_00434290,(int)param_1,0,param_2);
  *(unsigned char *)(temp_v0 + 4) = 0x2b;
  *(int *)(temp_v0 + 0x14) = param_4;
  *(unsigned int *)(temp_v0 + 0x28) = param_3;
  if (-1 < param_5) {
    temp_v0 = FUN_00293c98();
    FUN_00282b94(temp_v0,(int)*(short *)(param_4 + 0x62));
    if ((temp_v0 != 0) && (-1 < param_6)) {
      temp_v1 = DAT_00434290;
      FUN_00226b2c(DAT_00434290,(int)(short)param_5,0,param_2);
      *(unsigned char *)(temp_v1 + 4) = 6;
      *(int *)(temp_v1 + 0x18) = temp_v0;
      *(int *)(temp_v1 + 0x28) = param_6;
    }
  }
  return 1;
}
