/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f87e8` (_code @ 0x2f87e8, 0xf bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e7232. */
/* Supplied declaration required: FUN_002eb6c0. */


unsigned long long FUN_002f87e8(int *param_1,int param_2,int *param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int *piStack_20;
  int iStack_1c;
  int *piStack_18;
  unsigned int uStack_14;
  
  temp_v0 = *param_3;
  piStack_20 = param_1;
  iStack_1c = temp_v0;
  piStack_18 = param_3;
  uStack_14 = param_4;
  FUN_002eb6c0(&piStack_20,param_2 + 4,&iStack_1c);
  *param_3 = (int)piStack_20;
  uStack_14 = 0;
  piStack_18 = (int *)0x0;
  *(unsigned int *)(temp_v0 + 0x108) = 0;
  *(unsigned int *)(temp_v0 + 0x10c) = 0;
  FUN_002e7232(temp_v0,temp_v0 + 0x110);
  *param_1 = *param_3;
  return romwright_piece_4_4(iStack_1c,piStack_20);
}
