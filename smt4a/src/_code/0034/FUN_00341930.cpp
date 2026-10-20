/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00341930` (_code @ 0x341930, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned char FUN_00341930(int param_1)

{
  return (*(unsigned int *)(param_1 + 0x10) & 4) != 0;
}

} /* extern "C" */
