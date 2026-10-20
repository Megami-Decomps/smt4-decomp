#include "romwright_types.h"

extern "C" {

extern int FUN_002ea4bc(void);


unsigned int FUN_002e9af4(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002ea4bc();
  return *(unsigned int *)(temp_v0 + 0x10);
}

} /* extern "C" */
