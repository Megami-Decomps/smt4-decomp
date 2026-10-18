/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eab1c` (_code @ 0x2eab1c, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


unsigned long long FUN_002eab1c(unsigned int *param_1,unsigned int *param_2)

{
  return romwright_piece_4_4((param_1[1] - param_2[1]) - (unsigned int)(*param_1 < *param_2),*param_1 - *param_2);
}
