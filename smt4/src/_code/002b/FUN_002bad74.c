/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bad74` (_code @ 0x2bad74, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0044e3b0; /* 0x44e3b0 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


unsigned long long FUN_002bad74(void)

{
  return romwright_piece_4_4(0xe2d12000,(int)DAT_0044e3b0);
}
