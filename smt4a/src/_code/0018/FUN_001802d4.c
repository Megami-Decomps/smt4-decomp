/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001802d4` (_code @ 0x1802d4, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f24c; /* 0x57f24c */


unsigned int FUN_001802d4(unsigned int param_1)

{
  unsigned int temp_v0;
  unsigned char temp_v1;
  
  temp_v1 = (int)*(short *)(DAT_0057f24c + 0x64e) == param_1;
  if (temp_v1) {
    param_1 = (unsigned int)*(unsigned char *)(DAT_0057f24c + 8);
  }
  if ((temp_v1 && param_1 == 1) && (*(short *)(DAT_0057f24c + 0x650) < 1)) {
    temp_v0 = 1;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
