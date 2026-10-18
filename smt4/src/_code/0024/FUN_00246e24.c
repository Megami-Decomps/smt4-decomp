/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00246e24` (_code @ 0x246e24, 0xf0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00434290; /* 0x434290 */

/* Supplied declaration required: FUN_0022699c. */
/* Supplied declaration required: FUN_00282924. */
extern int FUN_002939f4(void);


unsigned int FUN_00246e24(short param_1,unsigned int param_2,int param_3,unsigned int param_4,int param_5)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = (int)(short)(param_1 + 1);
  temp_v0 = DAT_00434290;
  FUN_0022699c(DAT_00434290,temp_v1,0,param_2);
  *(unsigned char *)(temp_v0 + 4) = 0x13;
  *(int *)(temp_v0 + 0x14) = param_3;
  *(unsigned int *)(temp_v0 + 0x4c) = param_4;
  temp_v0 = DAT_00434290;
  FUN_0022699c(DAT_00434290,temp_v1,0,param_2);
  *(unsigned char *)(temp_v0 + 4) = 8;
  *(int *)(temp_v0 + 0x14) = param_3;
  *(unsigned int *)(temp_v0 + 0x28) = param_4;
  temp_v0 = DAT_00434290;
  FUN_0022699c(DAT_00434290,(int)param_1,0,param_2);
  *(unsigned char *)(temp_v0 + 4) = 0x1d;
  *(int *)(temp_v0 + 0x14) = param_3;
  *(unsigned int *)(temp_v0 + 0x28) = 1;
  *(unsigned int *)(temp_v0 + 0x4c) = param_4;
  if (param_5 != 0) {
    temp_v0 = FUN_002939f4();
    FUN_00282924(temp_v0,(int)*(short *)(param_3 + 0x62));
    if ((*(unsigned short *)(temp_v0 + 0x1c6) & 0x10) != 0) {
      temp_v0 = DAT_00434290;
      FUN_0022699c(DAT_00434290,temp_v1,0,param_2);
      *(unsigned char *)(temp_v0 + 4) = 0x1d;
      *(int *)(temp_v0 + 0x14) = param_3;
      *(unsigned int *)(temp_v0 + 0x28) = 0;
      *(unsigned int *)(temp_v0 + 0x4c) = 0x10;
    }
  }
  return 1;
}
