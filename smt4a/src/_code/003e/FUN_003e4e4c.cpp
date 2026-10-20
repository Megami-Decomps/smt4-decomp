#include "romwright_types.h"

extern "C" {

extern int FUN_001ab888(void);


void FUN_003e4e4c(unsigned short param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_001ab888();
  *(unsigned short *)(temp_v0 + 0x2c4c) = param_1;
  return;
}

} /* extern "C" */
