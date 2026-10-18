/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ed206` (_code @ 0x2ed206, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_002ed206(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 0x2c) = *(unsigned int *)(param_1 + 0x2c) | param_2;
  return;
}
