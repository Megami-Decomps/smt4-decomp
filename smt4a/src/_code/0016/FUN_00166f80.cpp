/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00166f80` (_code @ 0x166f80, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_00166f80(int param_1)

{
  *(unsigned int *)(param_1 + 0x34) = *(unsigned int *)(param_1 + 0x34) & 0xffffff7f;
  return;
}

} /* extern "C" */
