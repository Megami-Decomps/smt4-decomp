#include "romwright_types.h"

extern "C" {

extern int DAT_00587f0c; /* 0x587f0c */


void FUN_003278ac(void)

{
  int temp_v0;
  
  temp_v0 = DAT_00587f0c;
  *(unsigned char *)(DAT_00587f0c + 0xc) = 1;
  *(unsigned char *)(temp_v0 + 0x6c) = 1;
  return;
}

} /* extern "C" */
