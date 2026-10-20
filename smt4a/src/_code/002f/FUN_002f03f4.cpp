/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f03f4` (_code @ 0x2f03f4, 0xa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned char FUN_002f03f4(unsigned int param_1,unsigned int param_2)

{
  return ((param_1 >> 8) & param_2) != 0;
}

} /* extern "C" */
