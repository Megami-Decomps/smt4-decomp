/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001032b4` (_code @ 0x1032b4, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_001032b4(int param_1)

{
  return *(unsigned int *)(param_1 + 0xc) & 0x80;
}

} /* extern "C" */
