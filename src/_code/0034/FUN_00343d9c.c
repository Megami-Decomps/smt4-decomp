/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00343d9c` (_code @ 0x343d9c, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002bbd40(void);


void FUN_00343d9c(unsigned int param_1,int param_2)

{
  unsigned char temp_v0;
  int temp_v1;
  unsigned char *pbVar3;
  unsigned char temp_v2;
  
  temp_v1 = FUN_002bbd40();
  pbVar3 = (unsigned char *)(temp_v1 + 0xc + (param_1 >> 3));
  temp_v0 = *pbVar3;
  temp_v2 = (unsigned char)(1 << (param_1 & 7));
  if (param_2 != 0) {
    temp_v2 = temp_v2 | temp_v0;
  }
  else {
    temp_v2 = temp_v0 & ~temp_v2;
  }
  *pbVar3 = temp_v2;
  return;
}
