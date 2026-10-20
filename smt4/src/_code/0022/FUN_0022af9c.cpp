#include "romwright_types.h"

extern "C" {

extern int DAT_0043e128; /* 0x43e128 */


void FUN_0022af9c(unsigned char param_1)

{
  *(unsigned char *)(DAT_0043e128 + 0x20) = param_1;
  return;
}

} /* extern "C" */
