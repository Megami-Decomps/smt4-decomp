#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e2a8; /* 0x43e2a8 */


void FUN_00254600(unsigned short param_1)

{
  unsigned short *p = (unsigned short *)((*(int *)((unsigned char *)&DAT_0043e2a8 + 0x4)) + 0x24b88);
  p[0x12] = param_1;
  return;
}

} /* extern "C" */
