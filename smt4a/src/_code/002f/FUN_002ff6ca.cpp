#include "romwright_types.h"

extern "C" {

extern int FUN_00308576(unsigned int *);


unsigned int * FUN_002ff6ca(unsigned int *param_1,unsigned char *param_2,unsigned char param_3)

{
  int temp_v0;
  
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(unsigned char *)(param_1 + 6) = param_3;
  *(unsigned char *)((int)param_1 + 0x19) = *param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  temp_v0 = FUN_00308576(param_1);
  param_1[4] = temp_v0;
  *(unsigned int *)(temp_v0 + 4) = 0;
  *(unsigned int *)(param_1[4] + 8) = param_1[4];
  *(unsigned int *)(param_1[4] + 0xc) = param_1[4];
  return param_1;
}

} /* extern "C" */
