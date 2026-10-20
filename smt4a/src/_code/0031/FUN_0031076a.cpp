#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

int * FUN_0031076a(int *param_1,int param_2)

{
  if ((int *)*param_1 != (int *)0x0) {
    (**(romwright_code **)(*(int *)*param_1 + 4))((int *)*param_1);
  }
  *param_1 = param_2;
  return param_1;
}

} /* extern "C" */
