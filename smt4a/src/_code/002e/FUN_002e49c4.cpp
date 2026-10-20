/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e49c4` (_code @ 0x2e49c4, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


unsigned long long FUN_002e49c4(unsigned int param_1,int param_2,unsigned int param_3,int param_4)

{
  return romwright_piece_4_4(param_4 * param_1 +
                  param_3 * param_2 + (int)((unsigned long long)param_1 * (unsigned long long)param_3 >> 0x20),
                  (int)((unsigned long long)param_1 * (unsigned long long)param_3));
}

} /* extern "C" */
