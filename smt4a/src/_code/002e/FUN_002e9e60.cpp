/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e9e60` (_code @ 0x2e9e60, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ebc50(int, int *);

extern unsigned char DAT_005949d8; /* 0x5949d8 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002ebc50. */


unsigned long long FUN_002e9e60(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int uStack_10;
  int uStack_c;
  
  uStack_10 = param_3;
  uStack_c = param_4;
  FUN_002ebc50((*(int *)((unsigned char *)&DAT_005949d8 + 0x4)) + 0x14,&uStack_10);
  FUN_002ebc50((*(int *)((unsigned char *)&DAT_005949d8 + 0x4)) + 0x70,&uStack_c);
  return romwright_piece_4_4(param_2,param_1);
}

} /* extern "C" */
