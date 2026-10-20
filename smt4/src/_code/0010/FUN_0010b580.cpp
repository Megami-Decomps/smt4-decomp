/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010b580` (_code @ 0x10b580, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int gameGetMapBlock(void);


void FUN_0010b580(void)

{
  unsigned char temp_v0;
  int temp_v1;
  short *psVar3;
  unsigned char *pbVar4;
  int temp_v2;
  
  temp_v1 = gameGetMapBlock();
  temp_v2 = 0x10;
  pbVar4 = (unsigned char *)(temp_v1 + 0xf20);
  psVar3 = (short *)(temp_v1 + 0xf28);
  do {
    temp_v0 = *pbVar4;
    if ((((temp_v0 & 1) != 0 && (temp_v0 & 4) != 0) && (temp_v0 & 2) != 0) && ((temp_v0 & 8) == 0)) {
      if (0 < *psVar3) {
        *psVar3 = *psVar3 - 1;
      }
      if (*psVar3 == 0) {
        *pbVar4 = temp_v0 | 8;
      }
    }
    temp_v2 = temp_v2 - 1;
    pbVar4 = pbVar4 + 0x14;
    psVar3 = psVar3 + 10;
  } while (temp_v2 != 0);
  return;
}

} /* extern "C" */
