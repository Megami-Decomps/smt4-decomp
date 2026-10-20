/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00124402` (_code @ 0x124402, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_00124402(unsigned int *param_1)

{
  return (*param_1 & 0x1f000) >> 0xc;
}

} /* extern "C" */
