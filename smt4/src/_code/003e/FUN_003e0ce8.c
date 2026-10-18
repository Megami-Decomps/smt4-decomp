/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e0ce8` (_code @ 0x3e0ce8, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: ll_sdiv. */


int FUN_003e0ce8(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = 86400000;
  ll_sdiv(*param_1 + 0x7cfc8400,param_1[1] + 0x395f + (unsigned int)(0x83037bff < *param_1),86400000,0);
  temp_v0 = temp_v1 / 60000;
  temp_v1 = (int)(((long long)(int)temp_v0 * -0x77777777 + ((unsigned long long)temp_v0 << 0x20)) >> 0x20);
  return temp_v0 + ((temp_v1 >> 5) - (temp_v1 >> 0x1f)) * -0x3c;
}
