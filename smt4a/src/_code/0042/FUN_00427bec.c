/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00427bec` (_code @ 0x427bec, 0x4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_004268ec. */


void FUN_00427bec(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  long long temp_v0;
  unsigned int unaff_r8;
  unsigned int unaff_r9;
  unsigned int temp_v1 [2];
  
  temp_v0 = (unsigned long long)unaff_r8 * (unsigned long long)unaff_r9 + romwright_piece_4_4(param_2,param_4);
  temp_v1[0] = (unsigned int)temp_v0;
  FUN_004268ec(temp_v1,1,param_1,(int)((unsigned long long)temp_v0 >> 0x20));
  return;
}
