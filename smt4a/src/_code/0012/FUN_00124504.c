/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00124504` (_code @ 0x124504, 0x46 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0059496c; /* 0x59496c */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */


long long FUN_00124504(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  if (DAT_0059496c != '\0') {
    uStack_18 = param_2;
    uStack_14 = param_3;
    uStack_10 = param_4;
    FUN_002e6e34(&uStack_18,param_1 + 0xb8);
    temp_v0 = *(unsigned int *)(param_1 + 0x1e8);
    temp_v1 = *(unsigned int *)(param_1 + 0xf8);
    FUN_002e6e5c(&uStack_18);
    return romwright_piece_4_4(uStack_18,(unsigned int)(temp_v0 < temp_v1));
  }
  if (*(unsigned int *)(param_1 + 0x1e8) < *(unsigned int *)(param_1 + 0xf8)) {
    return romwright_piece_4_4(param_2,1);
  }
  return (unsigned long long)param_2 << 0x20;
}
