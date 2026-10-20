#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e2a8; /* 0x43e2a8 */


void FUN_00195510(unsigned char param_1)

{
  *(unsigned char *)((*(int *)((unsigned char *)&DAT_0043e2a8 + 0x4)) + 0x24bb0) = param_1;
  return;
}

} /* extern "C" */
