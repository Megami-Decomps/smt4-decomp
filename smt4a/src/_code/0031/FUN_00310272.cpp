#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_00307dfe(void);


void FUN_00310272(int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = FUN_00307dfe();
  *(unsigned int *)(param_1 + 0x10) = temp_v0;
  *(unsigned int *)temp_v0 = temp_v0;
  *(int *)(*(int *)(param_1 + 0x10) + 4) = *(int *)(param_1 + 0x10);
  return;
}

} /* extern "C" */
