/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004084f8` (_code @ 0x4084f8, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002c2710(void);


void FUN_004084f8(unsigned int param_1,unsigned int param_2,int param_3)

{
  unsigned char temp_v0;
  int temp_v1;
  unsigned char *pbVar3;
  unsigned char temp_v2;
  
  temp_v1 = FUN_002c2710();
  if (param_1 < 0x200 && param_2 < 0x20) {
    pbVar3 = (unsigned char *)(temp_v1 + param_1 * 4 + (param_2 >> 3));
    temp_v0 = *pbVar3;
    temp_v2 = (unsigned char)(1 << (param_2 & 7));
    if (param_3 != 0) {
      temp_v2 = temp_v2 | temp_v0;
    }
    else {
      temp_v2 = temp_v0 & ~temp_v2;
    }
    *pbVar3 = temp_v2;
  }
  return;
}

} /* extern "C" */
