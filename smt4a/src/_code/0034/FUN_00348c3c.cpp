#include "romwright_types.h"

extern "C" {

extern int DAT_0057f65c; /* 0x57f65c */


void FUN_00348c3c(unsigned char param_1)

{
  *(unsigned char *)(DAT_0057f65c + 0xff4) = param_1;
  return;
}

} /* extern "C" */
