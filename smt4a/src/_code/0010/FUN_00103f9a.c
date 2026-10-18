/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103f9a` (_code @ 0x103f9a, 0xa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_00103f9a(int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = *(unsigned int *)(param_1 + 0x24);
  *(unsigned int *)(param_1 + 0x24) = 0;
  return temp_v0;
}
