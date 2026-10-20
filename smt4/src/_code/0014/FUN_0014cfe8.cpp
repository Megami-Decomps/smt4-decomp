#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

unsigned int * FUN_0014cfe8(int param_1)

{
  unsigned int *puVar1;
  
  int *piVar2 = *(int **)(param_1 + 600);
  puVar1 = (unsigned int *)(**(romwright_code **)(*piVar2 + 0x14))(piVar2);
  if ((puVar1 != (unsigned int *)0x0) && ((*puVar1 & 0x40000000) == 0)) {
    puVar1 = (unsigned int *)0x0;
  }
  return puVar1 + 5;
}

} /* extern "C" */
