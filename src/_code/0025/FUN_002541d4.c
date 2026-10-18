/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002541d4` (_code @ 0x2541d4, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


unsigned long long FUN_002541d4(int param_1,unsigned int param_2)

{
  unsigned long long temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  temp_v0 = romwright_piece_4_4(param_1,param_2);
  if (param_1 != 0) {
    temp_v2 = *(unsigned int *)(param_1 + 0x54);
    temp_v3 = (temp_v2 & 0x3ff) != 0;
    if (temp_v3) {
      temp_v1 = (unsigned int)*(unsigned short *)(param_1 + 0x5e);
    }
    else {
      temp_v1 = 0;
    }
    temp_v0 = romwright_piece_4_4(temp_v1,temp_v2);
    if (temp_v3 && temp_v1 != 0) {
      temp_v3 = temp_v1 == 100;
      if (temp_v3) {
        temp_v1 = temp_v2 & 0x3ff;
      }
      temp_v0 = romwright_piece_4_4(temp_v1,temp_v2);
      if (!temp_v3) {
        temp_v0 = (unsigned long long)((temp_v2 & 0x3ff) * temp_v1) * 0x28f5c29;
        if (temp_v0 < 0x100000000) {
          temp_v0 = romwright_piece_4_4(1,(int)temp_v0);
        }
      }
    }
  }
  return romwright_piece_4_4((int)temp_v0,(int)(temp_v0 >> 0x20));
}
