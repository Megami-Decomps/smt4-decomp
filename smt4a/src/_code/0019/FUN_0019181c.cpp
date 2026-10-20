/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019181c` (_code @ 0x19181c, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055c5a8; /* 0x55c5a8 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


unsigned long long FUN_0019181c(unsigned int *param_1)

{
  *param_1 = (unsigned int)&DAT_0055c5a8;
  return romwright_piece_4_4(0x4000144,param_1);
}

} /* extern "C" */
