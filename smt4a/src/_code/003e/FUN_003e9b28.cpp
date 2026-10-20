#include "romwright_types.h"

extern "C" {

extern int FUN_002626e0(void);


unsigned int FUN_003e9b28(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002626e0();
  if ((temp_v0 == 0) || (*(int *)(param_1 + 0xf0) < 0)) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
