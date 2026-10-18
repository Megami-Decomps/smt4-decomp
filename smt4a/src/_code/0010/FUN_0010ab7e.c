/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010ab7e` (_code @ 0x10ab7e, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002ee50c. */


unsigned long long FUN_0010ab7e(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  temp_v0 = FUN_002e6e26();
  FUN_002e6e34(&uStack_18,temp_v0 + 0x58);
  (**(romwright_code **)(*param_1 + 0x1c))(param_1);
  FUN_002ee50c(param_1,0);
  FUN_002e6e5c(&uStack_18);
  return romwright_piece_4_4(uStack_18,1);
}
