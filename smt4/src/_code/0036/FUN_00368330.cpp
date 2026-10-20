#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_00368330(int param_1,int param_2)

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
