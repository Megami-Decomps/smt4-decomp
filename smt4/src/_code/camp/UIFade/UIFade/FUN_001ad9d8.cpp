#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043dd38; /* 0x43dd38 */


void FUN_001ad9d8(unsigned char param_1)

{
  if ((*(int *)((unsigned char *)&DAT_0043dd38 + 0x4)) != 0) {
    *(unsigned char *)((*(int *)((unsigned char *)&DAT_0043dd38 + 0x4)) + 0x10) = param_1;
  }
  return;
}

} /* extern "C" */
