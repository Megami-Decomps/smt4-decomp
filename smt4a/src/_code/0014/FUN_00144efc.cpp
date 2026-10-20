#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005b3d54;


void FUN_00144efc(unsigned int param_1)

{
  (*(unsigned int *)((unsigned char *)&DAT_005b3d54 + 0x28)) = param_1;
  return;
}

} /* extern "C" */
