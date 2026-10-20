#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_00406204(int param_1)

{
  int temp_v0;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 8);
  for (piVar2 = *(int **)(param_1 + 4); piVar2 != piVar3; piVar2 = piVar2 + 1) {
    if ((int *)*piVar2 != (int *)0x0) {
      (**(romwright_code **)(*(int *)*piVar2 + 4))((int *)*piVar2);
    }
  }
  temp_v0 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 4) != temp_v0) {
    *(unsigned int *)(param_1 + 8) = temp_v0 - ((temp_v0 - *(int *)(param_1 + 4)) & 0xfffffffcU);
  }
  return;
}

} /* extern "C" */
