/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002668cc` (_code @ 0x2668cc, 0x10 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_002668cc(int param_1,int param_2,unsigned int param_3)

{
  *(int *)(param_1 + 4) = param_2 + 100;
  *(unsigned int *)(param_1 + 8) = param_3;
  return;
}
