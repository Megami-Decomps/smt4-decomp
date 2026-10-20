#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

int * FUN_004d88cc(int *param_1)

{
  if ((int *)*param_1 != (int *)0x0) {
    (**(romwright_code **)(*(int *)*param_1 + 4))(*param_1);
    *param_1 = 0;
  }
  return param_1;
}

} /* extern "C" */
