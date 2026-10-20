#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e140; /* 0x44e140 */


void FUN_00317e58(unsigned int param_1)

{
  if ((*(int *)((unsigned char *)&DAT_0044e140 + 0x4)) != 0) {
    *(unsigned int *)((*(int *)((unsigned char *)&DAT_0044e140 + 0x4)) + 0x1898) = param_1;
  }
  return;
}

} /* extern "C" */
