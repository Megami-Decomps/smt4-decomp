/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b5e80` (_code @ 0x3b5e80, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_003b5e80(unsigned int param_1,int param_2,int param_3)

{
  return param_1 | (param_2 << 4) | (param_3 << 8);
}

} /* extern "C" */
