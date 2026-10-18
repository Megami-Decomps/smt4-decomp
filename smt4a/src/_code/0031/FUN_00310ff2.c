/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00310ff2` (_code @ 0x310ff2, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern unsigned int FUN_002e7908(unsigned int *, unsigned int *);
/* Supplied declaration required: FUN_002e9afe. */
/* Supplied declaration required: FUN_002f4d2c. */


unsigned long long FUN_00310ff2(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  int uStack_c;
  
  uStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  uStack_c = param_4;
  FUN_002f4d2c(param_1,&uStack_c);
  temp_v0 = FUN_002e7908((unsigned int *)&uStack_18,(unsigned int *)&uStack_c);
  FUN_002e9afe(param_2,temp_v0);
  return romwright_piece_4_4(uStack_14,uStack_18);
}
