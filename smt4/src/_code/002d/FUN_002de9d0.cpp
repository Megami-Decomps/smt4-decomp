#include "romwright_types.h"

extern "C" {

extern int FUN_00269a58(void);


void FUN_002de9d0(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_00269a58();
  *(int *)(param_1 + 0x2c) = temp_v0 + *(int *)(param_1 + 0x2c);
  return;
}

} /* extern "C" */
