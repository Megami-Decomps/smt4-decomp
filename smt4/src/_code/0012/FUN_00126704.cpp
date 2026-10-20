#include "romwright_types.h"

extern "C" {

extern int FUN_002c08f0(void);


unsigned int FUN_00126704(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002c08f0();
  return *(unsigned int *)(temp_v0 + 0x38);
}

} /* extern "C" */
