#include "romwright_types.h"

extern "C" {


void FUN_00309776(int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *(int *)(param_2 + 8);
  *(unsigned int *)(param_2 + 8) = *(unsigned int *)(temp_v1 + 0xc);
  if (*(int *)(temp_v1 + 0xc) != 0) {
    *(int *)(*(int *)(temp_v1 + 0xc) + 4) = param_2;
  }
  *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(param_2 + 4);
  if (*(int *)(*(int *)(param_1 + 0x10) + 4) == param_2) {
    *(int *)(*(int *)(param_1 + 0x10) + 4) = temp_v1;
  }
  else {
    temp_v0 = *(int *)(param_2 + 4);
    if (*(int *)(temp_v0 + 0xc) == param_2) {
      *(int *)(temp_v0 + 0xc) = temp_v1;
    }
    else {
      *(int *)(temp_v0 + 8) = temp_v1;
    }
  }
  *(int *)(temp_v1 + 0xc) = param_2;
  *(int *)(param_2 + 4) = temp_v1;
  return;
}

} /* extern "C" */
