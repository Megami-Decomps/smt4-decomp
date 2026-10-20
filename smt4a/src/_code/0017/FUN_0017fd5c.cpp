/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017fd5c` (_code @ 0x17fd5c, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


unsigned long long FUN_0017fd5c(unsigned int param_1,int param_2,unsigned int param_3)

{
  if ((int)(param_3 - 0x20) < 0) {
    return romwright_piece_4_4(param_2 >> (param_3 & 0xff),
                    (param_1 >> (param_3 & 0xff)) | (param_2 << ((0x20 - param_3) & 0xff)));
  }
  return romwright_piece_4_4(param_2 >> 0x1f,param_2 >> ((param_3 - 0x20) & 0xff));
}

} /* extern "C" */
