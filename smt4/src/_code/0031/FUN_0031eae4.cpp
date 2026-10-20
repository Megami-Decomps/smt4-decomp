#include "romwright_types.h"

extern "C" {

extern int DAT_0043e278; /* 0x43e278 */


void FUN_0031eae4(void)

{
  int temp_v0;
  
  temp_v0 = DAT_0043e278;
  *(unsigned char *)(DAT_0043e278 + 0xf60) = 1;
  *(unsigned char *)(temp_v0 + 0xf63) = 0;
  *(unsigned char *)(temp_v0 + 0xf64) = 0;
  *(unsigned char *)(temp_v0 + 0xf65) = 0;
  *(unsigned char *)(temp_v0 + 0xf99) = 1;
  return;
}

} /* extern "C" */
