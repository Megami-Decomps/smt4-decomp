/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f84c4` (_code @ 0x2f84c4, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int FUN_0030d450(int);
extern unsigned long long FUN_0030d458(int);


long long FUN_002f84c4(int param_1,unsigned int *param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  unsigned long long temp_v5;
  
  temp_v5 = FUN_0030d458(param_1 + 4);
  temp_v3 = (unsigned int)((unsigned long long)temp_v5 >> 0x20);
  if ((int)temp_v5 == 0) {
    temp_v0 = FUN_0030d450(param_1 + 4);
    temp_v2 = param_2[1];
    temp_v1 = *(unsigned int *)(temp_v0 + 0x2c);
    temp_v4 = *(unsigned int *)(temp_v0 + 0x28) <= *param_2;
    temp_v3 = (temp_v2 - temp_v1) - (unsigned int)!temp_v4;
    if (temp_v1 < temp_v2 || temp_v2 - temp_v1 < (unsigned int)temp_v4) {
      return romwright_piece_4_4(temp_v3,1);
    }
  }
  return (unsigned long long)temp_v3 << 0x20;
}
