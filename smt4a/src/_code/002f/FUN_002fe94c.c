/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fe94c` (_code @ 0x2fe94c, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00558ab4; /* 0x558ab4 */

extern unsigned int FUN_002ee998(unsigned int *, unsigned int);


unsigned int * FUN_002fe94c(unsigned int *param_1)

{
  unsigned int temp_v0;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  temp_v0 = FUN_002ee998(param_1 + 1,1);
  param_1[5] = temp_v0;
  *(unsigned int *)temp_v0 = temp_v0;
  *(unsigned int *)(param_1[5] + 4) = param_1[5];
  *param_1 = (unsigned int)&DAT_00558ab4;
  return param_1;
}
