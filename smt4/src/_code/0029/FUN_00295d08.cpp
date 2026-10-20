#include "romwright_types.h"

extern "C" {

extern int FUN_002b63ac(void);


unsigned char FUN_00295d08(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002b63ac();
  return ((unsigned int)*(unsigned short *)(temp_v0 + 0x72) & (1 << (param_1 & 0xff))) != 0;
}

} /* extern "C" */
