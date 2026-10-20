#include "romwright_types.h"

extern "C" {

extern int DAT_0057f578; /* 0x57f578 */


void FUN_00284f90(unsigned char param_1)

{
  *(unsigned char *)(DAT_0057f578 + 0x10) = param_1;
  return;
}

} /* extern "C" */
