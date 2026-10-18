/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001557dc` (_code @ 0x1557dc, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_001557dc(unsigned short *param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  
  temp_v1 = (unsigned int)*param_1;
  temp_v2 = temp_v1 == 0;
  if (!temp_v2) {
    temp_v1 = temp_v1 - 0x220c;
    temp_v2 = temp_v1 == 0;
  }
  if ((!temp_v2) && (temp_v1 == 1)) {
    temp_v0 = (int)param_1 + *(int *)(param_1 + 2);
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
