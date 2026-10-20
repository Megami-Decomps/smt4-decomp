#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005b3d54; /* 0x5b3d54 */


void FUN_0013f52c(unsigned int param_1)

{
  (*(unsigned int *)((unsigned char *)&DAT_005b3d54 + 0x20)) = param_1;
  return;
}

} /* extern "C" */
