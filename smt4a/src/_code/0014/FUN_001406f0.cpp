#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005b408c; /* 0x5b408c */


int FUN_001406f0(signed char param_1)

{
  int temp_v0;
  
  temp_v0 = (int)(*(signed char *)((unsigned char *)&DAT_005b408c + 0x1));
  (*(signed char *)((unsigned char *)&DAT_005b408c + 0x1)) = param_1;
  return temp_v0;
}

} /* extern "C" */
