/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c5da8` (_code @ 0x2c5da8, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_002c5da8(int param_1,int param_2,unsigned int param_3)

{
  return param_3 | (param_3 << 8) | (param_1 << 0x10) | (param_2 << 0x14) | (param_1 << 0x18) |
         (param_2 << 0x1c);
}
