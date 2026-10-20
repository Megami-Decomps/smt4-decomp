/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fcf64` (_code @ 0x4fcf64, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004102d8(int, int, int, unsigned int);

extern int DAT_005712f0; /* 0x5712f0 */

/* Supplied declaration required: FUN_004102d8. */


void FUN_004fcf64(short param_1,unsigned int param_2,unsigned short param_3,unsigned short param_4,
                 unsigned int param_5,unsigned int param_6)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  int temp_v0;
  unsigned int in_s0;
  
  temp_v0 = DAT_005712f0;
  FUN_004102d8(DAT_005712f0,(int)param_1,0,param_2);
  *(unsigned char *)(temp_v0 + 4) = 0x46;
  *(unsigned short *)(temp_v0 + 0x24) = param_3;
  *(unsigned short *)(temp_v0 + 0x26) = param_4;
  *(unsigned int *)(temp_v0 + 0x30) = in_s0;
  *(unsigned int *)(temp_v0 + 0x28) = param_5;
  *(unsigned int *)(temp_v0 + 0x4c) = param_6;
  return;
}

} /* extern "C" */
