#include "romwright_types.h"

extern "C" {

extern int FUN_00162e8c(void);


void FUN_00398004(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_00162e8c();
  *(unsigned char *)(temp_v0 + 0x1c) = param_1 != 0;
  return;
}

} /* extern "C" */
