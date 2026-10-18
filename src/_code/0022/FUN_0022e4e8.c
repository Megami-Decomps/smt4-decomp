/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022e4e8` (_code @ 0x22e4e8, 0xa4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001f48f4(int, int);
extern int FUN_002992d8(unsigned short, int);
/* Supplied declaration required: FUN_002b9364. */


void FUN_0022e4e8(unsigned short *param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned short temp_v3;
  int temp_v4;
  
  temp_v1 = (unsigned int)*(unsigned short *)(param_2 + 0x46);
  FUN_002b9364();
  temp_v4 = temp_v1 + param_3 * 2;
  temp_v0 = *(unsigned short *)(temp_v4 + 0x6c);
  *param_1 = (*param_1 & 0xfc00) | (temp_v0 & 0x3ff);
  temp_v3 = *(unsigned short *)(temp_v4 + 0x6c) & 0xfc00;
  *param_1 = (temp_v0 & 0x3ff) | temp_v3;
  if ((temp_v0 & 0x3ff) == 0) {
    *param_1 = temp_v3 | 1;
  }
  temp_v4 = FUN_001f48f4(param_2 + 0x34,param_3);
  temp_v2 = FUN_002992d8(*param_1 >> 10,temp_v4);
  if (temp_v2 != 0) {
    *param_1 = (*param_1 & 0x3ff) | (unsigned short)(temp_v4 << 10);
  }
  return;
}
