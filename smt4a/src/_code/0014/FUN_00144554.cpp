#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005b3d54; /* 0x5b3d54 */


void FUN_00144554(unsigned int param_1)

{
  (*(unsigned int *)((unsigned char *)&DAT_005b3d54 + 0x10)) = param_1;
  return;
}

} /* extern "C" */
