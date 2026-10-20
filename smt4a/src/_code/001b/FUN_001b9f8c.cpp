#include "romwright_types.h"

extern "C" {


void FUN_001b9f8c(unsigned int *param_1,unsigned int *param_2)

{
  *param_2 = *param_1;
  *param_1 = (unsigned int)param_2;
  return;
}

} /* extern "C" */
