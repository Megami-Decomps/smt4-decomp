/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00342088` (_code @ 0x342088, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0023d2ec(void);


void FUN_00342088(unsigned int param_1,unsigned int param_2,int param_3)

{
  int temp_v0;
  unsigned char *pbVar2;
  unsigned char temp_v1;
  
  temp_v0 = FUN_0023d2ec();
  pbVar2 = (unsigned char *)(temp_v0 + param_1 * 4 + 0x800 + (param_2 >> 3));
  temp_v1 = (unsigned char)(1 << (param_2 & 7));
  if (param_3 != 0) {
    *pbVar2 = temp_v1 | *pbVar2;
    temp_v0 = FUN_0023d2ec();
    pbVar2 = (unsigned char *)(temp_v0 + 0x22f0 + (param_1 >> 3));
    temp_v1 = (unsigned char)(1 << (param_1 & 7)) | *pbVar2;
  }
  else {
    temp_v1 = *pbVar2 & ~temp_v1;
  }
  *pbVar2 = temp_v1;
  return;
}

} /* extern "C" */
