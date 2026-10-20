#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043da28;


unsigned char FUN_002f5b74(unsigned int param_1)

{
  unsigned char temp_v0;
  
  if (((*(int *)((unsigned char *)&DAT_0043da28 + 0x4)) != 0) && (param_1 < 6)) {
    int *e = (int *)(*(int *)((unsigned char *)&DAT_0043da28 + 0x4)) + param_1;
    temp_v0 = *((unsigned char *)e + 0x494);
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
