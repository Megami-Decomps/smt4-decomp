#include "romwright_types.h"

extern "C" {


void FUN_002a3188(unsigned int *param_1,unsigned int *param_2)

{
  *param_2 = *param_1;
  *param_1 = (unsigned int)param_2;
  return;
}

} /* extern "C" */
