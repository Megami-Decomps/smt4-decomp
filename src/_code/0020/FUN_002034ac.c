/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002034ac` (_code @ 0x2034ac, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dd50; /* 0x43dd50 */


unsigned int FUN_002034ac(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(int *)(DAT_0043dd50 + 4);
  if ((temp_v0 == 0x11 || temp_v0 == 0x12) || (temp_v0 == 0x13)) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}
