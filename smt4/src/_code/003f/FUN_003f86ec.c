/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f86ec` (_code @ 0x3f86ec, 0xac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern unsigned int FUN_00235804(float);


unsigned long long FUN_003f86ec(unsigned int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  float in_s0;
  float in_s1;
  float in_s2;
  
  temp_v0 = FUN_00235804((in_s1 - in_s0) * in_s2);
  temp_v0 = temp_v0 & 0xffffff;
  temp_v2 = *(int *)(param_2 + 8);
  temp_v1 = 0;
  if (temp_v2 != 0 && *(int *)(param_2 + 0xc) != 0) {
    temp_v3 = *(int *)(*(int *)(*(int *)(param_2 + 0xc) + 0x164) + *(int *)(temp_v2 + 0x1c) * 4);
    temp_v1 = (*(unsigned int *)(*(int *)(temp_v3 + 8) + 0x2d4) & 0xfc3fffff) << 3;
    temp_v0 = temp_v0 | ((((*(unsigned int *)(temp_v3 + 0x1c) >> 2) & 7) | temp_v1) << 0x18);
    temp_v1 = ((temp_v1 & 0x1fffffff) >> 8) | ((*(unsigned int *)(*(int *)(temp_v3 + 0x2c) + 0x20) & 3) << 0x16) |
            ((*(unsigned char *)(temp_v2 + 0x25) & 0xf) << 0x11);
  }
  return romwright_piece_4_4(temp_v1 | (param_3 << 0x18),temp_v0);
}
