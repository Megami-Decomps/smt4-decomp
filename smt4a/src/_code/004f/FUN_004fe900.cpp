/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fe900` (_code @ 0x4fe900, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004102d8(int, int, int, unsigned int);

extern int DAT_005712f0; /* 0x5712f0 */

/* Supplied declaration required: FUN_004102d8. */


unsigned int
FUN_004fe900(short param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,short param_5,
            unsigned int param_6,unsigned int param_7,int param_8)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_005712f0;
  FUN_004102d8(DAT_005712f0,(int)param_1,0,param_2);
  if (param_8 == 0) {
    *(unsigned char *)(temp_v0 + 5) = *(unsigned char *)(temp_v0 + 5) | 4;
  }
  *(unsigned char *)(temp_v0 + 4) = 0x2b;
  *(unsigned int *)(temp_v0 + 0x14) = param_3;
  *(unsigned int *)(temp_v0 + 0x28) = param_6;
  *(unsigned int *)(temp_v0 + 0x4c) = param_4;
  temp_v0 = DAT_005712f0;
  FUN_004102d8(DAT_005712f0,(int)(short)(param_1 + param_5),0,param_2);
  if (param_8 == 0) {
    *(unsigned char *)(temp_v0 + 5) = *(unsigned char *)(temp_v0 + 5) | 4;
  }
  *(unsigned int *)(temp_v0 + 0x14) = param_3;
  *(unsigned char *)(temp_v0 + 4) = 0x2c;
  *(unsigned int *)(temp_v0 + 0x28) = param_7;
  *(unsigned int *)(temp_v0 + 0x4c) = 0;
  return 1;
}

} /* extern "C" */
