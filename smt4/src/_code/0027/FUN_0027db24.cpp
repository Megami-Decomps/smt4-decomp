#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e2a8; /* 0x43e2a8 */


void FUN_0027db24(unsigned char param_1)

{
  *(unsigned char *)((*(int *)((unsigned char *)&DAT_0043e2a8 + 0x4)) + 0x1ecd8) = param_1;
  return;
}

} /* extern "C" */
