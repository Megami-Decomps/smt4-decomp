/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010eea4` (_code @ 0x10eea4, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00559224; /* 0x559224 */

extern unsigned char FUN_0010ee78(unsigned int, unsigned int);


unsigned int * FUN_0010eea4(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned char temp_v0;
  
  param_1[2] = param_3;
  param_1[1] = param_2;
  *param_1 = (unsigned int)&DAT_00559224;
  temp_v0 = FUN_0010ee78(param_2,param_3);
  *(unsigned char *)(param_1 + 3) = temp_v0;
  return param_1;
}
