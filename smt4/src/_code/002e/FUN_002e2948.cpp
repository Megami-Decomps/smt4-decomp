#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e188; /* 0x43e188 */


void FUN_002e2948(unsigned char param_1)

{
  *(unsigned char *)((*(int *)((unsigned char *)&DAT_0043e188 + 0x4)) + 0xa34) = param_1;
  return;
}

} /* extern "C" */
