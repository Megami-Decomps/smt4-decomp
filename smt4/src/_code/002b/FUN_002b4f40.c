/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b4f40` (_code @ 0x2b4f40, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_002b4f40(int param_1,unsigned int *param_2)

{
  if (*(unsigned int **)(param_1 + 0x170) == (unsigned int *)0x0) {
    *(unsigned int **)(param_1 + 0x16c) = param_2;
  }
  else {
    **(unsigned int **)(param_1 + 0x170) = (unsigned int)param_2;
  }
  *(unsigned int **)(param_1 + 0x170) = param_2;
  *param_2 = 0;
  return *(unsigned int *)(param_1 + 0x174);
}
