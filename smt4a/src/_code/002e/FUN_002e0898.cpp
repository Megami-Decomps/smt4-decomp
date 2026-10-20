#include "romwright_types.h"

extern "C" {

extern int FUN_00164a9c(void);


void FUN_002e0898(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
  int temp_v0;
  
  temp_v0 = FUN_00164a9c();
  *(unsigned int *)(temp_v0 + 0x58) = param_2;
  *(unsigned int *)(temp_v0 + 0x5c) = param_3;
  return;
}

} /* extern "C" */
