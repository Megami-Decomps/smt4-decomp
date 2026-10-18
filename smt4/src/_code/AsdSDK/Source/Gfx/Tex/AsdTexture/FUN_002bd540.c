/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd540` (_code @ 0x2bd540, 0x22 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002bf0d8. */
extern int FUN_002c3984(void);
/* Supplied declaration required: FUN_002c3994. */


unsigned long long FUN_002bd540(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_002bf0d8();
  FUN_002c3994();
  temp_v0 = FUN_002c3984();
  *(int *)(temp_v0 * 2) = param_1;
  return romwright_piece_4_4(param_4,temp_v0 + param_1 * 2);
}
