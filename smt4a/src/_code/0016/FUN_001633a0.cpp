/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001633a0` (_code @ 0x1633a0, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00573c78; /* 0x573c78 */


unsigned int FUN_001633a0(int param_1)

{
  DAT_00573c78 = DAT_00573c78 * 0x41c64e6d + 0x3039;
  return (DAT_00573c78 >> 0x10) * (param_1 + 1) >> 0x10;
}

} /* extern "C" */
