/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001394ec` (_code @ 0x1394ec, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005b400c; /* 0x5b400c */


unsigned char FUN_001394ec(int param_1)

{
  if (param_1 != 0) {
    DAT_005b400c = param_1;
  }
  return param_1 != 0;
}
