/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bf584` (_code @ 0x2bf584, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int * FUN_002bf584(int param_1,int param_2)

{
  int *piVar1;
  unsigned int *puVar2;
  
  *(int *)(param_2 + 8) = param_1;
  piVar1 = (int *)(param_2 + 0x18);
  puVar2 = *(unsigned int **)(param_1 + 0x20);
  *piVar1 = param_1 + 0x1c;
  *(unsigned int **)(param_2 + 0x1c) = puVar2;
  *(int **)(param_1 + 0x20) = piVar1;
  *puVar2 = (unsigned int)piVar1;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return piVar1;
}
