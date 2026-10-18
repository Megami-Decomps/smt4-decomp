/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00110594` (_code @ 0x110594, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00559390; /* 0x559390 */

extern unsigned int FUN_00132d3c(unsigned int *, unsigned int);
extern unsigned int FUN_002fb31c(unsigned int *, unsigned int);


unsigned int * FUN_00110594(unsigned int *param_1)

{
  unsigned int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00559390;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  temp_v0 = FUN_00132d3c(param_1 + 1,1);
  param_1[5] = temp_v0;
  *(unsigned int *)temp_v0 = temp_v0;
  *(unsigned int *)(param_1[5] + 4) = param_1[5];
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  temp_v0 = FUN_002fb31c(param_1 + 7,1);
  param_1[0xb] = temp_v0;
  *(unsigned int *)temp_v0 = temp_v0;
  *(unsigned int *)(param_1[0xb] + 4) = param_1[0xb];
  return param_1;
}
