#include "romwright_types.h"

extern "C" {

extern unsigned short scrGetArg(unsigned int);


unsigned int FUN_002e1b78(int param_1)

{
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v1 = *(int *)(param_1 + 8);
  temp_v0 = scrGetArg(0);
  *(unsigned short *)(temp_v1 + 0x98) = temp_v0;
  *(unsigned int *)(temp_v1 + 0x84) = 10;
  *(unsigned char *)(temp_v1 + 0x88) = 3;
  return 1;
}

} /* extern "C" */
