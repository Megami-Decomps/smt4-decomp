/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ba4f8` (_code @ 0x1ba4f8, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned char FUN_001ba4f8(int param_1,unsigned int param_2)

{
  return ((unsigned int)*(unsigned char *)(param_1 + (param_2 >> 3) + 0x68) & (1 << (param_2 & 7))) != 0;
}

} /* extern "C" */
