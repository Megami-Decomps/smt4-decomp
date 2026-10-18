/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003105dc` (_code @ 0x3105dc, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_003105dc(int param_1,int param_2,int param_3,unsigned int param_4)

{
  return (unsigned int)(param_1 != 1) | (param_1 << 4) | ((param_4 & 0xff) << 8) | (param_2 << 0x10) |
         (param_3 << 0x18);
}
