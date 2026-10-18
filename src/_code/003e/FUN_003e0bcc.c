/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e0bcc` (_code @ 0x3e0bcc, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_003e0bcc(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = (int)(param_1[1] - *param_1) >> 1;
  if (temp_v0 < 0x101) {
    *param_2 = temp_v0;
    param_2[1] = *param_1;
    temp_v1 = 0;
  }
  else {
    temp_v1 = 0xe0e046c7;
  }
  return temp_v1;
}
