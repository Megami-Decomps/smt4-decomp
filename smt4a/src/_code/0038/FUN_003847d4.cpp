#include "romwright_types.h"

extern "C" {

extern int FUN_00162e8c(void);


void FUN_003847d4(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_00162e8c();
  *(unsigned int *)(temp_v0 + 0x18) = param_1;
  return;
}

} /* extern "C" */
