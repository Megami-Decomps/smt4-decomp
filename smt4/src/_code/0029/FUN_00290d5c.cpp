#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043da28; /* 0x43da28 */


void FUN_00290d5c(unsigned char param_1)

{
  if ((*(int *)((unsigned char *)&DAT_0043da28 + 0x4)) != 0) {
    *(unsigned char *)((*(int *)((unsigned char *)&DAT_0043da28 + 0x4)) + 0x4c9) = param_1;
  }
  return;
}

} /* extern "C" */
