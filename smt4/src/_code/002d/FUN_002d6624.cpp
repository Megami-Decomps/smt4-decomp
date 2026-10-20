/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d6624` (_code @ 0x2d6624, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043da2c; /* 0x43da2c */


unsigned short FUN_002d6624(unsigned int param_1)

{
  if ((DAT_0043da2c != 0) && (param_1 < 6)) {
    return *(unsigned short *)(DAT_0043da2c + param_1 * 4 + 0x496);
  }
  return 0;
}

} /* extern "C" */
