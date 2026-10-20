#include "romwright_types.h"

extern "C" {


int FUN_00307ea0(int *param_1,int param_2,int param_3)

{
  return (((*param_1 - param_2) >> 2) * 0x20 + param_1[1]) - param_3;
}

} /* extern "C" */
