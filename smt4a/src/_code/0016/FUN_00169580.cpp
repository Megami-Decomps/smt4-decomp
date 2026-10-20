#include "romwright_types.h"

extern "C" {

extern int FUN_00164a9c(void);


unsigned int FUN_00169580(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00164a9c();
  return *(unsigned int *)(temp_v0 + 0x3c);
}

} /* extern "C" */
