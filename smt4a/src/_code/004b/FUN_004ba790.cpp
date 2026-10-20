#include "romwright_types.h"

extern "C" {

extern int FUN_004cfe4c(void);


unsigned int FUN_004ba790(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_004cfe4c();
  return *(unsigned int *)(param_1 + temp_v0 * 4 + 0x7ec);
}

} /* extern "C" */
