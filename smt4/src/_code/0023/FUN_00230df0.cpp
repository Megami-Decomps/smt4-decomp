#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e188; /* 0x43e188 */


void FUN_00230df0(unsigned char param_1)

{
  *(unsigned char *)((*(int *)((unsigned char *)&DAT_0043e188 + 0x8)) + 0x32) = param_1;
  return;
}

} /* extern "C" */
