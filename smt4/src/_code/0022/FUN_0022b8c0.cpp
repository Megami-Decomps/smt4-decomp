#include "romwright_types.h"

extern "C" {

extern int FUN_0023360c(void);


unsigned int FUN_0022b8c0(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_0023360c();
  return *(unsigned int *)(param_1 + temp_v0 * 4 + 0x530);
}

} /* extern "C" */
