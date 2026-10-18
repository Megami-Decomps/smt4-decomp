/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b6694` (_code @ 0x1b6694, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int * FUN_001b6694(int param_1,int param_2)

{
  int *piVar1;
  unsigned int *puVar2;
  
  piVar1 = (int *)(param_2 + 4);
  puVar2 = *(unsigned int **)(param_1 + 0x1e4);
  *piVar1 = param_1 + 0x1e0;
  *(unsigned int **)(param_2 + 8) = puVar2;
  *(int **)(param_1 + 0x1e4) = piVar1;
  *puVar2 = (unsigned int)piVar1;
  *(int *)(param_1 + 0x1dc) = *(int *)(param_1 + 0x1dc) + 1;
  return piVar1;
}
