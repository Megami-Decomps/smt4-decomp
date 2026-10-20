#include "romwright_types.h"

extern "C" {

extern unsigned long long FUN_00270384(int, unsigned int);
extern unsigned int FUN_002c2950(void);


void FUN_00270358(int param_1,unsigned char param_2)

{
  unsigned int temp_v0;
  unsigned long long temp_v1;
  
  temp_v0 = FUN_002c2950();
  temp_v1 = FUN_00270384(param_1,temp_v0);
  if ((int)temp_v1 != 0) {
    *(unsigned char *)((int)((unsigned long long)temp_v1 >> 0x20) + param_1 + 0xe14) = param_2;
  }
  return;
}

} /* extern "C" */
