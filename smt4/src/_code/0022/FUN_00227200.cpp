#include "romwright_types.h"

extern "C" {

extern int jobGetWork(void);


void FUN_00227200(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
  int temp_v0;
  
  temp_v0 = jobGetWork();
  *(unsigned int *)(temp_v0 + 0x7c) = param_2;
  *(unsigned int *)(temp_v0 + 0x80) = param_3;
  return;
}

} /* extern "C" */
