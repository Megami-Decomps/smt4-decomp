/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b90c0` (_code @ 0x2b90c0, 0x10 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_002b90c0(int param_1)

{
  *(unsigned int *)(param_1 + 0x34) = *(unsigned int *)(param_1 + 0x34) & 0xffffff7f;
  return;
}
