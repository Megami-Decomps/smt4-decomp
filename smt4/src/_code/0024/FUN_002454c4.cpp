#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_002470a8(unsigned int, unsigned int, unsigned char);


void FUN_002454c4(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
  unsigned int temp_v0;
  
  temp_v0 = FUN_002470a8(param_3,param_2,param_4 != 0);
  *(unsigned int *)(param_1 + 0x1cfc) = temp_v0;
  return;
}

} /* extern "C" */
