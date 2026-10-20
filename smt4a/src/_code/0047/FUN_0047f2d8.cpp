/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047f2d8` (_code @ 0x47f2d8, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_0047f2d8(unsigned int param_1)

{
  if (((param_1 & 0xfff) != 0) && ((param_1 & 0xffffff) >> 0xc != 0)) {
    return (param_1 << 0x14) | (((param_1 & 0xffffff) >> 0xc) << 8) | ((param_1 >> 0x14) & 0xf0) |
           (param_1 >> 0x1c);
  }
  return 0;
}

} /* extern "C" */
