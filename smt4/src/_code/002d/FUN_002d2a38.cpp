#include "romwright_types.h"

extern "C" {

extern int FUN_002c2950(void);


void FUN_002d2a38(int param_1,unsigned char param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_002c2950();
  if (param_1 < 0x40) {
    *(unsigned char *)(temp_v0 + param_1 + 0xbd8) = param_2;
  }
  return;
}

} /* extern "C" */
