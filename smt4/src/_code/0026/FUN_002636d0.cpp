#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043da28; /* 0x43da28 */


void FUN_002636d0(unsigned char param_1)

{
  *(unsigned char *)((*(int *)((unsigned char *)&DAT_0043da28 + 0x4)) + 0x4c5) = param_1;
  return;
}

} /* extern "C" */
