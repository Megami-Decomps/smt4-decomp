#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e140; /* 0x44e140 */


void FUN_0026b5a8(unsigned char param_1)

{
  if ((*(int *)((unsigned char *)&DAT_0044e140 + 0x4)) != 0) {
    *(unsigned char *)((*(int *)((unsigned char *)&DAT_0044e140 + 0x4)) + 0x1eb9) = param_1;
  }
  return;
}

} /* extern "C" */
