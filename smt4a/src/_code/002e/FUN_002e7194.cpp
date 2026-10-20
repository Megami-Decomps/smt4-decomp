#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

int * FUN_002e7194(int *param_1,int param_2)

{
  unsigned char temp_v0;
  
  param_1[10] = *(int *)(param_2 + 0x28);
  temp_v0 = (**(romwright_code **)(*param_1 + 8))(param_1);
  *(unsigned char *)(param_1 + 0xb) = temp_v0;
  return param_1;
}

} /* extern "C" */
