#include "romwright_types.h"

extern "C" {


void FUN_004d87bc(int *param_1,int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if (*param_1 != 0) {
    temp_v0 = *(int *)(*param_1 + 4);
    temp_v1 = *(unsigned int *)(temp_v0 + 4);
    if (param_2 == 0) {
      temp_v1 = temp_v1 & 0xfffffffe;
    }
    else {
      temp_v1 = temp_v1 | 1;
    }
    *(unsigned int *)(temp_v0 + 4) = temp_v1;
  }
  return;
}

} /* extern "C" */
