/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00126aec` (_code @ 0x126aec, 0x5a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_00126aec(int param_1,int param_2,int param_3)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned short temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned short temp_v8 [16];
  
  temp_v4 = 0;
  temp_v5 = 1;
  do {
    temp_v2 = temp_v5 + 1;
    temp_v4 = (*(short *)((temp_v5 * 2 + param_3) - 2) + temp_v4) * 2;
    temp_v8[temp_v5] = temp_v4;
    temp_v5 = temp_v2;
  } while (temp_v2 < 0x10);
  for (temp_v5 = 0; temp_v5 <= param_2; temp_v5 = temp_v5 + 1) {
    temp_v3 = (unsigned int)*(unsigned short *)(temp_v5 * 4 + param_1 + 2);
    if (temp_v3 != 0) {
      temp_v4 = temp_v8[temp_v3];
      temp_v8[temp_v3] = temp_v4 + 1;
      temp_v1 = (unsigned int)temp_v4;
      temp_v0 = 0;
      do {
        temp_v6 = temp_v0;
        temp_v7 = temp_v1 & 1;
        temp_v3 = temp_v3 - 1;
        temp_v1 = temp_v1 >> 1;
        temp_v0 = (temp_v7 | temp_v6) << 1;
      } while (0 < (int)temp_v3);
      *(unsigned short *)(param_1 + temp_v5 * 4) = (unsigned short)temp_v7 | (unsigned short)temp_v6;
    }
  }
  return;
}
