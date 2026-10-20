#include "romwright_types.h"

extern "C" {

extern int FUN_002f8236(void);


void FUN_0010dfdc(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002f8236();
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  return;
}

} /* extern "C" */
