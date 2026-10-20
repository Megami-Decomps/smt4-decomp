#include "romwright_types.h"

extern "C" {

extern int FUN_002c08f0(void);


void FUN_002fdfe0(unsigned int param_1,unsigned int param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_002c08f0();
  *(unsigned int *)(temp_v0 + 0x38) = param_2;
  return;
}

} /* extern "C" */
