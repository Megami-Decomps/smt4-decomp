#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

unsigned int * FUN_001a777c(int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(**(romwright_code **)(**(int **)(param_1 + 600) + 0x14))(*(int *)(param_1 + 600));
  if ((puVar1 != (unsigned int *)0x0) && ((*puVar1 & 0x20000000) == 0)) {
    puVar1 = (unsigned int *)0x0;
  }
  return puVar1 + 2;
}

} /* extern "C" */
