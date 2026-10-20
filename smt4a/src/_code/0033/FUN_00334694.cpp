#include "romwright_types.h"

extern "C" {

extern int DAT_0057f2c4; /* 0x57f2c4 */


void FUN_00334694(unsigned short param_1)

{
  *(unsigned short *)(DAT_0057f2c4 + 0xc) = param_1;
  return;
}

} /* extern "C" */
