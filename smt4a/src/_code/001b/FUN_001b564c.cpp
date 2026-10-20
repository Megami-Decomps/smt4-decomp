#include "romwright_types.h"

extern "C" {

extern int FUN_001bcea0(void);


unsigned int FUN_001b564c(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_001bcea0();
  return *(unsigned int *)(temp_v0 + param_1 * 4);
}

} /* extern "C" */
