/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034a240` (_code @ 0x34a240, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f69c; /* 0x57f69c */


void FUN_0034a240(int param_1)

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
      *pbVar2 = *pbVar2 | 4;
    }
  }
  return;
}
