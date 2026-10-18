/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00295e30` (_code @ 0x295e30, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002b9024. */
extern int FUN_002c0cc4(void);
/* Supplied declaration required: FUN_002c0cec. */


unsigned long long FUN_00295e30(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  FUN_002c0cec(9,1);
  temp_v0 = FUN_002c0cc4();
  temp_v3 = *(int *)((temp_v0 + param_2 * 4) - 4);
  FUN_002b9024();
  temp_v0 = (param_3 - (unsigned int)*(unsigned char *)(param_1 + 3)) + 1;
  if (temp_v0 < 1) {
    temp_v1 = 100;
  }
  else {
    if (temp_v0 >= 11) {
      temp_v0 = 10;
    }
    FUN_002c0cec(9,2);
    temp_v2 = FUN_002c0cc4();
    temp_v1 = (unsigned int)*(unsigned short *)((temp_v2 + temp_v0 * 2) - 2);
  }
  temp_v1 = temp_v3 * temp_v1;
  return romwright_piece_4_4(temp_v1 * 0x51eb851f,temp_v1 / 100);
}
