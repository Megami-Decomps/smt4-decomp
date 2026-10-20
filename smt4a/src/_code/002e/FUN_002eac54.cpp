/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eac54` (_code @ 0x2eac54, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_002eac54(unsigned int param_1,unsigned int param_2)

{
  return (param_1 & 0xff) | (((param_1 >> 8) & ~param_2) << 8);
}

} /* extern "C" */
