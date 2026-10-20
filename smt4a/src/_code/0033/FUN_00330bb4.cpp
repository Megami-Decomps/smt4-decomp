/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00330bb4` (_code @ 0x330bb4, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f69c; /* 0x57f69c */


unsigned int FUN_00330bb4(int param_1)

{
  int temp_v0;
  unsigned char *pbVar2;
  
  if ((param_1 < 0x48) && (-1 < param_1)) {
    temp_v0 = param_1 + DAT_0057f69c + 0x88;
    if (param_1 >= 0x40) {
      pbVar2 = (unsigned char *)(temp_v0 + 0x27e70);
    }
    else {
      pbVar2 = (unsigned char *)(temp_v0 + 0x21548);
    }
    if (pbVar2 != (unsigned char *)0x0) {
      return (*pbVar2 & 4) >> 2;
    }
  }
  return 0;
}

} /* extern "C" */
