#include "romwright_types.h"

extern "C" {

extern int FUN_001acf08(void);


void FUN_0035161c(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_001acf08();
  *(int *)(param_1 + 0x2c) = temp_v0 + *(int *)(param_1 + 0x2c);
  return;
}

} /* extern "C" */
