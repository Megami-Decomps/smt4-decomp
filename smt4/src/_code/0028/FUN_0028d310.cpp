#include "romwright_types.h"

extern "C" {

extern int FUN_002b63ac(void);


int FUN_0028d310(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002b63ac();
  return (int)*(short *)(temp_v0 + 0x2a);
}

} /* extern "C" */
