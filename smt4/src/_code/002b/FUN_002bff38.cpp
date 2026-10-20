#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e188; /* 0x43e188 */


void FUN_002bff38(unsigned char param_1)

{
  if ((*(int *)((unsigned char *)&DAT_0043e188 + 0x4)) != 0) {
    *(unsigned char *)((*(int *)((unsigned char *)&DAT_0043e188 + 0x4)) + 0xa11) = param_1;
  }
  return;
}

} /* extern "C" */
