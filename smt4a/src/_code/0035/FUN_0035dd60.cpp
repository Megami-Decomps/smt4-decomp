#include "romwright_types.h"

extern "C" {

extern int DAT_0057f2c4; /* 0x57f2c4 */


void FUN_0035dd60(unsigned char param_1)

{
  *(unsigned char *)(DAT_0057f2c4 + 0x20) = param_1;
  return;
}

} /* extern "C" */
