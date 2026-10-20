#include "romwright_types.h"

extern "C" {

extern int DAT_0043e278; /* 0x43e278 */


void FUN_0024ac68(unsigned char param_1)

{
  *(unsigned char *)(DAT_0043e278 + 0xedc) = param_1;
  return;
}

} /* extern "C" */
