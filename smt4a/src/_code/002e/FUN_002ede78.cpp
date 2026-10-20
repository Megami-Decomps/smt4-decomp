#include "romwright_types.h"

extern "C" {

extern int FUN_002ede60(void);


void FUN_002ede78(unsigned int param_1,int param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_002ede60();
  *(unsigned int *)(temp_v0 + 0x20) = *(unsigned int *)(param_2 + 0x20);
  return;
}

} /* extern "C" */
