#include "romwright_types.h"

extern "C" {

extern int DAT_0043e278; /* 0x43e278 */


void FUN_0024ac7c(unsigned char param_1)

{
  *(unsigned char *)(DAT_0043e278 + 0xe8c) = param_1;
  return;
}

} /* extern "C" */
