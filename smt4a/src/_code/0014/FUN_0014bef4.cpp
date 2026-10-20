/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014bef4` (_code @ 0x14bef4, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_005b40a0; /* 0x5b40a0 */


unsigned int FUN_0014bef4(int param_1)

{
  DAT_005b40a0 = DAT_005b40a0 * 0x41c64e6d + 0x3039;
  return (DAT_005b40a0 >> 0x10) * (param_1 + 1) >> 0x10;
}

} /* extern "C" */
