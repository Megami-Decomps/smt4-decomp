#include "romwright_types.h"

extern "C" {

extern int jobGetWork(void);


void FUN_00389fcc(unsigned int param_1,unsigned int param_2)

{
  int temp_v0;
  
  temp_v0 = jobGetWork();
  *(unsigned int *)(temp_v0 + 0x3c) = param_2;
  return;
}

} /* extern "C" */
