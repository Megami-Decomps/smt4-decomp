#include "romwright_types.h"

extern "C" {

extern int DAT_0043daa8; /* 0x43daa8 */


void FUN_00269cb8(unsigned int param_1)

{
  if (DAT_0043daa8 != 0) {
    *(unsigned int *)(DAT_0043daa8 + 0xd34) = param_1;
  }
  return;
}

} /* extern "C" */
