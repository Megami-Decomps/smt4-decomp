/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103f74` (_code @ 0x103f74, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_00103f74(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_1 + 0xc) | param_2;
  return;
}
