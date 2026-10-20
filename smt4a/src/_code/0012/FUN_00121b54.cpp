#include "romwright_types.h"

extern "C" {

extern int FUN_002eac34(unsigned int);


void FUN_00121b54(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002eac34(3);
  *(int *)(temp_v0 + 0x14) = param_1 + 0xe8;
  temp_v0 = FUN_002eac34(2);
  *(int *)(temp_v0 + 0x14) = param_1 + 0xe8;
  return;
}

} /* extern "C" */
