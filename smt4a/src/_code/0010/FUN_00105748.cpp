#include "romwright_types.h"

extern "C" {

extern int FUN_002ebd34(void);


void FUN_00105748(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002ebd34();
  *(unsigned char *)(**(int **)(param_1 + 0x34) + temp_v0) = 1;
  return;
}

} /* extern "C" */
