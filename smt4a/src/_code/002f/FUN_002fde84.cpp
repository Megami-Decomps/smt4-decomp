/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fde84` (_code @ 0x2fde84, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int FUN_002fde84(int param_1)

{
  return *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc);
}

} /* extern "C" */
