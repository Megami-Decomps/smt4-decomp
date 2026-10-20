#include "romwright_types.h"

extern "C" {


unsigned int nn_fnd_detail_GetNextListObject(unsigned int *param_1,int param_2)

{
  unsigned int temp_v0;
  
  if (param_2 == 0) {
    temp_v0 = *param_1;
  }
  else {
    temp_v0 = *(unsigned int *)((unsigned int)*(unsigned short *)((int)param_1 + 10) + param_2 + 4);
  }
  return temp_v0;
}

} /* extern "C" */
