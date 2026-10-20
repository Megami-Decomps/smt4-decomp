/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c09f4` (_code @ 0x2c09f4, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_004651c0; /* 0x4651c0 */


unsigned int FUN_002c09f4(int param_1)

{
  DAT_004651c0 = DAT_004651c0 * 0x41c64e6d + 0x3039;
  return (DAT_004651c0 >> 0x10) * (param_1 + 1) >> 0x10;
}

} /* extern "C" */
