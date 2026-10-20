#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00439c88; /* 0x439c88 */


void FUN_0025c2d0(unsigned int param_1,unsigned char param_2)

{
  *(unsigned char *)((*(int *)((unsigned char *)&DAT_00439c88 + 0x20)) + 0x54dc) = param_2;
  return;
}

} /* extern "C" */
