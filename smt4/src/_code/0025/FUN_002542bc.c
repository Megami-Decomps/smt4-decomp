/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002542bc` (_code @ 0x2542bc, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044deb8; /* 0x44deb8 */


unsigned int FUN_002542bc(int param_1)

{
  return *(unsigned int *)(DAT_0044deb8 + param_1 * 4 + 0xd8);
}
