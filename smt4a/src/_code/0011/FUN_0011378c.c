/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011378c` (_code @ 0x11378c, 0x3a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002fe278. */


unsigned long long FUN_0011378c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  temp_v0 = FUN_002e6e26();
  FUN_002e6e34(&uStack_18,temp_v0 + 0x58);
  param_1 = param_1 + 0x50;
  FUN_002fe278(param_1,param_2);
  if (param_1 != 0) {
    temp_v1 = *(unsigned int *)(param_1 + 0x78);
    FUN_002e6e5c(&uStack_18);
    return romwright_piece_4_4(uStack_18,temp_v1);
  }
  FUN_002e6e5c(&uStack_18);
  return romwright_piece_4_4(uStack_18,0xffffffff);
}
