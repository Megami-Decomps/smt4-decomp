#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_001a77ac(int param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4,unsigned int *param_5)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(**(romwright_code **)(**(int **)(param_1 + 0x260) + 0x14))(*(int **)(param_1 + 0x260));
  if ((puVar1 != (unsigned int *)0x0) && ((*puVar1 & 0x20000000) == 0)) {
    puVar1 = (unsigned int *)0x0;
  }
  if (param_2 != (unsigned int *)0x0) {
    *param_2 = puVar1[4];
  }
  if (param_3 != (unsigned int *)0x0) {
    *param_3 = puVar1[3];
  }
  if (param_4 != (unsigned int *)0x0) {
    *param_4 = puVar1[1];
  }
  if (param_5 != (unsigned int *)0x0) {
    *param_5 = puVar1[2];
  }
  return;
}

} /* extern "C" */
