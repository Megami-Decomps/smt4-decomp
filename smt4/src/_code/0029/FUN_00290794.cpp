#include "romwright_types.h"

extern "C" {

extern int FUN_002542a4(void);


unsigned int FUN_00290794(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002542a4();
  return *(unsigned int *)(temp_v0 + param_1 * 4);
}

} /* extern "C" */
