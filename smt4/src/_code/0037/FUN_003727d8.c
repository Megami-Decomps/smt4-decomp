/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003727d8` (_code @ 0x3727d8, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_003727d8(int param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  puVar1 = (unsigned int *)(**(romwright_code **)(**(int **)(param_1 + 600) + 0x10))();
  if ((puVar1 == (unsigned int *)0x0) || ((*puVar1 & 0x80000000) == 0)) {
    puVar1 = (unsigned int *)0x0;
  }
  puVar2 = (unsigned int *)(**(romwright_code **)(**(int **)(param_1 + 600) + 0x10))();
  if ((puVar2 != (unsigned int *)0x0) && ((*puVar2 & 0x40000000) == 0)) {
    puVar2 = (unsigned int *)0x0;
  }
  if (puVar1 != (unsigned int *)0x0) {
    temp_v0 = param_2[1];
    temp_v1 = param_2[2];
    puVar1[2] = *param_2;
    puVar1[3] = temp_v0;
    puVar1[4] = temp_v1;
  }
  else if (puVar2 != (unsigned int *)0x0) {
    temp_v0 = param_2[1];
    temp_v1 = param_2[2];
    puVar2[2] = *param_2;
    puVar2[3] = temp_v0;
    puVar2[4] = temp_v1;
    return;
  }
  return;
}
