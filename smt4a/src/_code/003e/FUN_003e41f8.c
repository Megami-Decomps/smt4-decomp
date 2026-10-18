/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e41f8` (_code @ 0x3e41f8, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00348d4c(void);


void FUN_003e41f8(unsigned int param_1,int param_2)

{
  unsigned char temp_v0;
  int temp_v1;
  unsigned char *pbVar3;
  unsigned char temp_v2;
  
  temp_v1 = FUN_00348d4c();
  temp_v2 = (unsigned char)(1 << (param_1 & 7));
  pbVar3 = (unsigned char *)(temp_v1 + (param_1 >> 3) + 0x12);
  temp_v0 = *pbVar3;
  if (param_2 != 0) {
    temp_v2 = temp_v2 | temp_v0;
  }
  else {
    temp_v2 = temp_v0 & ~temp_v2;
  }
  *pbVar3 = temp_v2;
  return;
}
