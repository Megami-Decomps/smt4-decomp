#include "romwright_types.h"

extern "C" {

extern int DAT_0057f56c; /* 0x57f56c */


void FUN_002a3258(void)

{
  int temp_v0;
  
  temp_v0 = DAT_0057f56c;
  *(unsigned int *)(DAT_0057f56c + 0x14) = 0;
  *(unsigned char *)(temp_v0 + 0x2b1) = 0;
  return;
}

} /* extern "C" */
