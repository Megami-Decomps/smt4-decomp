/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002268d0` (_code @ 0x2268d0, 0xc8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022699c(int, int, int, unsigned int);

extern int DAT_00434290; /* 0x434290 */

/* Supplied declaration required: FUN_0022699c. */
extern short FUN_00255158(int, unsigned int);


int FUN_002268d0(short param_1,short param_2,unsigned int param_3,int param_4,unsigned int param_5,
                unsigned int param_6,unsigned int param_7,unsigned char param_8,unsigned char param_9)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  short temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  
  temp_v0 = 0;
  temp_v4 = *(int *)(DAT_00434290 + 8);
  while (temp_v1 = temp_v4, temp_v1 != 0) {
    temp_v3 = (unsigned int)*(unsigned char *)(temp_v1 + 4);
    temp_v4 = *(int *)(temp_v1 + 0xc);
    temp_v5 = temp_v3 == 1;
    if (temp_v5) {
      temp_v3 = *(unsigned int *)(temp_v1 + 8);
    }
    if ((temp_v5 && temp_v3 == param_3) && (*(int *)(temp_v1 + 0x14) == param_4)) {
      temp_v0 = 1;
    }
  }
  temp_v4 = DAT_00434290;
  FUN_0022699c(DAT_00434290,(int)param_1,(int)param_2,param_3);
  *(int *)(temp_v4 + 0x14) = param_4;
  *(unsigned char *)(temp_v4 + 4) = 1;
  *(unsigned int *)(temp_v4 + 0x28) = param_7;
  *(unsigned int *)(temp_v4 + 0x4c) = param_5;
  *(unsigned int *)(temp_v4 + 0x1c) = param_6;
  *(unsigned char *)(temp_v4 + 0x22) = param_8;
  *(unsigned char *)(temp_v4 + 0x44) = param_9;
  if (!temp_v0) {
    temp_v2 = 0;
  }
  else {
    temp_v2 = FUN_00255158((int)*(short *)(param_4 + 0x62),1);
    temp_v2 = temp_v2 - 1;
  }
  *(short *)(temp_v4 + 0x24) = temp_v2;
  return temp_v4;
}

} /* extern "C" */
