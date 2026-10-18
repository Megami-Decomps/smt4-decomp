/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cd9f4` (_code @ 0x2cd9f4, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e2ac; /* 0x43e2ac */


unsigned int FUN_002cd9f4(int param_1)

{
  int temp_v0;
  unsigned char *pbVar2;
  
  if ((param_1 < 0x48) && (-1 < param_1)) {
    temp_v0 = param_1 + DAT_0043e2ac + 0x88;
    if (param_1 >= 0x40) {
      pbVar2 = (unsigned char *)(temp_v0 + 0x24b5c);
    }
    else {
      pbVar2 = (unsigned char *)(temp_v0 + 0x1ec10);
    }
    if (pbVar2 != (unsigned char *)0x0) {
      return (*pbVar2 & 4) >> 2;
    }
  }
  return 0;
}
