#include "romwright_types.h"

extern "C" {

extern int FUN_002ecf28(void);


unsigned int FUN_00123a44(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002ecf28();
  return *(unsigned int *)(temp_v0 + 0xc);
}

} /* extern "C" */
