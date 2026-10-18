/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fe2b8` (_code @ 0x2fe2b8, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002c5468. */


unsigned int FUN_002fe2b8(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = param_1[6];
  if ((int)(param_1[5] - (param_1[7] + (unsigned int)(param_1[4] < temp_v1))) <
      (int)(unsigned int)(param_1[4] - temp_v1 < param_2)) {
    temp_v0 = 0;
  }
  else {
    param_1[6] = temp_v1 + param_2;
    param_1[7] = param_1[7] + (unsigned int)romwright_carry_4(temp_v1,param_2);
    temp_v1 = *param_1;
    *param_1 = temp_v1 + param_2;
    param_1[1] = param_1[1] + (unsigned int)romwright_carry_4(temp_v1,param_2);
    software_interrupt(0x18);
    if ((int)param_1[0x13] < 0) {
      FUN_002c5468();
    }
    temp_v0 = 1;
  }
  return temp_v0;
}
