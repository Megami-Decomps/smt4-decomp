/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1c88` (_code @ 0x2c1c88, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00570ab4; /* 0x570ab4 */


void FUN_002c1c88(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  int temp_v0;
  
  *param_1 = 0x3f000000;
  param_1[1] = 0x3f000000;
  param_1[2] = 0x3f000000;
  param_1[3] = 0x3f800000;
  if (DAT_00570ab4 != 0) {
    param_4 = (unsigned int)*(unsigned char *)(DAT_00570ab4 + 0x6c);
  }
  if (DAT_00570ab4 != 0 && param_4 != 0) {
    *param_1 = *(unsigned int *)(DAT_00570ab4 + 0x2c);
    temp_v0 = DAT_00570ab4;
    param_1[1] = *(unsigned int *)(DAT_00570ab4 + 0x30);
    param_1[2] = *(unsigned int *)(temp_v0 + 0x34);
  }
  return;
}
