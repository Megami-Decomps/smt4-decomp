/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00104e28` (_code @ 0x104e28, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004650ac; /* 0x4650ac */


unsigned char FUN_00104e28(int param_1)

{
  if (param_1 != 0) {
    DAT_004650ac = param_1;
  }
  return param_1 != 0;
}
