#include "romwright_types.h"

extern "C" {

extern int FUN_002b63ac(void);


int FUN_002bd1fc(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002b63ac();
  return temp_v0 + 0x4c;
}

} /* extern "C" */
