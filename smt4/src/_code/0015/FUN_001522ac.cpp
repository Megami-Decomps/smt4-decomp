#include "romwright_types.h"

extern "C" {


unsigned int FUN_001522ac(int param_1,int param_2)

{
  unsigned int temp_v0;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    temp_v0 = 0;
  }
  else {
    temp_v0 = *(unsigned int *)(*(int *)(param_1 + 4) + param_2 * 0xc + 0xc);
  }
  return temp_v0;
}

} /* extern "C" */
