#include "romwright_types.h"

extern "C" {

extern int DAT_0057f56c; /* 0x57f56c */


void FUN_002a3274(unsigned short param_1)

{
  int temp_v0;
  
  temp_v0 = DAT_0057f56c;
  *(unsigned int *)(DAT_0057f56c + 0x14) = 5;
  *(unsigned short *)(temp_v0 + 0x18) = param_1;
  *(unsigned char *)(temp_v0 + 0x2b1) = 0;
  return;
}

} /* extern "C" */
