#include "romwright_types.h"

extern "C" {

extern int FUN_00164a9c(void);


unsigned char FUN_0031bc88(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00164a9c();
  return *(int *)(temp_v0 + 0xc) == 0;
}

} /* extern "C" */
