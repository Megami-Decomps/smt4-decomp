/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024db9c` (_code @ 0x24db9c, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


long long FUN_0024db9c(unsigned int param_1,int param_2,unsigned int param_3)

{
  if ((int)(param_3 - 0x20) < 0) {
    return romwright_piece_4_4((param_2 << (param_3 & 0xff)) | (param_1 >> ((0x20 - param_3) & 0xff)),
                    param_1 << (param_3 & 0xff));
  }
  return (unsigned long long)(param_1 << ((param_3 - 0x20) & 0xff)) << 0x20;
}
