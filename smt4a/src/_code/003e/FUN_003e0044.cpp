#include "romwright_types.h"

extern "C" {

extern int FUN_001801a4(void);


unsigned char FUN_003e0044(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_001801a4();
  return ((unsigned int)*(unsigned short *)(temp_v0 + 0x5e) & (1 << (param_1 & 0xff))) != 0;
}

} /* extern "C" */
