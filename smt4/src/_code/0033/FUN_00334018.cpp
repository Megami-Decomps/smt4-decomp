#include "romwright_types.h"

extern "C" {

extern int FUN_002b63ac(void);


void FUN_00334018(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002b63ac();
  unsigned short v = *(unsigned short *)(temp_v0 + 0x72);
  *(unsigned short *)(temp_v0 + 0x72) = v | (unsigned short)(1 << (param_1 & 0xff));
  return;
}

} /* extern "C" */
