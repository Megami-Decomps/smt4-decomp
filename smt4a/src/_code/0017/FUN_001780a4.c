/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001780a4` (_code @ 0x1780a4, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
extern long long FUN_0017fd5c(unsigned int, int, unsigned int);


long long FUN_001780a4(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7;
  long long temp_v8;
  
  temp_v5 = *param_1;
  temp_v6 = param_1[1];
  temp_v8 = (unsigned long long)param_3 * (unsigned long long)temp_v6 +
          romwright_piece_4_4(((int)temp_v6 >> 0x1f) * param_3,
                   (int)((unsigned long long)param_3 * (unsigned long long)temp_v5 >> 0x20));
  temp_v0 = (unsigned int)((unsigned long long)temp_v8 >> 0x20);
  temp_v4 = (unsigned int)((unsigned long long)param_4 * (unsigned long long)temp_v6);
  temp_v3 = temp_v5 * ((int)param_4 >> 0x1f) + (int)((unsigned long long)param_4 * (unsigned long long)temp_v5 >> 0x20) +
          (unsigned int)romwright_carry_4((unsigned int)((unsigned long long)param_4 * (unsigned long long)temp_v5),(unsigned int)temp_v8);
  temp_v1 = temp_v0 + temp_v3 + temp_v4;
  temp_v2 = temp_v6 * ((int)param_4 >> 0x1f) +
          ((int)temp_v6 >> 0x1f) * param_4 + (int)((unsigned long long)param_4 * (unsigned long long)temp_v6 >> 0x20) +
          ((int)temp_v0 >> 0x1f) + ((int)temp_v3 >> 0x1f) + (unsigned int)romwright_carry_4(temp_v0,temp_v3) +
          (unsigned int)romwright_carry_4(temp_v0 + temp_v3,temp_v4);
  if ((int)param_4 < 0) {
    temp_v7 = romwright_carry_4(temp_v1,temp_v5);
    temp_v1 = temp_v1 + temp_v5;
    temp_v2 = temp_v2 + temp_v6 + (unsigned int)temp_v7;
  }
  temp_v8 = FUN_0017fd5c(temp_v1,temp_v2,param_5);
  return temp_v8 + (unsigned long long)(unsigned int)-((int)param_1[1] >> 0x1f);
}
