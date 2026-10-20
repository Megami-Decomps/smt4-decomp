#include "romwright_types.h"

extern "C" {


unsigned int * FUN_002e4e86(unsigned int *param_1,unsigned int *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}

} /* extern "C" */
