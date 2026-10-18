/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd20c` (_code @ 0x2bd20c, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


unsigned long long FUN_002bd20c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int unaff_r4;
  
  *(int *)(param_1 * 2) = param_1;
  return romwright_piece_4_4(unaff_r4,param_1 * 3);
}
