/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00408338` (_code @ 0x408338, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0018719c(unsigned int);
extern int FUN_002c2710(void);


void FUN_00408338(int param_1,unsigned int param_2,int param_3)

{
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char *pbVar4;
  unsigned char temp_v3;
  
  temp_v1 = FUN_002c2710();
  temp_v2 = FUN_0018719c(0x4f);
  if ((temp_v2 == 0) || (temp_v2 = FUN_0018719c(0x41), temp_v2 != 0)) {
    if (param_1 > 0xbf) {
      temp_v1 = temp_v1 + param_1 * 8 + 0x2f0;
    }
    else {
      temp_v1 = temp_v1 + param_1 * 8 + 0xcf0;
    }
    pbVar4 = (unsigned char *)(temp_v1 + (param_2 >> 3));
    temp_v3 = (unsigned char)(1 << (param_2 & 7));
    if (param_3 != 0) {
      *pbVar4 = *pbVar4 | temp_v3;
    }
    else {
      *pbVar4 = *pbVar4 & ~temp_v3;
    }
  }
  return;
}

} /* extern "C" */
