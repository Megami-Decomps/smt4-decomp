/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040a55c` (_code @ 0x40a55c, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int gameDataBlocksGetStats(void);


void FUN_0040a55c(unsigned int param_1,int param_2)

{
  unsigned char temp_v0;
  int temp_v1;
  unsigned char *pbVar3;
  unsigned char temp_v2;
  
  if (param_1 < 0x20) {
    temp_v1 = gameDataBlocksGetStats();
    pbVar3 = (unsigned char *)(temp_v1 + 0x264 + (param_1 >> 3));
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
  return;
}

} /* extern "C" */
