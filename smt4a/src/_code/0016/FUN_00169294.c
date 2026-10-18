/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00169294` (_code @ 0x169294, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_00169294(int param_1,int param_2,unsigned int param_3)

{
  return param_3 | (param_3 << 8) | (param_1 << 0x10) | (param_2 << 0x14) | (param_1 << 0x18) |
         (param_2 << 0x1c);
}
