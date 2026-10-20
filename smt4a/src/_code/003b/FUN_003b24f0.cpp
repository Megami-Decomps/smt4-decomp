#include "romwright_types.h"

extern "C" {


void FUN_003b24f0(int param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  puVar1 = *(unsigned int **)(param_1 + 0x20);
  temp_v0 = puVar1[1];
  temp_v1 = puVar1[2];
  temp_v2 = puVar1[3];
  *param_2 = *puVar1;
  param_2[1] = temp_v0;
  param_2[2] = temp_v1;
  param_2[3] = temp_v2;
  return;
}

} /* extern "C" */
