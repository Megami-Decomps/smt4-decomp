#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043da28; /* 0x43da28 */


void FUN_002d6658(unsigned char param_1)

{
  *(unsigned char *)((*(int *)((unsigned char *)&DAT_0043da28 + 0x4)) + 0x4c4) = param_1;
  return;
}

} /* extern "C" */
