#include "romwright_types.h"

extern "C" {

extern int FUN_002b93b0(void);


unsigned int FUN_002c1c0c(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002b93b0();
  return *(unsigned int *)(temp_v0 + 8);
}

} /* extern "C" */
