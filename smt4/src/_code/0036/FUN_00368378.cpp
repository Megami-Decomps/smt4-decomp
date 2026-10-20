/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00368378` (_code @ 0x368378, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_00368378(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    puVar2 = *(unsigned int **)(param_2 + 0x168);
    for (puVar1 = *(unsigned int **)(param_2 + 0x164); puVar1 != puVar2; puVar1 = puVar1 + 1) {
      (**(romwright_code **)(**(int **)(param_1 + 8) + 0xc))(*(int **)(param_1 + 8),*puVar1);
    }
  }
  return;
}

} /* extern "C" */
