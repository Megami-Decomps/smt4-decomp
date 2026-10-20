#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e140; /* 0x44e140 */


void FUN_0029a164(unsigned char param_1)

{
  *(unsigned char *)((*(int *)((unsigned char *)&DAT_0044e140 + 0x4)) + 0x12ee) = param_1;
  return;
}

} /* extern "C" */
