/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a17d4` (_code @ 0x2a17d4, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f698; /* 0x57f698 */


void FUN_002a17d4(int param_1)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057f698 + 0x4));
  temp_v1 = 0;
  do {
    temp_v2 = (unsigned int)*(unsigned short *)(param_1 + temp_v1 * 2 + 0x3c);
    if ((temp_v2 != 0) && (temp_v2 < 0x501)) {
      temp_v3 = temp_v0 + temp_v2 * 0x50;
      *(short *)(temp_v3 + 0x5f5a) = *(short *)(temp_v3 + 0x5f5a) + 1;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 3);
  if (*(unsigned short *)(param_1 + 0x44) < 0x501) {
    temp_v0 = temp_v0 + (unsigned int)*(unsigned short *)(param_1 + 0x44) * 0x50;
    *(short *)(temp_v0 + 0x5f5a) = *(short *)(temp_v0 + 0x5f5a) + 1;
  }
  return;
}

} /* extern "C" */
