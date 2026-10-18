/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00343e44` (_code @ 0x343e44, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001c34e8(void);


void FUN_00343e44(int param_1,int param_2)

{
  unsigned char temp_v0;
  int temp_v1;
  unsigned char *pbVar3;
  unsigned char temp_v2;
  int temp_v3;
  
  temp_v3 = param_1 - 1;
  temp_v1 = FUN_001c34e8();
  pbVar3 = (unsigned char *)(temp_v1 + ((int)(temp_v3 + ((unsigned int)(temp_v3 >> 0x1f) >> 0x1d)) >> 3));
  temp_v2 = (unsigned char)(1 << (((param_1 - 1) + (temp_v3 / 8) * -8) & 0xffU));
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
