/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d109c` (_code @ 0x1d109c, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_001d109c(int param_1)

{
  return (*(unsigned int *)(param_1 + 0x754) & 0x10000) >> 0x10;
}

} /* extern "C" */
