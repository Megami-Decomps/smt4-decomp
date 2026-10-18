/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031f190` (_code @ 0x31f190, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f69c; /* 0x57f69c */


void FUN_0031f190(unsigned int param_1,int param_2)

{
  int temp_v0;
  
  if ((param_1 < 0x501) && (temp_v0 = DAT_0057f69c + param_1 * 0x50, temp_v0 != -0x5f0c)) {
    if (param_2 == 0) {
      *(unsigned char *)(temp_v0 + 0x5f22) = *(unsigned char *)(temp_v0 + 0x5f22) & 0x3f;
      *(unsigned short *)(temp_v0 + 0x5f42) = *(unsigned short *)(temp_v0 + 0x5f42) & 0xf8ff;
      return;
    }
    *(unsigned char *)(temp_v0 + 0x5f22) = (*(unsigned char *)(temp_v0 + 0x5f22) & 0x3f) | 0x40;
    *(unsigned short *)(temp_v0 + 0x5f42) =
         ((unsigned short)(param_2 << 8) & 0x700) | (*(unsigned short *)(temp_v0 + 0x5f42) & 0xf8ff);
  }
  return;
}
